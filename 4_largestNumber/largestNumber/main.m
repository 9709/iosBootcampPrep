//
//  main.m
//  largestNumber
//
//  Created by Yongwoo Huh on 12/24/17.
//  Copyright © 2017 YongwooHuh. All rights reserved.
//

#import <Foundation/Foundation.h>


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSArray *unsortedArray = @[@100, @800, @87426824, @2];
        
        int largestNumber = 0;
        
        for (NSNumber *number in unsortedArray) {
            if ([number intValue] >= largestNumber)
                largestNumber = [number intValue];
        }
        
        NSLog(@"The highest number in the array is %d", largestNumber);
    }
    return 0;
}
