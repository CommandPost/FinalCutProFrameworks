//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDModule.h>

@class FFUndoHandler, NSArray, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FFEventsDetailModule : FFMDModule
{
    NSArray *_unfilteredRanges;
    NSArray *_contents;
    NSSet *_observedProjects;
    NSDictionary *_filtersDictionary;
    CDUnknownBlockType _UIUpdateBlock;
    FFUndoHandler *_observingUndoHandler;
}

@property(retain, nonatomic) NSSet *observedProjects; // @synthesize observedProjects=_observedProjects;
@property(copy, nonatomic) CDUnknownBlockType UIUpdateBlock; // @synthesize UIUpdateBlock=_UIUpdateBlock;
@property(retain, nonatomic) NSDictionary *filtersDictionary; // @synthesize filtersDictionary=_filtersDictionary;
- (void)appWillTerminate:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)dealloc;
- (void)resetObservingUndoHandler:(id)arg1;
- (id)init;
- (BOOL)finishedLoading;
- (void)removeFilters;
- (BOOL)mediaRangesVisible:(id)arg1;
- (void)invalidateFilteredItems;
- (void)invalidateUnfilteredItems;
@property(retain, nonatomic) NSArray *contents;
- (BOOL)contentsEqual:(id)arg1 newContents:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didCloseUndo:(id)arg1;
- (void)_refreshOrganizer;
- (void)stopObservingContents;
- (void)startObservingContents;
- (id)_itemsInContents:(id)arg1;
- (void)scrollSelectionIntoView;
- (void)moveSelectionToPreviousItem;
- (void)moveSelectionToNextItem;
@property(readonly, nonatomic) NSArray *selectedItems;
@property(readonly, nonatomic) NSArray *unfilteredRanges;
- (void)updateHeaderUI;
- (long long)favFilterType;
- (void)setFavoriteFilter:(int)arg1;

@end

