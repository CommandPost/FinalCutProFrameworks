//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class NSButton, NSView;

__attribute__((visibility("hidden")))
@interface FFOutlineContainerView : NSProView
{
    NSView *_mainView;
    NSView *_infoView;
    NSView *_infoTextView;
    NSButton *_infoViewNewProjectButton;
    BOOL _showsInfoView;
    double _mainViewWidth;
    BOOL _infoAdjusted;
}

@property(nonatomic) double mainViewWidth; // @synthesize mainViewWidth=_mainViewWidth;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)layoutSubviewsAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setShowsInfoView:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL showsInfoView;
- (void)awakeFromNib;

@end

