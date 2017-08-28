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
    
    fileprivate var stories = [Story]()
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
                        if let location: CLLocation = story.storyLocation {
                            let coordinate: CLLocationCoordinate2D = location.coordinate
                            let annotation = StoryAnnotation(location: coordinate, title: story.storyHashtag, publishedDate: story.storyPublishedDate)
                            self.mapView.addAnnotation(annotation)
                        }
                    }
                }
            }
        }
    }
}



