//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TLKTimelineScrollViewDataSource <NSObject>
- (unsigned long long)numberOfScrollers;
- (struct CGRect)contentFrameForScrollerAtIndex:(unsigned long long)arg1;
- (struct CGRect)contentBoundsForScrollerAtIndex:(unsigned long long)arg1;
- (struct CGRect)visibleRectForScrollerAtIndex:(unsigned long long)arg1;
- (void)scrollToRect:(struct CGRect)arg1 forScrollerAtIndex:(unsigned long long)arg2;
@end

