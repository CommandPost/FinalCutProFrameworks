//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKAbstractEdgeSelectionLayer.h>

@class CALayer;

@interface TLKSimpleEdgeSelectionLayer : TLKAbstractEdgeSelectionLayer
{
    CALayer *_edge;
    CALayer *_edgeLayer;
    unsigned int _selectionMask:8;
    unsigned int _leadingEdgeAllowedOperation:1;
    unsigned int _trailingEdgeAllowedOperation:1;
}

- (BOOL)allowedOperationForEdge:(id)arg1;
- (void)setAllowedOperation:(BOOL)arg1 forEdge:(id)arg2;
- (void)setSelectionMask:(unsigned long long)arg1;
- (id)init;

@end
