//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigTimeRangeAndObject, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripChunkContainer : NSObject
{
    NSMutableArray *_chunkArray;
    FigTimeRangeAndObject *_ro;
    id _delegate;
    BOOL _hasVideo;
    BOOL _hasAudio;
}

- (void)rangeInvalidated:(id)arg1;
- (id)initWithRangeOfMedia:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isEquavlientToFilmstripChunkContanier:(id)arg1;
- (void)replaceChunk:(id)arg1 withChunk:(id)arg2;
- (BOOL)chunkShouldHaveVariantBadge:(id)arg1;
- (BOOL)chunkShouldHaveComposedBadge:(id)arg1;
- (void)addChunk:(id)arg1;
- (BOOL)hasLayer;
- (void)setSelectedRangesOfMedia:(id)arg1;
- (void)setKeywordRanges:(id)arg1;
- (void)setMarkerRanges:(id)arg1;
- (struct CGRect)selectionFrame;
- (void)loadItems;
- (id)_gatherRangesForObject:(id)arg1;
- (void)loadMarkers;
- (void)updateMarkersInRange:(CDStruct_e83c9415)arg1;
- (void)updateKeywordsInRange:(CDStruct_e83c9415)arg1;
- (id)chunkFigTimeRangeAndObject;
- (struct CGPoint)closestPointInChunkContainerGivenPoint:(struct CGPoint)arg1;
- (id)chunkAtPoint:(struct CGPoint)arg1;
- (id)cellAtTime:(CDStruct_1b6d18a9)arg1;
- (id)firstChunk;
- (id)lastChunk;
- (id)chunkBeforeChunk:(id)arg1;
- (id)chunkAfterChunk:(id)arg1;
- (struct CGRect)frame;
- (void)setEmphasized:(BOOL)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
@property(readonly) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(readonly) FigTimeRangeAndObject *rangeObject; // @synthesize rangeObject=_ro;
@property id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *chunkArray; // @synthesize chunkArray=_chunkArray;

@end
