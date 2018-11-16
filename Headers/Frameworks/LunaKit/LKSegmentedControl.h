//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedControl.h"

@interface LKSegmentedControl : NSSegmentedControl
{
    BOOL _bordered;
}

+ (void)initialize;
@property(nonatomic, getter=isBordered) BOOL bordered; // @synthesize bordered=_bordered;
- (BOOL)showsMenuIndicatorForSegment:(long long)arg1;
- (void)setShowsMenuIndicator:(BOOL)arg1 forSegment:(long long)arg2;
- (long long)indexOfSelectedMenuItemInMenuForSegmentAtIndex:(long long)arg1;
- (id)selectedMenuItemInMenuForSegmentAtIndex:(long long)arg1;
- (void)selectMenuItemAtIndex:(long long)arg1 inMenuForSegmentAtIndex:(long long)arg2;
- (void)selectMenuItem:(id)arg1 inMenuForSegmentAtIndex:(long long)arg2;
- (void)setMenu:(id)arg1 forSegment:(long long)arg2 isPopUp:(BOOL)arg3 useMenuDelay:(BOOL)arg4;
- (double)displayWidthForSegment:(long long)arg1;
- (void)setSlider:(id)arg1 forSegment:(long long)arg2;
- (id)sliderForSegment:(long long)arg1;
- (void)setTintIndex:(long long)arg1;
- (long long)tintIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

