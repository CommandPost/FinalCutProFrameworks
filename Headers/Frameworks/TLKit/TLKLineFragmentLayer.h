//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKLayer.h>

#import <TLKit/TLKPartInfo-Protocol.h>

@class CALayer, NSString, TLKLineFragment, TLKTornEdgeLayer;

@interface TLKLineFragmentLayer : TLKLayer <TLKPartInfo>
{
    TLKLineFragment *_lineFragment;
    TLKTornEdgeLayer *_tornEdgesMask;
    CALayer *_rangeSelectionLayer;
    CALayer *_dividerLineLayer;
    unsigned int _wantsTornEdgesMask:1;
}

@property(nonatomic) TLKLineFragment *lineFragment; // @synthesize lineFragment=_lineFragment;
- (void)setContents:(id)arg1;
- (void)updateTornEdgesMask;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)partIdentifier;
- (void)setDelegate:(id)arg1;
@property(nonatomic) CALayer *rangeSelectionLayer;
@property(readonly, nonatomic) CALayer *dividerLineLayer;
@property(nonatomic) BOOL wantsTornEdgesMask;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

