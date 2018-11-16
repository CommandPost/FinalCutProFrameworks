//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OZViewCtlrDelegate.h"

@class CHChannelFolder, FFChannelChangeController, FFInspectorModuleChannels, NSMutableArray;

@interface FFInspectorModuleOZViewCtlrDelegate : NSObject <OZViewCtlrDelegate>
{
    FFInspectorModuleChannels *_module;
    NSMutableArray *_draggingChannels;
    long long _draggingChangeCount;
    FFChannelChangeController *_changeController;
    CHChannelFolder *_resettingFolder;
}

- (id)initWithInspectorModule:(id)arg1;
- (void)dealloc;
- (BOOL)isDragging;
- (id)channelsInspectorModule;
- (struct __CFString *)bundleID;
- (void)abort;
- (void)abortAndWait;
- (void)controller:(id)arg1 postNotification:(unsigned int)arg2;
- (CDStruct_1b6d18a9)currentTimeForChannel:(struct OZChannelBase *)arg1;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1 forChannel:(struct OZChannelBase *)arg2;
- (void)select:(BOOL)arg1 forChan:(struct OZChannelBase *)arg2;
- (BOOL)willChangingValueKeyframe:(id)arg1;
- (BOOL)storesCollapsedStateForChannel:(struct OZChannelBase *)arg1;
- (BOOL)isCollapsedForChannel:(struct OZChannelBase *)arg1;
- (void)setIsCollapsed:(BOOL)arg1 forChannel:(struct OZChannelBase *)arg2;
- (BOOL)isAnyInspectorRebuilding;
- (BOOL)isHUD;
- (id)_channelChangeDelegateForController:(id)arg1;
- (void)controller:(id)arg1 willChangeChannel:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 didChangeChannel:(struct OZChannelBase *)arg2;
- (void)_controller:(id)arg1 willSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)_controller:(id)arg1 didSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)controller:(id)arg1 willSetChannelFlags:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 didSetChannelFlags:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 willSetChannelValue:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 didSetChannelValue:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 willResetChannelFolder:(struct OZChannelFolder *)arg2;
- (void)controller:(id)arg1 didResetChannelFolder:(struct OZChannelFolder *)arg2;
- (void)startCaptureModifiedChannels:(const struct PCString *)arg1;
- (void)endCaptureModifiedChannels;
- (void)controller:(id)arg1 willDeleteChannel:(struct OZChannelBase *)arg2;
- (BOOL)controllerDoesOverrideName:(id)arg1;
- (id)controllerOverriddenName:(id)arg1;
- (void)controller:(id)arg1 setName:(id)arg2;
- (unsigned int)controller:(id)arg1 checkboxTypeForChannel:(struct OZChannelBase *)arg2;
- (BOOL)controller:(id)arg1 shouldDragChannel:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 writeChannels:(list_ee649c21 *)arg2 toPasteboard:(id)arg3;
- (unsigned long long)controller:(id)arg1 draggingSourceOperationMaskForChannel:(struct OZChannelBase *)arg2 forLocal:(BOOL)arg3;
- (void)controllerFinishedDrag:(id)arg1;
- (id)controller:(id)arg1 droppedTypes:(id)arg2;
- (unsigned long long)controller:(id)arg1 validateDrop:(id)arg2 proposedDropLocation:(unsigned int)arg3;
- (BOOL)controller:(id)arg1 prepareForDragOperation:(id)arg2 dropLocation:(unsigned int)arg3;
- (BOOL)controller:(id)arg1 performDragOperation:(id)arg2 dropLocation:(unsigned int)arg3;
- (BOOL)isTextToolActive:(id)arg1;
- (void)suppressWillDidChange:(BOOL)arg1;
- (BOOL)shouldSuppressWillDidChange;
- (void)controller:(id)arg1 showChannelInCurveEditor:(struct OZChannelBase *)arg2;
- (void)processPINotifications;
- (struct OZChannelObjectRootBase *)channelObjectRootForID:(unsigned int)arg1;
- (CDStruct_1b6d18a9)griddedTimeForChannel:(struct OZChannelBase *)arg1;

@end

