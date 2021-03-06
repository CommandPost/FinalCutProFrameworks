//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFRenderStateTracker, NSIndexSet;

__attribute__((visibility("hidden")))
@interface FFBGRenderAutoStartInfo : NSObject
{
    FFRenderStateTracker *_tracker;
    NSIndexSet *_statesToRender;
    CDStruct_e83c9415 _range;
    int _priority;
    _Bool _onlyDropSegs;
    _Bool _knownNotToNeedRender;
}

@property(readonly) _Bool onlyDropSegs; // @synthesize onlyDropSegs=_onlyDropSegs;
@property _Bool knownNotToNeedRender; // @synthesize knownNotToNeedRender=_knownNotToNeedRender;
@property(readonly) int priority; // @synthesize priority=_priority;
@property(readonly) CDStruct_e83c9415 range; // @synthesize range=_range;
@property(readonly, retain) NSIndexSet *statesToRender; // @synthesize statesToRender=_statesToRender;
@property(readonly, retain) FFRenderStateTracker *tracker; // @synthesize tracker=_tracker;
- (id)description;
- (void)segmentDropDetected:(id)arg1;
- (_Bool)needsRender;
- (CDStruct_e83c9415)nextRangeToRenderWithRetStates:(id *)arg1;
- (void)dealloc;
- (id)initWithTracker:(id)arg1 states:(id)arg2 range:(CDStruct_e83c9415)arg3 priority:(int)arg4 onlyForDropSegments:(_Bool)arg5;

@end

