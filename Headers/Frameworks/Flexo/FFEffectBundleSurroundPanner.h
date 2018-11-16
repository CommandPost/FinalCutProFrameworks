//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffectBundleInternalBundle.h>

#import "FFChannelChangeControllerDivorcedDelegate.h"

@class FFAnchoredObject, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectBundleSurroundPanner : FFEffectBundleInternalBundle <FFChannelChangeControllerDivorcedDelegate>
{
    FFAnchoredObject *m_object;
    BOOL m_defaultPartIsInMonoMode;
    BOOL m_isInStereoMode;
    BOOL m_isObserving;
}

+ (id)initialEffectBundlePartsForEffectID:(id)arg1;
+ (void)unrigChannel:(id)arg1 inPanner:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
+ (id)copyClassDescription;
+ (id)descriptionForPreset:(id)arg1;
+ (id)nonSurroundPresetNames;
+ (id)surroundPresetNames;
+ (id)_bundlePresetNames;
+ (id)pannerEffectBundleParts;
- (int)bundleEncodingOptions;
- (void)createActivePartEffectChannelsInFolder:(id)arg1;
- (void)partChanged;
- (id)copyBundlePartAtIndex:(int)arg1;
- (id)bundlePartAtIndex:(int)arg1;
- (id)presetNames;
- (BOOL)effectImpactsAudioChannelValence;
- (void)effectStackAnchoredObjectDidChange;
- (void)effectWillBeRemovedFromStack;
- (void)effectWasAddedToStack:(int)arg1;
- (void)_removeAnchoredObjectObserving;
- (void)_addAnchoredObjectObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateDefaultPanMode;
- (BOOL)_isInDefaultPanMode;
- (BOOL)isStereoMode;
- (void)sender:(id)arg1 beginChannelChange:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)channelChangeDelegate;
- (id)XMLNameForChannel:(id)arg1;
- (id)channelByXMLName:(id)arg1;
- (id)unriggedChannels;
- (id)keyframeableChannels;
- (void)_postInit:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

