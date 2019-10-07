//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKPreferencesModule.h"

@class LKButton, LKSegmentedScrubber, NSImageView, NSTextField;

@interface PEAppFreePreferencesModule : LKPreferencesModule
{
    NSImageView *_generalIcon;
    NSImageView *_editingIcon;
    NSImageView *_playbackIcon;
    NSImageView *_importIcon;
    NSTextField *_generalLabel;
    NSTextField *_editingLabel;
    NSTextField *_playbackLabel;
    NSTextField *_importLabel;
    LKButton *_backgroundRenderCheckBox;
    LKButton *_optimizeMediaCheckBox;
    LKSegmentedScrubber *transitionsDurationScrubber;
    LKSegmentedScrubber *stillImagesDurationScrubber;
}

- (void)resetDialogWarnings:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)moduleWasInstalled;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)isResizable;
- (void)dealloc;
- (void)awakeFromNib;

@end

