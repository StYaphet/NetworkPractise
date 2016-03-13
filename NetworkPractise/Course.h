//
//  Course.h
//  NetworkPractise
//
//  Created by 郝一鹏 on 16/3/13.
//  Copyright © 2016年 bupt. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface Course : MTLModel <MTLJSONSerializing>

/*
 *  {
 title = "Beginning iOS (iPhone/iPad) with Swift";
 upcoming =             (
 {
 "end_date" = "2016-03-25";
 instructors = "Scott Ritchie";
 location = "Big Nerd Ranch West";
 "start_date" = "2016-03-19";
 },
 {
 "end_date" = "2016-05-13";
 instructors = "Scott Ritchie";
 location = "Big Nerd Ranch West";
 "start_date" = "2016-05-07";
 },
 {
 "end_date" = "2016-06-24";
 instructors = "Joseph Dixon";
 location = "Big Nerd Ranch Callaway";
 "start_date" = "2016-06-18";
 },
 {
 "end_date" = "2016-07-15";
 instructors = "Scott Ritchie";
 location = "Big Nerd Ranch West";
 "start_date" = "2016-07-09";
 },
 {
 "end_date" = "2016-09-02";
 instructors = "Scott Ritchie";
 location = "Big Nerd Ranch West";
 "start_date" = "2016-08-27";
 },
 {
 "end_date" = "2016-10-28";
 instructors = "Scott Ritchie";
 location = "Big Nerd Ranch West";
 "start_date" = "2016-10-22";
 },
 {
 "end_date" = "2016-12-16";
 instructors = "Scott Ritchie";
 location = "Big Nerd Ranch West";
 "start_date" = "2016-12-10";
 }
 );
 url = "https://training.bignerdranch.com/classes/beginning-ios-iphone-ipad-with-swift";
 },
 */


@property (nonatomic, copy)NSString *title;
@property (nonatomic, copy)NSArray *upcoming;
@property (nonatomic, copy)NSString *url;

@end
