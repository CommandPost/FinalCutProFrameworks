//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKPreferencesModule.h"

@class LKPopUpButton, LKSegmentedScrubber;

@interface PEAppEditingPreferencesModule : LKPreferencesModule
{
    LKPopUpButton *pixelsOrPercentagePopup;
    LKSegmentedScrubber *transitionsDurationScrubber;
    LKSegmentedScrubber *stillImagesDurationScrubber;
    LKSegmentedScrubber *defaultAudioFadeDurationScrubber;
    LKPopUpButton *defaultColorCorrection;
}

- (void)dealloc;
- (void)pixelsOrPercentage:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)moduleWasInstalled;
- (void)selectColorEffect:(id)arg1;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;

@end

