//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

__attribute__((visibility("hidden")))
@interface FFEffectPreset : FFEffect
{
}

+ (BOOL)effectStackIs4KReady:(id)arg1;
+ (id)loadPresetDataFromFileURL:(id)arg1;
+ (id)directoryURL;
+ (BOOL)applyPreset:(id)arg1 toAnchoredObject:(id)arg2 error:(id *)arg3;
+ (BOOL)createPresetWithName:(id)arg1 presetCategory:(id)arg2 videoEffects:(id)arg3 audioEffects:(id)arg4 selectedChannels:(id)arg5 selectedIntrinsics:(id)arg6 keyframeMode:(long long)arg7 sourceClippedRange:(CDStruct_e83c9415)arg8 sourceUnclippedStart:(CDStruct_1b6d18a9)arg9;
+ (id)videoEffectStackFromPresetData:(id)arg1;
+ (void)unarchivePresetData:(id)arg1 videoEffects:(id *)arg2 audioEffectsObjectBundle:(id *)arg3 selectedIntrinsics:(id *)arg4 selectedChannels:(id *)arg5 keyframeMode:(long long *)arg6 sourceClippedRange:(CDStruct_e83c9415 *)arg7 sourceUnclippedStart:(CDStruct_1b6d18a9 *)arg8;
+ (id)newPresetDataWithPresetCategory:(id)arg1 videoEffects:(id)arg2 audioEffects:(id)arg3 selectedChannels:(id)arg4 selectedIntrinsics:(id)arg5 keyframeMode:(long long)arg6 sourceClippedRange:(CDStruct_e83c9415)arg7 sourceUnclippedStart:(CDStruct_1b6d18a9)arg8;
+ (void)scanPresets:(id)arg1;
+ (void)appDidBecomeActive:(id)arg1;
+ (void)willTerminate:(id)arg1;
+ (void)startEventStream;
+ (void)stopEventStream;
+ (void)uninstallDirectoryWatcher;
+ (void)installDirectoryWatcher;
+ (BOOL)presetExists:(id)arg1;
+ (void)registerOneEffectPreset:(id)arg1 updateSet:(BOOL)arg2 notify:(BOOL)arg3;
+ (void)registerEffects;
- (id)presetURL;

@end

