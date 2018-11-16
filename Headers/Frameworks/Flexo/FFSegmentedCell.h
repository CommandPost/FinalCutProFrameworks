//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSegmentedCell.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFSegmentedCell : LKSegmentedCell
{
    NSMutableArray *_multiStateItems;
}

- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElement:(id)arg1 actionDescription:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_segmentUIElementForSegment:(long long)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (id)_baseFacet;
- (void)setSegmentCount:(long long)arg1;
- (long long)stateForSegment:(long long)arg1;
- (void)setState:(long long)arg1 forSegment:(long long)arg2;
- (void)dealloc;

@end

