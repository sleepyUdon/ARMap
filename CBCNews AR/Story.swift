//
//  Story.swift
//  CBCNews AR
//
//  Created by Viviane Chan on 2017-08-26.
//  Copyright © 2017 VivianeChan. All rights reserved.
//

import Foundation
import CoreLocation
import MapKit


class StoryAnnotation: NSObject, MKAnnotation {
    
        let coordinate: CLLocationCoordinate2D
        let title: String?

//    var storyHashtag: String
    var storyPublishedDate: String
//    var storyLocation: CLLocationCoordinate2D
    var storyImage: String?
    
    init(storyLocation: CLLocationCoordinate2D, storyImage: String, storyPublishedDate: String, storyHashtag: String) {
        self.title = storyHashtag
        self.coordinate = storyLocation
        self.storyPublishedDate = storyPublishedDate
        self.storyImage = storyImage
        
        super.init()
        
        
    }
}


//class StoryAnnotation: NSObject, MKAnnotation {
//    let coordinate: CLLocationCoordinate2D
//    let title: String?
//    let image: String?
//    let publishedDate: String?
//
//    init(location: CLLocationCoordinate2D, title: String, image: String, publishedDate: String) {
//        self.coordinate = location
//        self.title = title
//        self.image = image
//        self.publishedDate = publishedDate
//
//        super.init()
//    }
//}
