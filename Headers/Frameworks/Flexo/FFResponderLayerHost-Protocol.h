//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFResponderLayer, NSView;

@protocol FFResponderLayerHost
@property id focusOwner;
- (id)accessibilityParentForResponderLayer:(FFResponderLayer *)arg1;
- (void)setSkimmingPlayheadHidden:(BOOL)arg1;
- (void)responderLayer:(FFResponderLayer *)arg1 needsHeightChanged:(double)arg2;
- (NSView *)hostView;
@end

