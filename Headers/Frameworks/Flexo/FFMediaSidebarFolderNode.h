//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMediaSidebarNode.h>

@interface FFMediaSidebarFolderNode : FFMediaSidebarNode
{
}

+ (id)pasteboardType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingChildNodes;
- (void)startObservingChildNodes;
- (void)updateChildNodes;
- (BOOL)isExpandable;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)persistentID;
- (id)initWithFolder:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;

@end

