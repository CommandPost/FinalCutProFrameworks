//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject, NSArray;

__attribute__((visibility("hidden")))
@interface FFAnchoredTimelineModuleUndoState : NSObject
{
    FFAnchoredObject *_rootItem;
    NSArray *_selection;
    NSArray *_rangeSelection;
    CDStruct_1b6d18a9 _time;
    BOOL _actionType;
}

- (void)dealloc;
@property(nonatomic) BOOL actionType; // @synthesize actionType=_actionType;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(retain, nonatomic) NSArray *rangeSelection; // @synthesize rangeSelection=_rangeSelection;
@property(retain, nonatomic) NSArray *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) FFAnchoredObject *rootItem; // @synthesize rootItem=_rootItem;

@end
