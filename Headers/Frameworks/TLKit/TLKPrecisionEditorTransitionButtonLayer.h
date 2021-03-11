//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <TLKit/TLKLayerState-Protocol.h>

@class NSDictionary, NSString;

@interface TLKPrecisionEditorTransitionButtonLayer : CALayer <TLKLayerState>
{
    CALayer *_bowtieLayer;
    NSDictionary *_mappingTable;
    int _layerState;
    struct CGRect _baseBounds;
    struct CGRect _originalBounds;
}

@property(readonly, nonatomic) struct CGRect originalBounds; // @synthesize originalBounds=_originalBounds;
@property(readonly, nonatomic) struct CGRect baseBounds; // @synthesize baseBounds=_baseBounds;
@property(nonatomic) int layerState; // @synthesize layerState=_layerState;
@property(readonly, nonatomic) double bowTieWidth;
@property(nonatomic) BOOL bowtieVisibie;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

