//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaSidebarNode.h>

@interface FFMediaSidebarEventNode : FFMediaSidebarNode
{
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingChildNodes;
- (void)startObservingChildNodes;
- (void)updateChildNodes;
- (id)documentActiveProject;
- (id)adornmentImage:(BOOL)arg1;
- (id)iconImage:(BOOL)arg1;
- (BOOL)_containsProject:(id)arg1;
- (id)project;
- (id)eventRecord;
- (BOOL)isExpandable;
- (id)organizerItem;
- (id)persistentID;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)representedObject;
- (id)initWithEventRecord:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;

@end
