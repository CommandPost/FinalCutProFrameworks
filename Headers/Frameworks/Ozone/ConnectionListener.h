//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ConnectionListener : NSObject
{
    struct GreentreeServer *_server;
}

- (void)connectionAccepted:(id)arg1;
- (id)initWithServer:(struct GreentreeServer *)arg1;

@end

