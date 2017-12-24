//
//  Car.h
//  Assignment3_Cars
//
//  Created by Yongwoo Huh on 12/24/17.
//  Copyright © 2017 YongwooHuh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject

@property (nonatomic) NSString *model;

- (void)drive;      // prints the model of the car you are driving.
- (Car *)initWithModel:(NSString *)model;
@end
