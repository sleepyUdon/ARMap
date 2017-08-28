//
//  StoryAnnotationView.swift
//  CBCNews AR
//
//  Created by Viviane Chan on 2017-08-28.
//  Copyright © 2017 VivianeChan. All rights reserved.
//

import UIKit
import CoreLocation
import MapKit

class StoryAnnotationView: MKAnnotationView {
    var titleLabel: UILabel?
    var distanceLabel: UILabel?
    
    
    override func hitTest(_ point: CGPoint, with event: UIEvent?) -> UIView? {
        let hitView = super.hitTest(point, with: event)
        if (hitView != nil)
        {
            self.superview?.bringSubview(toFront: self)
        }
        return hitView
    }
    override func point(inside point: CGPoint, with event: UIEvent?) -> Bool {
        let rect = self.bounds;
        var isInside: Bool = rect.contains(point);
        if(!isInside)
        {
            for view in self.subviews
            {
                isInside = view.frame.contains(point);
                if isInside
                {
                    break;
                }
            }
        }
        return isInside;
    }
}

