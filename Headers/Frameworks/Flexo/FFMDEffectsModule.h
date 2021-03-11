//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMDMusicModule.h>

@class NSString;

@interface FFMDEffectsModule : FFMDMusicModule
{
    NSString *_contentPath_iMovieSFXPath;
    NSString *_contentPath_iLifeSFXPath;
    NSString *_contentPath_iMovieThemeMusicPath;
    NSString *_contentPath_finalCutProSFXPath;
    NSString *_contentPath_soundTrackProLoopsPath;
    NSString *_contentPath_garageBandLoopsPath;
}

@property(retain, nonatomic) NSString *contentPath_garageBandLoopsPath; // @synthesize contentPath_garageBandLoopsPath=_contentPath_garageBandLoopsPath;
@property(retain, nonatomic) NSString *contentPath_soundTrackProLoopsPath; // @synthesize contentPath_soundTrackProLoopsPath=_contentPath_soundTrackProLoopsPath;
@property(retain, nonatomic) NSString *contentPath_finalCutProSFXPath; // @synthesize contentPath_finalCutProSFXPath=_contentPath_finalCutProSFXPath;
@property(retain, nonatomic) NSString *contentPath_iMovieThemeMusicPath; // @synthesize contentPath_iMovieThemeMusicPath=_contentPath_iMovieThemeMusicPath;
@property(retain, nonatomic) NSString *contentPath_iLifeSFXPath; // @synthesize contentPath_iLifeSFXPath=_contentPath_iLifeSFXPath;
@property(retain, nonatomic) NSString *contentPath_iMovieSFXPath; // @synthesize contentPath_iMovieSFXPath=_contentPath_iMovieSFXPath;
- (id)mediaBrowserIdentifier;
- (BOOL)groupSupported:(id)arg1;
- (BOOL)supportsMovie;
- (BOOL)supportsAudio;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)localizedNameForGroup:(id)arg1;
- (id)mediaPlugInLoadCompletionNotificationName;
- (id)mediaPlugInIdentifier;
- (void)viewWasInstalled;
- (void)dealloc;
- (id)init;
- (id)customGenreForGroupID:(id)arg1;
- (id)customSearchPathsForGroupsToMediaManager;
- (void)initContentSearchPaths;

@end

