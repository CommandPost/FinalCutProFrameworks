//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZMediaOpenPanelDelegate.h>

@class NSPopUpButton, NSTextField;

@interface OZImportMediaDelegate : OZMediaOpenPanelDelegate
{
    NSTextField *_pAudioTracksTitle;
    NSPopUpButton *_pAudioTracksPopUp;
}

+ (id)instanceWithOpenPanel:(id)arg1 flags:(unsigned int)arg2;
- (void)panelSelectionDidChange:(id)arg1;
- (BOOL)importAllTracks;
- (id)view;
- (id)initWithOpenPanel:(id)arg1 flags:(unsigned int)arg2;

@end

