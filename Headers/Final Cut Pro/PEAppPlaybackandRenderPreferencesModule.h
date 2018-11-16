//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class NSMatrix, NSPopUpButton, NSProSegmentedScrubber, NSTextField;

@interface PEAppPlaybackandRenderPreferencesModule : NSProPreferencesModule
{
    NSMatrix *_qualityMatrix;
    NSTextField *_qualityLabel;
    NSPopUpButton *_qualityPopup;
    NSProSegmentedScrubber *_prerollScrubber;
    NSProSegmentedScrubber *_postrollScrubber;
}

- (void)awakeFromNib;
- (id)titleForIdentifier:(id)arg1;
- (void)selectPlaybackMedia:(id)arg1;
- (void)selectPlaybackQuality:(id)arg1;

@end
