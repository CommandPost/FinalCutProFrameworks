//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZTimebarViewBase.h>

@interface OZTimebarView : OZTimebarViewBase
{
}

- (void)addPlayRangeToUndo:(const struct PCString *)arg1;
- (void)setPlayRange:(const struct PCTimeRange *)arg1;
- (struct PCTimeRange)getPlayRange;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (const struct PCTimeRange *)getActiveRange;
- (const struct PCTimeRange *)getDisplayRange;
- (void)findSnaps;
- (BOOL)movePlayHeadWithPlayRange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

