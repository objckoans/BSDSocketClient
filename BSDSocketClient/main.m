//
//  main.m
//  BSDSocketClient
//
//  Created by Calvin Cheng on 30/4/15.
//  Copyright (c) 2015 Hello HQ Pte. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BSDSocketClient.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
    
        BSDSocketClient *bsdCli = [[BSDSocketClient alloc] initWithAddress:@"127.0.0.1" andPort:8888];
        if (bsdCli.errorCode == NOERROR) {
            [bsdCli writtenToSocket:bsdCli.sockfd withChar:@"Yooohoo"];
        } else {
            NSLog(@"%@", [NSString stringWithFormat:@"Error code %d received. Server not started.", bsdCli.errorCode]);
        }
    }
    return 0;
}