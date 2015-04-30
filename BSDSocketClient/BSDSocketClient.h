//
//  BSDSocketClient.h
//  BSDSocketClient
//
//  Created by Calvin Cheng on 30/4/15.
//  Copyright (c) 2015 Hello HQ Pte. Ltd. All rights reserved.
//

#ifndef BSDSocketClient_BSDSocketClient_h
#define BSDSocketClient_BSDSocketClient_h

#import <Foundation/Foundation.h>

#define MAXLINE 4096

typedef NS_ENUM (NSUInteger, BSDClientErrorCode) {
    NOERROR,
    SOCKETERROR,
    CONNECTERROR,
    READERROR,
    WRITEERROR
};

@interface BSDSocketClient: NSObject

@property (nonatomic) int errorCode, sockfd;

-(instancetype)initWithAddress:(NSString *)addr andPort:(int)port;
-(ssize_t) writtenToSocket:(int)sockfdNum withChar:(NSString *)vptr;
-(NSString *) recvFromSocket:(int)lsockfd withMaxChar:(int)max;

@end

#endif
