//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMediaSidebarSectionNode.h>

__attribute__((visibility("hidden")))
@interface FFImportMediaSidebarFavoritesSectionNode : FFMediaSidebarSectionNode
{
}

+ (id)node;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingChildNodes;
- (void)startObservingChildNodes;
- (void)updateChildNodes;
- (id)_copyFavoritesItems;
- (id)favoritesSidebarCollection;
- (id)title;
- (id)titleFont:(BOOL)arg1;
- (id)initWithRepresentedObject:(id)arg1;

@end

