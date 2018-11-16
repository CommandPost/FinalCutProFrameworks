//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffectBundleInternalBundle.h>

#import "FFChannelChangeControllerDivorcedDelegate.h"

@class FFAnchoredObject;

__attribute__((visibility("hidden")))
@interface FFEffectBundleSurroundPanner : FFEffectBundleInternalBundle <FFChannelChangeControllerDivorcedDelegate>
{
    FFAnchoredObject *m_object;
    BOOL m_defaultPartIsInMonoMode;
}

+ (void)unrigChannel:(id)arg1 inPanner:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
+ (id)copyClassDescription;
+ (id)surroundPannerPresetNames;
+ (id)pannerEffectBundleParts;
- (int)bundleEncodingOptions;
- (void)createActivePartEffectChannelsInFolder:(id)arg1;
- (id)initialEffectBundleParts;
- (void)partChanged;
- (id)copyBundlePartAtIndex:(int)arg1;
- (id)bundlePartAtIndex:(int)arg1;
- (id)presetNames;
- (void)effectStackAnchoredObjectDidChange;
- (void)setEffectStack:(id)arg1;
- (void)_removeAnchoredObjectObserving;
- (void)_addAnchoredObjectObserving;
- (void)_updateDefaultPanMode;
- (BOOL)_isInDefaultPanMode;
- (BOOL)isStereoMode;
- (void)sender:(id)arg1 beginChannelChange:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)channelChangeDelegate;
- (id)XMLNameForChannel:(id)arg1;
- (id)channelByXMLName:(id)arg1;
- (id)unriggedChannels;
- (id)keyframeableChannels;
- (void)dealloc;

@end

