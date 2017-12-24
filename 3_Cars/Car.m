//
//  Car.m
//  Assignment3_Cars
//
//  Created by Yongwoo Huh on 12/24/17.
//  Copyright © 2017 YongwooHuh. All rights reserved.
//

#import "Car.h"

@implementation Car

- (void)drive
{
    NSLog(@"Car model: %@", self.model);
}

- (Car *)initWithModel:(NSString *)model
{
    _model = model;
    return self;
}

@end
