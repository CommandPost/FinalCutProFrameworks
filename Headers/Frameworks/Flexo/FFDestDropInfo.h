//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FFDestDropInfo : NSObject
{
    struct FFTimeAndTimebasePair _timeDropDetected;
    CDStruct_1b6d18a9 _timeDropped;
    BOOL _dropCountIsExact;
    int _dropCount;
    NSString *_dropSource;
    BOOL _forScrubOrSkim;
}

@property(readonly) BOOL forScrubOrSkim; // @synthesize forScrubOrSkim=_forScrubOrSkim;
@property(readonly, retain) NSString *dropSource; // @synthesize dropSource=_dropSource;
@property(readonly) int dropCount; // @synthesize dropCount=_dropCount;
@property(readonly) BOOL dropCountIsExact; // @synthesize dropCountIsExact=_dropCountIsExact;
@property(readonly) CDStruct_1b6d18a9 timeDropped; // @synthesize timeDropped=_timeDropped;
@property(readonly) struct FFTimeAndTimebasePair timeDropDetected; // @synthesize timeDropDetected=_timeDropDetected;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initForDroppedTime:(CDStruct_1b6d18a9)arg1 dropCount:(int)arg2 countIsExact:(BOOL)arg3 dest:(id)arg4 forScrubOrSkim:(BOOL)arg5;

@end

