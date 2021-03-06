//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSLayoutConstraint;

@interface LKContainerItemHighlightView : NSView
{
    NSImageView *_focusView;
    BOOL _isFocusViewVisible;
    BOOL _animatingFocusView;
    NSLayoutConstraint *_widthConstraint;
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)_animateHighlightOn:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

