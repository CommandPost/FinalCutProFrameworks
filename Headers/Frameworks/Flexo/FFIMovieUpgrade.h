//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFIMovieProgressController, FFMediaEventProject, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface FFIMovieUpgrade : NSObject
{
    NSMapTable *_defaultSequenceEvents;
    FFMediaEventProject *_eventProject;
    FFIMovieProgressController *_progressController;
    NSMutableArray *_missingMedia;
    NSMutableDictionary *_finalizedSequences;
    NSMutableDictionary *_createdLibraries;
}

+ (int)numberOfVolumesToUpgrade;
+ (BOOL)upgradeVolumeURL:(id)arg1;
+ (BOOL)upgradeLegacySequence:(id)arg1 showProgress:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)upgradeIMovieLibrariesWithOptions:(int)arg1 error:(id *)arg2;
+ (id)newMissingVolumesFromMissingMedia:(id)arg1;
+ (id)volumeStringFromVolumeSet:(id)arg1;
+ (id)volumeNameFromURL:(id)arg1;
+ (BOOL)upgradeRequiredForLocation:(id)arg1;
- (BOOL)upgradeLocation:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (BOOL)upgradeLibrary:(id)arg1 atLocation:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (BOOL)upgradeSequenceAtURL:(id)arg1 library:(id)arg2 deleteOriginal:(BOOL)arg3 error:(id *)arg4;
- (BOOL)upgradeEventAtURL:(id)arg1 library:(id)arg2 deleteOriginal:(BOOL)arg3 error:(id *)arg4;
- (void)upgradeFinalizedSequence:(id)arg1 atURL:(id)arg2;
- (id)defaultSequenceEventForLibrary:(id)arg1 error:(id *)arg2;
- (id)newEventForName:(id)arg1 library:(id)arg2 error:(id *)arg3;
- (id)libraryForURL:(id)arg1;
- (void)warnIfMissingMedia;
- (id)newMissingMediaForOnlineVolumes;
- (void)finalizeSequences;
- (id)thumbnailMD5ForSequence:(id)arg1;
- (void)dealloc;
- (id)initWithProgress:(id)arg1;

@end

