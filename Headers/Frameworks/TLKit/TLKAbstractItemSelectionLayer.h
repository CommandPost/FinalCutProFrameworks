//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKRoundedSideLayer.h>

@interface TLKAbstractItemSelectionLayer : TLKRoundedSideLayer
{
    int _displayMode;
}

+ (Class)itemSelectionLayerClass;
+ (void)setItemSelectionLayerClass:(Class)arg1;
- (id)trailingEdgeHandle;
- (id)leadingEdgeHandle;
- (void)setDelegate:(id)arg1;
@property int displayMode;
@property BOOL containingViewFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;

@end

