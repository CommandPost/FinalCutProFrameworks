//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class LKButton, NSButton, NSMatrix, NSPopUpButton, NSProSegmentedScrubber, NSTextField;

@interface PEAppPlaybackandRenderPreferencesModule : NSProPreferencesModule
{
    NSMatrix *_qualityMatrix;
    NSTextField *_qualityLabel;
    NSPopUpButton *_qualityPopup;
    NSPopUpButton *_avDevicePopup;
    NSTextField *_avDeviceLabel;
    NSTextField *_transcodingLabel;
    NSButton *_optimizedMediaButton;
    NSProSegmentedScrubber *_prerollScrubber;
    NSProSegmentedScrubber *_postrollScrubber;
    LKButton *_createOptimizedForMulticamClipsCheckBox;
    BOOL _avPopupAvailable;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)newOutputDevicesAvailable:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (void)selectPlaybackMedia:(id)arg1;
- (void)selectPlaybackQuality:(id)arg1;
- (void)selectAVOutputDevice:(id)arg1;

@end

