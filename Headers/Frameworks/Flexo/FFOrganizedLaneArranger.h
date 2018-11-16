//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFOrganizedLaneManager;

__attribute__((visibility("hidden")))
@interface FFOrganizedLaneArranger : NSObject
{
    FFOrganizedLaneManager *_laneMaker;
}

+ (id)arrangerOfType:(int)arg1 withLaneMaker:(id)arg2;
@property(nonatomic) FFOrganizedLaneManager *laneMaker; // @synthesize laneMaker=_laneMaker;
- (BOOL)canShowComponentsForOrganizedLane:(id)arg1;
- (BOOL)canArrangeOrganizedLane:(id)arg1;
- (void)sequenceAddedItems:(id)arg1 removedItems:(id)arg2 modifiedItems:(id)arg3;
- (void)_arrangeAddedItems:(id)arg1 removedItems:(id)arg2 modifiedItems:(id)arg3;
- (void)checkLanesAreUpToDate;
- (void)loadLanesAndItemsFromStoryLine;
- (void)dealloc;
- (id)initWithLaneMaker:(id)arg1;

@end
