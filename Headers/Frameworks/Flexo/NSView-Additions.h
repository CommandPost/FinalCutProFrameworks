//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (Additions)
- (void)recursiveToggleWantsLayer;
- (void)_recursiveToggleWantsLayerInner;
- (id)_highestLayeredAncestor;
- (id)snapshotImage;
- (id)duplicate;
- (BOOL)isVisibleInWindow;
- (BOOL)isFirstResponder;
- (void)offsetFrameBy:(struct CGPoint)arg1;
- (void)performSelectorOnAllSubviews:(SEL)arg1;
- (void)performSelectorOnAllSubviews:(SEL)arg1 withObject:(id)arg2;
- (struct CGRect)frameFromGlobalFrame:(struct CGRect)arg1;
- (struct CGRect)globalFrame;
- (struct CGRect)globalFrameFor:(struct CGRect)arg1;
- (struct CGPoint)globalPointFor:(struct CGPoint)arg1;
- (void)drawLeftFadedEdge;
- (void)drawTopFadedEdge;
@end

