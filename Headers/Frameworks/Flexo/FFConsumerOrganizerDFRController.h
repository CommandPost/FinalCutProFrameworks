//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKDFRController.h>

@class NSArray, NSButton, NSGroupTouchBarItem, NSPopoverTouchBarItem, NSString, NSTouchBarItem;

__attribute__((visibility("hidden")))
@interface FFConsumerOrganizerDFRController : LKDFRController
{
    BOOL _allowsFavorites;
    NSTouchBarItem *_favoriteBarItem;
    NSTouchBarItem *_rejectBarItem;
    NSTouchBarItem *_playPauseBarItem;
    NSGroupTouchBarItem *_addToiMovieAddAsOverlayButtonGroup;
    NSPopoverTouchBarItem *_addToiMovieVideoOverlayPopoverBarItem;
    NSTouchBarItem *_addVideoOverlayOptionsBarItem;
    NSButton *_videoOverlayButton;
    NSButton *_audioOverlayButton;
    NSTouchBarItem *_addToiMovieItem;
    NSTouchBarItem *_audioOverlayItem;
    NSArray *_selection;
    NSString *_selectionMarkerType;
}

- (id)_dfrButtonImageForFavorite:(BOOL)arg1 isOn:(BOOL)arg2;
- (void)_updateSelectionMarkerType:(id)arg1;
- (BOOL)_singleAudioItemSelected;
- (void)_addAsOverlay:(id)arg1;
- (void)_dfrReject:(id)arg1;
- (void)_dfrFavorite:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)setOverlayButtonEnabled:(BOOL)arg1;
- (void)setPlayButtonIsPlaying:(BOOL)arg1;
- (void)updateFunctionBarToSelection:(id)arg1;
- (void)dealloc;
- (id)initWithModule:(id)arg1;

@end

