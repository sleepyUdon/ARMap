//
//  StoryAnnotation.swift
//  CBCNews AR
//
//  Created by Viviane Chan on 2017-08-26.
//  Copyright © 2017 VivianeChan. All rights reserved.
//

import Foundation
import MapKit


class StoryAnnotation: NSObject, MKAnnotation {
    let coordinate: CLLocationCoordinate2D
    let title: String?
    let publishedDate: String?
    
    init(location: CLLocationCoordinate2D, title: String, publishedDate: String) {
        self.coordinate = location
        self.title = title
        self.publishedDate = publishedDate
        
        super.init()
    }
}
