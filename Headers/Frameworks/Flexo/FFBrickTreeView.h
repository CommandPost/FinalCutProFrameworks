//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBrickListView.h>

#import "FFBrickListViewDelegate.h"

@class FFBrickTreeController, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FFBrickTreeView : FFBrickListView <FFBrickListViewDelegate>
{
    FFBrickTreeController *_brickTreeController;
    id <FFBrickTreeDataSource> _dataSource;
    NSSet *_selectionIndexPaths;
}

@property(copy, nonatomic) NSSet *selectionIndexPaths; // @synthesize selectionIndexPaths=_selectionIndexPaths;
@property(retain, nonatomic) id <FFBrickTreeDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FFBrickTreeController *brickTreeController; // @synthesize brickTreeController=_brickTreeController;
- (void)brickListView:(id)arg1 hasMovedBrick:(id)arg2 to:(unsigned long long)arg3;
- (struct _NSRange)brickListView:(id)arg1 positionsForBrick:(id)arg2;
- (BOOL)reorderingIsPermittedForBrickListView:(id)arg1;
- (void)brick:(id)arg1 didMoveTo:(unsigned long long)arg2;
- (BOOL)dragToReorderIsEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)brickAt:(id)arg1;
- (id)pathForView:(id)arg1;
- (id)brickForView:(id)arg1;
- (id)wrapperViewAt:(id)arg1;
- (void)reloadData;
- (void)reloadBricks:(id)arg1 withNode:(id)arg2;
- (id)childrenContainerViewWithNode:(id)arg1;
@property __weak id <FFBrickTreeViewDelegate> delegate; // @dynamic delegate;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

