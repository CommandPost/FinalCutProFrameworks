//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class LKSegmentedScrubber, NSColor, NSImageView;

@interface LKScrubbingArrowsView : NSView
{
    struct {
        unsigned int useThemeAsset:1;
        unsigned int bezelStyle:4;
        unsigned int isScrubbingUp:1;
        unsigned int isScrubbing:1;
        unsigned int themeVariant:4;
        unsigned int themeSize:4;
        unsigned int valueChange:2;
        unsigned int isClicked:1;
        unsigned int reserved:14;
    } _psavFlags;
    double arrowWidth;
    double arrowHeight;
    NSColor *_activeColor;
    NSColor *_inactiveColor;
    struct CGPoint windowFrameOrigin;
    struct CGRect sensitivityBounds;
    long long _caretIndex;
    long long _arrowsIndex;
    NSImageView *_caretImageView;
    NSImageView *_upArrowImageView;
    NSImageView *_downArrowImageView;
    LKSegmentedScrubber *_controllingScrubber;
    struct CGRect _currentScrubbingSegmentReferenceFrame;
    struct CGRect _currentCaretSegmentReferenceFrame;
}

+ (void)initialize;
@property(nonatomic) __weak LKSegmentedScrubber *controllingScrubber; // @synthesize controllingScrubber=_controllingScrubber;
@property(nonatomic) long long arrowsIndex; // @synthesize arrowsIndex=_arrowsIndex;
@property(nonatomic) long long caretIndex; // @synthesize caretIndex=_caretIndex;
@property(retain, nonatomic) NSColor *activeColor; // @synthesize activeColor=_activeColor;
@property(retain, nonatomic) NSColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
- (double)_arrowsPadding;
- (double)_upPadding;
- (struct CGRect)sensitivityBounds;
- (BOOL)isOpaque;
- (void)setScrubbing:(BOOL)arg1;
- (void)setClicked:(BOOL)arg1;
- (void)setValueChange:(long long)arg1;
- (void)setDirection:(BOOL)arg1;
- (struct CGPoint)windowFrameOrigin;
- (void)dealloc;
- (void)computeWindowFrameOrigin:(struct CGPoint)arg1 controlView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andControllingScrubber:(id)arg2;

@end

