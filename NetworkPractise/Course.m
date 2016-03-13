//
//  Course.m
//  NetworkPractise
//
//  Created by 郝一鹏 on 16/3/13.
//  Copyright © 2016年 bupt. All rights reserved.
//

#import "Course.h"


@implementation Course

+ (NSDictionary *)JSONKeyPathsByPropertyKey{
    return @{
             @"title":@"title",
             @"upcoming":@"upcoming",
             @"url":@"url"
             };
}


+ (NSValueTransformer *)urlJSONTransformer{
    return [NSValueTransformer valueTransformerForName:MTLURLValueTransformerName];
}

@end
