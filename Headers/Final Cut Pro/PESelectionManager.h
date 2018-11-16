//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject, FFContext, NSArray, NSMutableArray, PEViewedClipSet;

@interface PESelectionManager : NSObject
{
    NSArray *_selectedItems;
    id _selectionOwner;
    NSMutableArray *_viewedClipStack;
    FFAnchoredObject *_timelineRootItem;
    FFContext *_timelineContext;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultSelectionManager;
+ (void)releaseSharedInstance;
- (id)init;
- (void)dealloc;
- (id)selectedItems;
- (id)selectionOwner;
- (void)setSelectedItems:(id)arg1 owner:(id)arg2;
@property(readonly) PEViewedClipSet *viewedClips;
- (id)viewedClipsContexts;
@property(readonly) PEViewedClipSet *persistentViewedClips;
- (void)setViewedClips:(id)arg1;
- (void)pushViewedClips:(id)arg1;
- (void)popViewedClips;
- (void)replaceViewedClips:(id)arg1 withViewedClips:(id)arg2;
- (void)removeAnyClipSetContainingObject:(id)arg1;
@property(readonly) FFAnchoredObject *timelineRootItem;
@property(readonly) FFContext *timelineContext;
- (void)setTimelineRootItem:(id)arg1 context:(id)arg2;

@end

