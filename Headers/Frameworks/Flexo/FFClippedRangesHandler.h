//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface FFClippedRangesHandler : NSObject
{
    NSMapTable *_objectMap;
    NSMapTable *_objectRanges;
    NSMapTable *_usedRangesMediaIdentifierToBrowserSequence;
    BOOL _showsRanges;
    BOOL _sortUnused;
    BOOL _listview;
    BOOL _procrastinate;
    BOOL _processModified;
    NSString *_currentProjectAngleID;
}

+ (id)sharedInstance;
- (void)timelineChanged:(id)arg1;
- (void)_addObject:(id)arg1 andRecordChanges:(id)arg2;
- (void)_removeObject:(id)arg1 andRecordChanges:(id)arg2;
- (void)_removeFirstInstanceOf:(id)arg1 from:(id)arg2;
- (void)_replaceRangeClosestTo:(id)arg1 in:(id)arg2;
- (void)_refreshUsedMediaIndicators:(id)arg1;
- (void)setSequence:(id)arg1 forUsedRangesMediaIdentifier:(id)arg2;
- (id)sequenceForUsedRangesMediaIdentifier:(id)arg1;
- (id)usedRangesMediaIdentifierForObject:(id)arg1;
- (void)setListview:(BOOL)arg1;
- (BOOL)listview;
- (void)setSortUnused:(BOOL)arg1;
- (BOOL)sortUnused;
- (void)setShowsRanges:(BOOL)arg1;
- (BOOL)showsRanges;
- (id)rangesForUsedRangesMediaIdentifier:(id)arg1;
- (id)init;

@end

