//
//  ViewController.swift
//  CBCNews AR
//
//  Created by Viviane Chan on 2017-08-26.
//  Copyright © 2017 VivianeChan. All rights reserved.
//

import UIKit

import CoreLocation
import MapKit

class ViewController: UIViewController {
    
    fileprivate var stories = [StoryAnnotation]()
    fileprivate let locationManager = CLLocationManager()
    @IBOutlet weak var mapView: MKMapView!
    var arViewController: ARViewController!
    var startedLoadingPOIs = false
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.startUpdatingLocation()
        locationManager.requestWhenInUseAuthorization()
        mapView.userTrackingMode = MKUserTrackingMode.followWithHeading
    }
}

extension ViewController: MKMapViewDelegate {
    public func mapView(_ mapView: MKMapView, viewFor annotation: MKAnnotation) -> MKAnnotationView? {
                
        let annotationView = StoryAnnotationView(annotation:annotation, reuseIdentifier:"")
        annotationView.isEnabled = true
        annotationView.canShowCallout = true
        annotationView.image = #imageLiteral(resourceName: "mapPin")

        let btn = UIButton(type: .detailDisclosure)
        annotationView.rightCalloutAccessoryView = btn
        return annotationView

    }

    public func mapView(_ mapView: MKMapView, annotationView view: MKAnnotationView, calloutAccessoryControlTapped control: UIControl) {
        print("tapped")
    }
    
    func mapView(_ mapView: MKMapView,
                 didSelect view: MKAnnotationView)
    {
        // 1
        if view.annotation is MKUserLocation
        {
            // Don't proceed with custom callout
            return
        }
        // 2
        let storyAnnotation = view.annotation as! StoryAnnotation
        let views = Bundle.main.loadNibNamed("CustomCalloutView", owner: nil, options: nil)
        let calloutView = views?[0] as! CustomCalloutView
        calloutView.storyImage.image = UIImage(named: storyAnnotation.storyImage!)
        calloutView.storyTitle.text = storyAnnotation.title
//        let button = UIButton(frame: calloutView.starbucksPhone.frame)
//        button.addTarget(self, action: #selector(ViewController.callPhoneNumber(sender:)), for: .touchUpInside)
//        calloutView.addSubview(button)
        // 3
        calloutView.center = CGPoint(x: view.bounds.size.width / 2, y: -calloutView.bounds.size.height*0.52)
        view.addSubview(calloutView)
        mapView.setCenter((view.annotation?.coordinate)!, animated: true)
    }

}

extension ViewController: CLLocationManagerDelegate {
    
    
    func locationManagerShouldDisplayHeadingCalibration(_ manager: CLLocationManager) -> Bool {
        return true
    }
    
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        
        if locations.count > 0 {
            let location = locations.last!
            if location.horizontalAccuracy < 100 {
                manager.stopUpdatingLocation()
                let span = MKCoordinateSpan(latitudeDelta: 0.014, longitudeDelta: 0.014)
                let region = MKCoordinateRegion(center: location.coordinate, span: span)
                mapView.region = region
                
                if !startedLoadingPOIs {
                    startedLoadingPOIs = true
                    
                    
                    self.stories = StoriesLoader().loadStories()
                    
                    for story in self.stories {
                            let annotation = StoryAnnotation(storyLocation: story.coordinate, storyImage: story.storyImage!, storyPublishedDate: story.storyPublishedDate, storyHashtag: story.title!)
//                            let annotation = StoryAnnotation(location: coordinate, title: story.storyHashtag, image: story.storyImage!, publishedDate: story.storyPublishedDate)
                            self.mapView.addAnnotation(annotation)
                        }
            
                }
            }
        }
    }
}



