//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FFPMRLoggingFunnels : NSObject
{
    NSMutableDictionary *_funnels;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
- (void)appWillTerminate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)stopRecordingLogs;
- (id)copyFunnelForInstrumentName:(id)arg1;

@end

