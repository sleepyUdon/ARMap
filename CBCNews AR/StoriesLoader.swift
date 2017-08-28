//
//  StoriesLoader.swift
//  CBCNews AR
//
//  Created by Viviane Chan on 2017-08-26.
//  Copyright © 2017 VivianeChan. All rights reserved.
//

import Foundation
import CoreLocation

struct StoriesLoader {
    
    func loadStories() -> [StoryAnnotation]{
        
        var stories = [StoryAnnotation]()
        
        let story1 = StoryAnnotation(storyLocation: CLLocationCoordinate2D(latitude: 43.6458693, longitude: -79.4567279), storyImage: "usa-immigration-canada-border", storyPublishedDate:"July 16, 2016", storyHashtag: "#STORY1")
        stories.append(story1)
        
        let story2 = StoryAnnotation(storyLocation: CLLocationCoordinate2D(latitude: 43.6448015, longitude: -79.388423),  storyImage: "usa-immigration-canada-border", storyPublishedDate:"July 16, 2016",storyHashtag: "#STORY2")
        stories.append(story2)

        let story3 = StoryAnnotation(storyLocation: CLLocationCoordinate2D(latitude: 43.1450, longitude: -81.3882),  storyImage: "usa-immigration-canada-border", storyPublishedDate:"July 16, 2016", storyHashtag: "#STORY3")
        stories.append(story3)
        
        return stories
    }
    
    
//    func loadPOIS(location: CLLocation, radius: Int = 1000, handler: @escaping (NSDictionary?, NSError?) -> Void) {
//        print("Load pois")
//        let latitude = location.coordinate.latitude
//        let longitude = location.coordinate.longitude
//        
//        let uri = apiURL + "nearbysearch/json?location=\(latitude),\(longitude)&radius=\(radius)&sensor=true&types=establishment&key=\(apiKey)"
//        
//        let url = URL(string: uri)!
//        let session = URLSession(configuration: URLSessionConfiguration.default)
//        let dataTask = session.dataTask(with: url) { data, response, error in
//            if let error = error {
//                print(error)
//            } else if let httpResponse = response as? HTTPURLResponse {
//                if httpResponse.statusCode == 200 {
//                    print(data!)
//                    
//                    do {
//                        let responseObject = try JSONSerialization.jsonObject(with: data!, options: .allowFragments)
//                        guard let responseDict = responseObject as? NSDictionary else {
//                            return
//                        }
//                        
//                        handler(responseDict, nil)
//                        
//                    } catch let error as NSError {
//                        handler(nil, error)
//                    }
//                }
//            }
//        }
//        
//        dataTask.resume()
//    }
    
//    func loadDetailInformation(forStory: Story, handler: @escaping (NSDictionary?, NSError?) -> Void) {
//        
//        let uri = apiURL + "details/json?reference=\(forStory.storyHashtag)&sensor=true&key=\(apiKey)"
//        
//        let url = URL(string: uri)!
//        let session = URLSession(configuration: URLSessionConfiguration.default)
//        let dataTask = session.dataTask(with: url) { data, response, error in
//            if let error = error {
//                print(error)
//            } else if let httpResponse = response as? HTTPURLResponse {
//                if httpResponse.statusCode == 200 {
//                    print(data!)
//                    
//                    do {
//                        let responseObject = try JSONSerialization.jsonObject(with: data!, options: .allowFragments)
//                        guard let responseDict = responseObject as? NSDictionary else {
//                            return
//                        }
//                        
//                        handler(responseDict, nil)
//                        
//                    } catch let error as NSError {
//                        handler(nil, error)
//                    }
//                }
//            }
//        }
//        
//        dataTask.resume()
//        
//    }
}
