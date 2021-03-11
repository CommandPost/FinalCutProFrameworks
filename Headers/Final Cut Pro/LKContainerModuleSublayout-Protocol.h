//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSColor, NSDictionary, NSView;

@protocol LKContainerModuleSublayout

@optional
- (BOOL)useWindowForFocusIndicator;
- (BOOL)wantsFocusIndicator;
- (BOOL)isBackgroundGrabbableAtPoint:(struct CGPoint)arg1;
- (unsigned long long)revealAnimationStyle;
- (BOOL)isViewOrderedBelow;
- (BOOL)isBackgroundViewGrabbable:(NSView *)arg1;
- (BOOL)isBackgroundGrabbable;
- (NSColor *)wantsTransparentBackground;
- (BOOL)wantsAlternateBackgroundColorForFooterBar;
- (BOOL)wantsAlternateBackgroundColorForHeaderBar;
- (BOOL)wantsTimelineStylePaneCap;
- (BOOL)wantsCapBar;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
- (NSDictionary *)layoutForTornOffWindow:(NSDictionary *)arg1;
@end

