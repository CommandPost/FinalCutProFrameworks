//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHChannelGlobals;

__attribute__((visibility("hidden")))
@interface FFChannelGlobalsListener : NSObject
{
    CHChannelGlobals *_channelGlobals;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)appWillTerminate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

