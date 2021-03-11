//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFGeometryBasedMarqueeSelectionModeDetector, FFStoryTimelinePresentation, NSArray;

@interface FFMarqueeSelectionModeDetector : NSObject
{
    BOOL _isContainerSelectionMode;
    BOOL _isItemSelectionMode;
    BOOL _modeHasBeenDetected;
    BOOL _isTopMostItemSecondaryComponent;
    FFStoryTimelinePresentation *_storyPresentation;
    FFGeometryBasedMarqueeSelectionModeDetector *_geometryBasedDetector;
    NSArray *_items;
    NSArray *_itemRectangles;
    struct CGPoint _marqueeStartPoint;
    struct CGPoint _marqueeEndPoint;
}

@property(nonatomic) BOOL isTopMostItemSecondaryComponent; // @synthesize isTopMostItemSecondaryComponent=_isTopMostItemSecondaryComponent;
@property(retain, nonatomic) NSArray *itemRectangles; // @synthesize itemRectangles=_itemRectangles;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) FFGeometryBasedMarqueeSelectionModeDetector *geometryBasedDetector; // @synthesize geometryBasedDetector=_geometryBasedDetector;
@property BOOL modeHasBeenDetected; // @synthesize modeHasBeenDetected=_modeHasBeenDetected;
@property(nonatomic) BOOL isItemSelectionMode; // @synthesize isItemSelectionMode=_isItemSelectionMode;
@property(nonatomic) BOOL isContainerSelectionMode; // @synthesize isContainerSelectionMode=_isContainerSelectionMode;
@property(nonatomic) struct CGPoint marqueeEndPoint; // @synthesize marqueeEndPoint=_marqueeEndPoint;
@property(nonatomic) struct CGPoint marqueeStartPoint; // @synthesize marqueeStartPoint=_marqueeStartPoint;
@property(retain, nonatomic) FFStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
- (void)_setupGeometryBasedDetector;
- (void)_calculateModeUsingGeometry;
- (void)_calculateMode;
- (id)_topMostItem;
- (id)_itemRectsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_canItemChangeMarqueeSelectionMode:(id)arg1;
- (id)_itemsAffectingModeFromSelectedItems:(id)arg1;
- (void)_setupModeCalculationWithSelectedItems:(id)arg1 usingItemRectBlock:(CDUnknownBlockType)arg2;
- (void)calculateModeForSelectedItems:(id)arg1 usingItemRectBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

