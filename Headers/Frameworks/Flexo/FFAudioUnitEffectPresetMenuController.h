//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

@class FFAnchoredObject, FFAudioUnitEffect, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface FFAudioUnitEffectPresetMenuController : OZViewController
{
    FFAnchoredObject *m_object;
    FFAudioUnitEffect *m_audioUnitEffect;
    NSPopUpButton *m_popUpButton;
    struct __FSEventStream *m_eventStream;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (void)populateMenu;
- (id)appendUserPresets:(id)arg1 toMenu:(id)arg2 currentPreset:(id)arg3;
- (void)_addObservers;
- (void)_removeObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_postPresetChangedNotification;
- (void)selectPresetMenuCommandItem:(id)arg1;
- (void)selectUserPresetMenuItem:(id)arg1;
- (void)selectFactoryPresetMenuItem:(id)arg1;

@end

