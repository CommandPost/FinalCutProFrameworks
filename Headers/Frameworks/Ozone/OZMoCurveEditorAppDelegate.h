//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OZCurveEditorAppDelegate.h"

@class NSString, OZTimingCoordinator;

@interface OZMoCurveEditorAppDelegate : NSObject <OZCurveEditorAppDelegate>
{
    struct OZDocument *_pDocument;
    OZTimingCoordinator *_pTimingCoordinator;
}

- (void)unsuppressEventCoalescing;
- (void)suppressEventCoalescing;
- (unsigned int)startTimecode;
- (unsigned int)firstFrameNumber;
- (BOOL)shouldDisplayTimeAsFrames;
- (CDStruct_5c5366e1)displayRange;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (CDStruct_1b6d18a9)secondsPerTextStep;
- (BOOL)isMotion;
- (double)version;
- (CDStruct_1b6d18a9)getFrameDuration;
- (BOOL)isObjectSelected:(struct OZChannelObjectRootBase *)arg1;
- (BOOL)objectsSelectedInScene;
- (struct OZCurveSetListSerializer *)getCurveSetListSerializer;
- (vector_0b8cba28)selectedObjectsRootChannels;
- (struct OZChannelObjectRootBase *)selectedObjectRoot;
- (struct OZChannelObjectRootBase *)sceneChannelRoot;
- (BOOL)isPlaying;
- (void)abort;
- (void)didSetChannelValue:(struct OZChannelBase *)arg1;
- (void)willSetChannelValue:(struct OZChannelBase *)arg1;
- (void)didChangeChannel:(struct OZChannelBase *)arg1;
- (void)willChangeChannel:(struct OZChannelBase *)arg1;
- (void)addChannelToUndo:(struct OZChannelBase *)arg1 undoDescription:(id)arg2;
- (void)addToUndo:(id)arg1 type:(int)arg2 action:(unsigned int)arg3 undoDescription:(id)arg4;
- (void)endCaptureModifiedChannels;
- (void)startCaptureModifiedChannels:(id)arg1;
- (BOOL)wasChannelModified:(struct OZChannelBase *)arg1;
- (void)resetModifiedChannels;
- (vector_6694fb0a)modifiedChannels;
- (void)postNotification:(unsigned int)arg1;
- (void)setTimingCoordinator:(id)arg1;
- (id)initWithOZDocument:(struct OZDocument *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

