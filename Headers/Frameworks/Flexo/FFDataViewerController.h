//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class FFDataViewerNode, LKOutlineView;

@interface FFDataViewerController : NSWindowController
{
    FFDataViewerNode *_rootNode;
    LKOutlineView *_outlineView;
}

- (id)initWithObject:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)windowWillClose:(id)arg1;
- (id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
@property(retain, nonatomic) FFDataViewerNode *rootNode; // @synthesize rootNode=_rootNode;

@end
