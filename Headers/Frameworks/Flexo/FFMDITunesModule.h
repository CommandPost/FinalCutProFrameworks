//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDMusicModule.h>

@interface FFMDITunesModule : FFMDMusicModule
{
    BOOL _emptyPaneViewInitialized;
}

- (BOOL)supportsMovie;
- (BOOL)supportsAudio;
- (id)mediaPlugInLoadCompletionNotificationName;
- (id)mediaPlugInIdentifier;
- (void)_showEmptyLibraryView:(BOOL)arg1;
- (void)syncToMediaManager:(id)arg1;
- (void)_initializeEmptyPaneView;
- (void)dealloc;
- (id)init;

@end
