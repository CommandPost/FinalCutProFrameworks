//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPersistentModule.h>

@class FFSidebarModule, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface FFEventsDetailModule : FFPersistentModule
{
    NSArray *_unfilteredRanges;
    NSArray *_contents;
    NSDictionary *_filtersDictionary;
    FFSidebarModule *_sidebarModule;
    CDUnknownBlockType _UIUpdateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType UIUpdateBlock; // @synthesize UIUpdateBlock=_UIUpdateBlock;
@property(retain, nonatomic) NSDictionary *filtersDictionary; // @synthesize filtersDictionary=_filtersDictionary;
@property(nonatomic) FFSidebarModule *sidebarModule; // @synthesize sidebarModule=_sidebarModule;
- (void)dealloc;
- (id)init;
- (BOOL)finishedLoading;
- (void)removeFilters;
- (BOOL)mediaRangesVisible:(id)arg1;
- (void)invalidateFilteredItems;
- (void)invalidateUnfilteredItems;
@property(retain, nonatomic) NSArray *contents;
- (BOOL)contentsEqual:(id)arg1 newContents:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingContents;
- (void)startObservingContents;
- (id)_itemsInContents:(id)arg1;
- (void)scrollSelectionIntoView;
- (void)moveSelectionToPreviousItem;
- (void)moveSelectionToNextItem;
@property(readonly, nonatomic) NSArray *selectedItems;
@property(readonly, nonatomic) NSArray *unfilteredRanges;
- (void)collectChildrenOfItem:(struct NSObject *)arg1 intoArray:(id)arg2;
- (int)favFilterType;
- (void)setFavoriteFilter:(int)arg1;

@end

