//
//  Story.swift
//  CBCNews AR
//
//  Created by Viviane Chan on 2017-08-26.
//  Copyright © 2017 VivianeChan. All rights reserved.
//

import Foundation
import CoreLocation


class Story: ARAnnotation {
    var storyHashtag: String
    var storyPublishedDate: String
    var storyLocation: CLLocation
    
    init(storyLocation: CLLocation, storyPublishedDate: String, storyHashtag: String) {
        self.storyHashtag = storyHashtag
        self.storyPublishedDate = storyPublishedDate
        self.storyLocation = storyLocation
    }
}
