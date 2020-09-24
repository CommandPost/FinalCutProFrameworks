//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSMutableSet, NSSet, TLKLayoutDatabase;

__attribute__((visibility("hidden")))
@interface FFUpdateCaptionThroughEditIndicatorsOperation : NSOperation
{
    NSMutableSet *_captionsLayers;
    TLKLayoutDatabase *_layoutDatabase;
    NSArray *_throughEditDescriptions;
    NSArray *_captionsWithoutThroughEdits;
}

@property(retain, nonatomic) NSSet *captionsLayers; // @synthesize captionsLayers=_captionsLayers;
@property(retain, nonatomic) NSArray *captionsWithoutThroughEdits; // @synthesize captionsWithoutThroughEdits=_captionsWithoutThroughEdits;
@property(retain, nonatomic) NSArray *throughEditDescriptions; // @synthesize throughEditDescriptions=_throughEditDescriptions;
@property(retain, nonatomic) TLKLayoutDatabase *layoutDatabase; // @synthesize layoutDatabase=_layoutDatabase;
- (void)releaseLibraryObjects;
- (void)cancel;
- (void)updateCaptionLayersThroughEditsAppearance;
- (void)saveCaptionLayerForItemFragment:(id)arg1;
- (void)addThroughEditIndicatorForNextItemComponentFragment:(id)arg1;
- (void)addThroughEditIndicatorForPreviousItemComponentFragment:(id)arg1;
- (void)updateThroughEditIndicatorsForItemComponentFragment:(id)arg1 leading:(BOOL)arg2 trailing:(BOOL)arg3;
- (id)itemComponentFragmentsForClip:(id)arg1;
- (void)updateTrailingEdgeIndicatorForPreviousItemOfThroughEdit:(id)arg1;
- (void)updateLeadingEdgeIndicatorForNextItemOfThroughEdit:(id)arg1;
- (void)updateBothIndicatorsForThroughEdit:(id)arg1;
- (void)updateThroughEdit:(id)arg1;
- (void)updateIndicatorsOnCaptionsWithThroughEdits;
- (void)removeBothIndicatorsForCaption:(id)arg1;
- (void)removeIndicatorsFromCaptionsWithoutThroughEdits;
- (void)updateThroughEditIndicatorsWithThroughEditInfo;
- (void)main;
- (void)dealloc;
- (id)init;

@end
