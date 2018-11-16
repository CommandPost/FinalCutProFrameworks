//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (Additions)
- (void)drawTopFadedEdge;
- (void)drawLeftFadedEdge;
- (struct CGPoint)globalPointFor:(struct CGPoint)arg1;
- (struct CGRect)globalFrameFor:(struct CGRect)arg1;
- (struct CGRect)globalFrame;
- (struct CGRect)frameFromGlobalFrame:(struct CGRect)arg1;
- (void)performSelectorOnAllSubviews:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnAllSubviews:(SEL)arg1;
- (void)offsetFrameBy:(struct CGPoint)arg1;
- (BOOL)isFirstResponder;
- (BOOL)isVisibleInWindow;
- (id)duplicate;
- (id)snapshotImage;
- (id)_highestLayeredAncestor;
- (void)_recursiveToggleWantsLayerInner;
- (void)recursiveToggleWantsLayer;
@end
