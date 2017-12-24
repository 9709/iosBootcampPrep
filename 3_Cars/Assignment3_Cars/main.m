//
//  main.m
//  Assignment3_Cars
//
//  Created by Yongwoo Huh on 12/24/17.
//  Copyright © 2017 YongwooHuh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Toyota.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Car *nissan = [[Car alloc] initWithModel:@"Rouge"];
        [nissan drive];
        
        Toyota *toyota = [[Toyota alloc] init];
        [toyota drive];
    }
    return 0;
}
