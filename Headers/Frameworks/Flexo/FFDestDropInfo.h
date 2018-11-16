//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFDestDropInfo : NSObject
{
    struct FFTimeAndTimebasePair _timeDropDetected;
    CDStruct_1b6d18a9 _timeDropped;
    BOOL _dropCountIsExact;
    int _dropCount;
}

@property(readonly) int dropCount; // @synthesize dropCount=_dropCount;
@property(readonly) BOOL dropCountIsExact; // @synthesize dropCountIsExact=_dropCountIsExact;
@property(readonly) CDStruct_1b6d18a9 timeDropped; // @synthesize timeDropped=_timeDropped;
@property(readonly) struct FFTimeAndTimebasePair timeDropDetected; // @synthesize timeDropDetected=_timeDropDetected;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initForDroppedTime:(CDStruct_1b6d18a9)arg1 dropCount:(int)arg2 countIsExact:(BOOL)arg3;

@end

