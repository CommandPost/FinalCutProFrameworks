//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface OZInspectorSegmentedControl : NSSegmentedControl
{
    BOOL mSegmentWidthsValid;
}

+ (void)initialize;
- (void)p_updateSegmentWidths;
- (void)p_invalidateSegmentWidths;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setSegmentCount:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;

@end

