//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <TLKit/TLKLayerState-Protocol.h>
#import <TLKit/TLKPartInfo-Protocol.h>

@class NSString;

@interface TLKAbstractPrecisionEditorVerticalLinesLayer : CALayer <TLKPartInfo, TLKLayerState>
{
    int _edgeType;
    int _sidesToShow;
    int _sizesToShow;
    int _layerState;
}

+ (Class)verticalLinesClassLayer;
+ (void)setVerticalLinesClassLayer:(Class)arg1;
@property(nonatomic) int layerState; // @synthesize layerState=_layerState;
@property(nonatomic) int sidesToShow; // @synthesize sidesToShow=_sizesToShow;
@property(nonatomic) int edgeType; // @synthesize edgeType=_edgeType;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (BOOL)_insideDividerBar:(struct CGPoint)arg1;
- (BOOL)_aboveDividerBar:(struct CGPoint)arg1;
- (id)timelineView;
- (id)partIdentifier;
- (void)setDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

