//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFREDRAWSettingsDataSource.h"
#import "FFREDRAWSettingsDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FFREDRAWSettingsController : NSObject <FFREDRAWSettingsDelegate, FFREDRAWSettingsDataSource>
{
    NSMutableSet *_anchoredObjects;
    NSMutableArray *_controllers;
    NSMutableSet *_assets;
    NSMutableSet *_clips;
    NSMapTable *_clipToAssetMap;
    Class _REDImageProcessingClass;
    id <FFREDRAWPropertyChangeController> _colorSpaceChangeController;
    id <FFREDRAWPropertyChangeController> _gammaCurveChangeController;
    id <FFREDRAWPropertyChangeController> _kelvinChangeController;
    id <FFREDRAWPropertyChangeController> _tintChangeController;
    id <FFREDRAWPropertyChangeController> _ISOChangeController;
    id <FFREDRAWPropertyChangeController> _FLUTControlChangeController;
    id <FFREDRAWPropertyChangeController> _shadowChangeController;
    id <FFREDRAWPropertyChangeController> _DRXChangeController;
    id <FFREDRAWPropertyChangeController> _saturationChangeController;
    id <FFREDRAWPropertyChangeController> _contrastChangeController;
    id <FFREDRAWPropertyChangeController> _brightnessChangeController;
    id <FFREDRAWPropertyChangeController> _exposureChangeController;
    NSMapTable *_clipToMD5Cache;
    CDStruct_bdcb2b0d _clipSetMD5Cache;
    unsigned long long _selectionChangeCount;
}

+ (BOOL)verifyNoRunningBackgroundTasksForAnchoredObjects:(id)arg1;
+ (id)sharedController;
- (id).cxx_construct;
- (void)warnUserAboutPotentialLossOfChangesWithUncommitedClipSet:(id)arg1;
- (BOOL)selectionChangeShouldWarnUserOfUncommittedChanges:(id)arg1 uncommitedClipSet:(id *)arg2;
- (id)setOfREDClipsFromSelection:(id)arg1;
- (BOOL)hasUncommitedChanges;
- (void)revertToRMDSettings;
- (void)_revertToRMDSettingsWithClipSet:(id)arg1;
- (void)commitRMDSettings;
- (void)_commitRMDSettingsWithClipSet:(id)arg1;
- (BOOL)_clearBackgroundTasksBeforeCommit;
- (void)revertToNeutralSettings;
- (void)revertToCameraOriginal;
- (id)REDRAWExposureChangeController;
- (id)REDRAWBrightnessChangeController;
- (id)REDRAWContrastChangeController;
- (id)REDRAWSaturationChangeController;
- (id)REDRAWDRXChangeController;
- (id)REDRAWShadowChangeController;
- (id)REDRAWFLUTControlChangeController;
- (id)REDRAWISOChangeController;
- (id)REDRAWTintChangeController;
- (id)REDRAWKelvinChangeController;
- (id)REDRAWGammaCurveChangeController;
- (id)REDRAWColorSpaceChangeController;
- (id)labelForInspectedItems;
- (id)imageForInspectedItems;
- (BOOL)hasInspectedItems;
- (double)REDRAWExposureMaxValue;
- (double)REDRAWExposureMinValue;
- (double)REDRAWBrightnessMaxValue;
- (double)REDRAWBrightnessMinValue;
- (double)REDRAWContrastMaxValue;
- (double)REDRAWContrastMinValue;
- (double)REDRAWSaturationMaxValue;
- (double)REDRAWSaturationMinValue;
- (double)REDRAWDRXMaxValue;
- (double)REDRAWDRXMinValue;
- (double)REDRAWShadowMaxValue;
- (double)REDRAWShadowMinValue;
- (double)REDRAWFLUTControlMaxValue;
- (double)REDRAWFLUTControlMinValue;
- (unsigned long long)REDRAWISOMaxValue;
- (unsigned long long)REDRAWISOMinValue;
- (unsigned long long)REDRAWISOCount;
- (double)REDRAWTintMaxValue;
- (double)REDRAWTintMinValue;
- (double)REDRAWKelvinMaxValue;
- (double)REDRAWKelvinMinValue;
- (double)REDRAWExposure;
- (double)REDRAWBrightness;
- (double)REDRAWContrast;
- (double)REDRAWSaturation;
- (double)REDRAWDRX;
- (double)REDRAWShadow;
- (double)REDRAWFLUTControl;
- (void)REDRAWISOMenu:(id *)arg1 selectedIndexes:(id *)arg2;
- (double)REDRAWTint;
- (double)REDRAWKelvin;
- (void)REDRAWGammaCurveMenu:(id *)arg1 selectedValues:(id *)arg2;
- (void)REDRAWColorSpaceMenu:(id *)arg1 selectedValues:(id *)arg2;
- (void)sender:(id)arg1 action:(SEL)arg2 didSetPropertiesUsingDataSource:(id)arg3;
- (void)sender:(id)arg1 action:(SEL)arg2 willSetPropertiesUsingDataSource:(id)arg3;
- (void)window:(id)arg1 willCloseWithSettings:(id)arg2;
- (void)didChangeSelection;
- (void)willChangeSelection:(id)arg1;
@property(copy, nonatomic) NSArray *anchoredObjects; // @dynamic anchoredObjects;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

