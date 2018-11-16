//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerPopupButton.h>

@class FFResponderLayerStaticText;

__attribute__((visibility("hidden")))
@interface FFVideoScopesSettingsButtonLayer : FFResponderLayerPopupButton
{
    FFResponderLayerStaticText *_labelLayer;
    struct CGSize _topRightMargin;
    struct CGSize _bottomLeftMargin;
}

+ (id)videoScopesSettingsButtonLayer;
- (id)initWithThemeFacet:(id)arg1;
- (id)buildSublayers;
- (void)setMenu:(id)arg1;
- (void)configureNormal;
- (void)configureRollover;
- (void)configurePressed;
- (void)configureInactive;
- (void)configureDisabled;
- (void)configureEmphasized;
- (struct CGRect)frameForBounds:(struct CGRect)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
@property struct CGSize bottomLeftMargin; // @synthesize bottomLeftMargin=_bottomLeftMargin;
@property struct CGSize topRightMargin; // @synthesize topRightMargin=_topRightMargin;

@end

