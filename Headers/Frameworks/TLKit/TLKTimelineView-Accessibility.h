//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineView.h>

#import "NSProSyntheticUIElementSupport.h"

@interface TLKTimelineView (Accessibility) <NSProSyntheticUIElementSupport>
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)_playheadRect;
- (struct CGRect)_rectForTimelineItem:(id)arg1;
- (id)accessibilityUIElementForItem:(id)arg1 inHostLayer:(id)arg2;
- (id)_timelineChildForItem:(id)arg1;
- (id)_timelineItemElements;
- (id)_playheadElement;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)figTimeToTimecodeString:(CDStruct_1b6d18a9)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)_hostLayerAtPoint:(struct CGPoint)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
@end
