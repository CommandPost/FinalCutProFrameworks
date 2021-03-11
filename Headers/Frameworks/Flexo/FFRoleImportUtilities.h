//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FFRoleImportUtilities : NSObject
{
}

+ (void)decomposeAssignmentOfRole:(id)arg1 toObject:(id)arg2 useTrackNameMetadataIfAvailable:(BOOL)arg3 roleChangeMap:(id)arg4 subRolesToCreate:(id)arg5;
+ (id)rolesForAudioLayoutItems:(id)arg1 whenAssigningMainRole:(id)arg2 toPrimordialClip:(id)arg3 useTrackNameMetadataIfAvailable:(BOOL)arg4 subRolesToCreate:(id)arg5;
+ (void)_applyAudioRoleImportOptionsToMediaComponentsOfPrimordialClip:(id)arg1 preChannelAnalysis:(BOOL)arg2 inLibrary:(id)arg3 withOptions:(unsigned int)arg4;
+ (void)applyAudioRoleImportOptionsPostChannelAnalysisToClip:(id)arg1 withOptions:(unsigned int)arg2;
+ (void)_applyVideoRoleImportOptionsToMediaComponentsOfPrimordialClip:(id)arg1 inLibrary:(id)arg2 withOptions:(unsigned int)arg3;
+ (void)applyRoleImportOptionsToClip:(id)arg1 inLibrary:(id)arg2 withOptions:(unsigned int)arg3;
+ (id)roleNameForAudioComponentLayoutItem:(id)arg1 ofObject:(id)arg2 fromTrackNames:(id)arg3;
+ (id)roleNameForMediaSource:(id)arg1 fromTrackNames:(id)arg2;
+ (id)stereoPairNameFromTrack1:(id)arg1 andTrack2:(id)arg2 reverseStereo:(char *)arg3;
+ (id)trackNameWithIndex:(unsigned long long)arg1 inTrackNames:(id)arg2;

@end

