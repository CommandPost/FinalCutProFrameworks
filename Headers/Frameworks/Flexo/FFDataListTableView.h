//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTableView.h"

@class FFDataListPlayheadView;

__attribute__((visibility("hidden")))
@interface FFDataListTableView : LKTableView
{
    long long _playheadRow;
    int _playheadPosition;
    FFDataListPlayheadView *_playheadView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setPlayheadRow:(long long)arg1 andPosition:(int)arg2;
@property(retain, nonatomic) FFDataListPlayheadView *playheadView; // @synthesize playheadView=_playheadView;
@property(nonatomic) int playheadPosition; // @synthesize playheadPosition=_playheadPosition;
@property(nonatomic) long long playheadRow; // @synthesize playheadRow=_playheadRow;

@end

