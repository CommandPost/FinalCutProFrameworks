//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKImageLayer.h>

#import <TLKit/TLKAnchorPartLayer-Protocol.h>

@class NSString, TLKAnchorLayer, TLKAnchorPart;

@interface TLKThemedAnchorPartLayer : TLKImageLayer <TLKAnchorPartLayer>
{
    int _savedAnchorDirection;
    int _savedItemType;
    int _savedAVContainmentTypeMask;
    TLKAnchorPart *anchorPart;
    TLKAnchorLayer *_anchorLayer;
}

@property(nonatomic) int savedAVContainmentTypeMask; // @synthesize savedAVContainmentTypeMask=_savedAVContainmentTypeMask;
@property(nonatomic) int savedItemType; // @synthesize savedItemType=_savedItemType;
@property(nonatomic) int savedAnchorDirection; // @synthesize savedAnchorDirection=_savedAnchorDirection;
@property(nonatomic) TLKAnchorLayer *anchorLayer; // @synthesize anchorLayer=_anchorLayer;
@property(nonatomic) TLKAnchorPart *anchorPart; // @synthesize anchorPart;
- (void)invalidate;
- (void)updateAppearance;
- (void)updateThemeFacet;
- (id)imageNameForTypeMask:(int)arg1 itemType:(int)arg2;
- (void)updateThemeFacetIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

