//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class FFAudioComponentsConfigTextView, FFRoleColorScheme, NSImageView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsConfigMixdownView : NSView
{
    NSImageView *m_glyphImage;
    FFAudioComponentsConfigTextView *m_titleView;
    FFRoleColorScheme *m_colorScheme;
    NSLayoutConstraint *m_widthConstraint;
    NSLayoutConstraint *m_heightConstraint;
    NSLayoutConstraint *m_glyphLeadingConstraint;
    NSLayoutConstraint *m_clearTrailingConstraint;
    NSLayoutConstraint *m_titleHeightConstraint;
}

+ (BOOL)supportsSecureCoding;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setupSubViews:(id)arg1;
- (void)setConstraintSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

