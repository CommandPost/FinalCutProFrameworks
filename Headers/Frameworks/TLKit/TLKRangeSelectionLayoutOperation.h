//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class TLKLayoutDatabase, TLKSelectionManager;

@interface TLKRangeSelectionLayoutOperation : NSOperation
{
    TLKLayoutDatabase *_layoutDatabase;
    TLKSelectionManager *_selectionManager;
}

+ (id)rangeSelectionOperationForDatabase:(id)arg1 selection:(id)arg2;
@property(readonly, nonatomic) TLKSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) TLKLayoutDatabase *layoutDatabase; // @synthesize layoutDatabase=_layoutDatabase;
- (void)main;
- (void)dealloc;
- (id)initWithLayoutDatabase:(id)arg1 selectionManager:(id)arg2;
- (id)init;

@end
