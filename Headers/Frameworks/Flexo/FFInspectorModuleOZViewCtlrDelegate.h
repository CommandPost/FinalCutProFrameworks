//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/OZViewCtlrDelegate-Protocol.h>

@class CHChannelFolder, FFChannelChangeController, FFInspectorModuleChannels, NSMutableArray;

@interface FFInspectorModuleOZViewCtlrDelegate : NSObject <OZViewCtlrDelegate>
{
    FFInspectorModuleChannels *_module;
    NSMutableArray *_draggingChannels;
    long long _draggingChangeCount;
    FFChannelChangeController *_changeController;
    CHChannelFolder *_resettingFolder;
    BOOL _isAnyInspectorRebuilding;
    NSMutableArray *_changeInfoStack;
}

- (void)addHueSaturationEffect:(id)arg1;
- (void)addColorCurvesEffect:(id)arg1;
- (void)addColorWheelsEffect:(id)arg1;
- (void)addColorBoardEffect:(id)arg1;
- (void)addColorEffect:(id)arg1 effectID:(id)arg2 actionName:(id)arg3;
- (void)toggleAllColorCorrectionOff;
- (BOOL)canToggleAllColorEffects;
- (void)toggleSelectedVideoEffects;
- (BOOL)canToggleSelectedVideoEffects;
- (CDStruct_1b6d18a9)griddedTimeForChannel:(struct OZChannelBase *)arg1;
- (struct OZChannelObjectRootBase *)channelObjectRootForID:(unsigned int)arg1;
- (void)processPINotifications;
- (void)controller:(id)arg1 showChannelInCurveEditor:(struct OZChannelBase *)arg2;
- (BOOL)shouldSuppressWillDidChange;
- (void)suppressWillDidChange:(BOOL)arg1;
- (BOOL)isTextToolActive:(id)arg1;
- (BOOL)controller:(id)arg1 performDragOperation:(id)arg2 dropLocation:(unsigned int)arg3;
- (BOOL)controller:(id)arg1 prepareForDragOperation:(id)arg2 dropLocation:(unsigned int)arg3;
- (unsigned long long)controller:(id)arg1 validateDrop:(id)arg2 proposedDropLocation:(unsigned int)arg3;
- (id)controller:(id)arg1 droppedTypes:(id)arg2;
- (void)controllerFinishedDrag:(id)arg1;
- (unsigned long long)controller:(id)arg1 draggingSourceOperationMaskForChannel:(struct OZChannelBase *)arg2 forLocal:(BOOL)arg3;
- (void)controller:(id)arg1 writeChannels:(list_9af5505e *)arg2 toPasteboard:(id)arg3;
- (BOOL)controller:(id)arg1 shouldDragChannel:(struct OZChannelBase *)arg2;
- (unsigned int)controller:(id)arg1 checkboxTypeForChannel:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 setName:(id)arg2;
- (id)controllerOverriddenName:(id)arg1;
- (BOOL)controllerDoesOverrideName:(id)arg1;
- (void)controller:(id)arg1 willDeleteChannel:(struct OZChannelBase *)arg2;
- (void)endCaptureModifiedChannels;
- (void)startCaptureModifiedChannels:(const struct PCString *)arg1;
- (void)controller:(id)arg1 didResetChannelFolder:(struct OZChannelFolder *)arg2 backupDescendants:(BOOL)arg3;
- (void)controller:(id)arg1 willResetChannelFolder:(struct OZChannelFolder *)arg2 backupDescendants:(BOOL)arg3;
- (void)controller:(id)arg1 didSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)controller:(id)arg1 willSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)controller:(id)arg1 didSetChannelValue:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 willSetChannelValue:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 didSetChannelFlags:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 willSetChannelFlags:(struct OZChannelBase *)arg2;
- (void)_controller:(id)arg1 didSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)_controller:(id)arg1 willSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)controller:(id)arg1 didChangeChannel:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 willChangeChannel:(struct OZChannelBase *)arg2;
- (id)_channelChangeDelegateForController:(id)arg1;
- (BOOL)isHUD;
- (BOOL)isAnyInspectorRebuilding;
- (void)setIsAnyInspectorRebuilding:(BOOL)arg1;
- (void)setIsCollapsed:(BOOL)arg1 forChannel:(struct OZChannelBase *)arg2;
- (BOOL)isCollapsedForChannel:(struct OZChannelBase *)arg1;
- (BOOL)storesCollapsedStateForChannel:(struct OZChannelBase *)arg1;
- (BOOL)willChangingValueKeyframe:(id)arg1;
- (void)select:(BOOL)arg1 forChan:(struct OZChannelBase *)arg2;
- (void)stopPlaybackForChannel:(struct OZChannelBase *)arg1;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1 forChannel:(struct OZChannelBase *)arg2;
- (void)didChangeChannelGridEnd:(struct OZChannelBase *)arg1;
- (void)aboutToChangeChannelGridStart:(struct OZChannelBase *)arg1 inSliderAction:(BOOL)arg2;
- (CDStruct_1b6d18a9)currentTimeForChannel:(struct OZChannelBase *)arg1;
- (void)controller:(id)arg1 postNotification:(unsigned int)arg2;
- (void)abortAndWait;
- (void)abort;
- (struct __CFString *)bundleID;
- (void)resetChannelsInspectorModule;
- (id)channelsInspectorModule;
- (BOOL)isRecordingChannelChange;
- (BOOL)isDragging;
- (void)dealloc;
- (id)initWithInspectorModule:(id)arg1;

@end

