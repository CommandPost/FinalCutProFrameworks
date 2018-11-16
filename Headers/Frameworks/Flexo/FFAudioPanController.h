//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZFolderGroupController.h"

#import "FFOZViewControllerChannelChangeDelegate.h"

@class FFChannelChangeController, FFEffectStack, NSArray, NSCountedSet, NSMapTable, NSMutableArray, NSString, OZLabeledParamController, OZViewControllerGroup;

__attribute__((visibility("hidden")))
@interface FFAudioPanController : OZFolderGroupController <FFOZViewControllerChannelChangeDelegate>
{
    FFEffectStack *m_primaryEffectStack;
    FFChannelChangeController *m_channelChangeController;
    NSString *m_channelChangeControllerActionName;
    NSCountedSet *m_channelChangeControllerObjects;
    NSMapTable *m_channelToObjectMap;
    NSMutableArray *m_selectedItems;
    NSMutableArray *m_observedBundleParts;
    OZViewControllerGroup *m_panGroupController;
    OZLabeledParamController *m_panModeController;
    OZLabeledParamController *m_panAmountController;
    OZFolderGroupController *m_panParametersFolderController;
    OZLabeledParamController *m_panDishController;
    NSArray *m_advancedSettingsControllers;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (id)getSubgroup;
- (void)update;
- (void)selectPanMode:(id)arg1;
- (void)_releaseSurroundControllers;
- (void)_updatePanModeMenu;
- (void)controller:(id)arg1 willChangeChannel:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 didChangeChannel:(struct OZChannelBase *)arg2;
- (void)controller:(id)arg1 willSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;
- (void)controller:(id)arg1 didSetChannelValue:(struct OZChannelBase *)arg2 flagsOnly:(BOOL)arg3;

@end
