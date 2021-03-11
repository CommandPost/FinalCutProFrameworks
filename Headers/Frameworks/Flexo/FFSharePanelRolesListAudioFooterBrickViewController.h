//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFSharePanelBrickViewController.h>

@class FFSharePanelAudioChildBrick, NSImage, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFSharePanelRolesListAudioFooterBrickViewController : FFSharePanelBrickViewController
{
    NSView *_topSeparator;
    NSView *_separator;
    NSImage *_audioChannelValenceGlyph;
    NSString *_audioChannelLayoutLabel;
}

+ (Class)brickViewClass;
@property(copy, nonatomic) NSString *audioChannelLayoutLabel; // @synthesize audioChannelLayoutLabel=_audioChannelLayoutLabel;
@property(retain, nonatomic) NSImage *audioChannelValenceGlyph; // @synthesize audioChannelValenceGlyph=_audioChannelValenceGlyph;
@property(nonatomic) NSView *separator; // @synthesize separator=_separator;
@property(nonatomic) NSView *topSeparator; // @synthesize topSeparator=_topSeparator;
- (id)audioChannelValenceGlyphForLayout:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingRepresentedObject:(id)arg1;
- (void)stopObservingRepresentedObject:(id)arg1;
- (void)reloadAudioChannelLayout;
- (void)reloadData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain) FFSharePanelAudioChildBrick *representedObject; // @dynamic representedObject;

@end

