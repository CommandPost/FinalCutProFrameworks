//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OZCurveEditorAppDelegate.h"

@class OZTimingCoordinator;

@interface OZMoCurveEditorAppDelegate : NSObject <OZCurveEditorAppDelegate>
{
    struct OZDocument *_pDocument;
    OZTimingCoordinator *_pTimingCoordinator;
}

- (id)initWithOZDocument:(struct OZDocument *)arg1;
- (void)setTimingCoordinator:(id)arg1;
- (void)postNotification:(unsigned int)arg1;
- (vector_1297b2d5)modifiedChannels;
- (void)resetModifiedChannels;
- (BOOL)wasChannelModified:(struct OZChannelBase *)arg1;
- (void)startCaptureModifiedChannels:(id)arg1;
- (void)endCaptureModifiedChannels;
- (void)addToUndo:(id)arg1 type:(int)arg2 action:(unsigned int)arg3 undoDescription:(id)arg4;
- (void)addChannelToUndo:(struct OZChannelBase *)arg1 undoDescription:(id)arg2;
- (void)willChangeChannel:(struct OZChannelBase *)arg1;
- (void)didChangeChannel:(struct OZChannelBase *)arg1;
- (void)willSetChannelValue:(struct OZChannelBase *)arg1;
- (void)didSetChannelValue:(struct OZChannelBase *)arg1;
- (void)abort;
- (BOOL)isPlaying;
- (struct OZChannelObjectRootBase *)sceneChannelRoot;
- (struct OZChannelObjectRootBase *)selectedObjectRoot;
- (vector_d5489b3e)selectedObjectsRootChannels;
- (struct OZCurveSetListSerializer *)getCurveSetListSerializer;
- (BOOL)objectsSelectedInScene;
- (BOOL)isObjectSelected:(struct OZChannelObjectRootBase *)arg1;
- (CDStruct_1b6d18a9)getFrameDuration;
- (double)version;
- (BOOL)isMotion;
- (CDStruct_1b6d18a9)secondsPerTextStep;
- (CDStruct_1b6d18a9)currentTime;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_e83c9415)displayRange;
- (BOOL)shouldDisplayTimeAsFrames;
- (unsigned int)firstFrameNumber;
- (unsigned int)startTimecode;
- (void)suppressEventCoalescing;
- (void)unsuppressEventCoalescing;

@end

