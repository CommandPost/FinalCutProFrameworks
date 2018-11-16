//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerPopupButton.h>

@class FFImageLayer;

__attribute__((visibility("hidden")))
@interface FFVideoScopesSettingsButtonLayer : FFResponderLayerPopupButton
{
    FFImageLayer *_glyphLayer;
    struct CGSize _topRightMargin;
    struct CGSize _bottomLeftMargin;
}

+ (id)videoScopesSettingsButtonLayer;
@property struct CGSize bottomLeftMargin; // @synthesize bottomLeftMargin=_bottomLeftMargin;
@property struct CGSize topRightMargin; // @synthesize topRightMargin=_topRightMargin;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGRect)frameForBounds:(struct CGRect)arg1;
- (void)configureEmphasized;
- (void)configureDisabled;
- (void)configureInactive;
- (void)configurePressed;
- (void)configureRollover;
- (void)configureNormal;
- (void)setMenu:(id)arg1;
- (id)buildSublayers;
- (void)setContentsScale:(double)arg1;

@end

