//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerPopupButton.h>

#import "FFVideoScopesIntrinsics.h"

@class FFImageLayer, NSString;

__attribute__((visibility("hidden")))
@interface FFVideoScopesSettingsButtonLayer : FFResponderLayerPopupButton <FFVideoScopesIntrinsics>
{
    struct CGSize _topRightMargin;
    struct CGSize _bottomLeftMargin;
    FFImageLayer *_glyphLayer;
    struct CGSize _intrinsicContentSize;
}

+ (id)layer;
@property(nonatomic) struct CGSize bottomLeftMargin; // @synthesize bottomLeftMargin=_bottomLeftMargin;
@property(nonatomic) struct CGSize topRightMargin; // @synthesize topRightMargin=_topRightMargin;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)fittingSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureEmphasized;
- (void)configureDisabled;
- (void)configureInactive;
- (void)configurePressed;
- (void)configureRollover;
- (void)configureNormal;
- (void)setContentsScale:(double)arg1;
- (void)_buildSublayers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

