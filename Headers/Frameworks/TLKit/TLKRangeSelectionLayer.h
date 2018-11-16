//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TLKPartInfo.h"

@class TLKSelectionLayer, TLKThemeBackedLayer;

@interface TLKRangeSelectionLayer : CALayer <TLKPartInfo>
{
    TLKSelectionLayer *_selectionLayer;
    TLKThemeBackedLayer *_leftHandle;
    TLKThemeBackedLayer *_rightHandle;
    int _draggingHandle;
    double _hitRegionHeight;
    unsigned int _containingViewFirstResponder:1;
    unsigned int RESERVED:31;
}

@property double hitRegionHeight; // @synthesize hitRegionHeight=_hitRegionHeight;
- (void)setDelegate:(id)arg1;
@property BOOL containingViewFirstResponder;
@property int draggingHandle;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutSublayers;
- (struct CGPath *)_newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2 lineWidth:(double)arg3;
- (id)timelineView;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_rightHandleFrame;
- (struct CGRect)_leftHandleFrame;
- (void)dealloc;
- (id)init;

@end

