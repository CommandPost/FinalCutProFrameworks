//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FFMediaSidebarNode : NSObject
{
    id _representedObject;
    FFMediaSidebarNode *_parentNode;
    NSMutableArray *_childNodes;
    BOOL _observingChildNodes;
}

+ (id)persistentIdForDSObject:(id)arg1;
+ (id)representedObjectsForNodes:(id)arg1;
+ (void)sortModelObjects:(id)arg1 stringSelector:(SEL)arg2 ascending:(BOOL)arg3;
+ (id)childNodesForRepresentedObjects:(id)arg1 reusingNodes:(id)arg2 nodeWithObjectBlock:(CDUnknownBlockType)arg3;
+ (id)pasteboardType;
@property(nonatomic) FFMediaSidebarNode *parentNode; // @synthesize parentNode=_parentNode;
@property(nonatomic, getter=isObservingChildNodes) BOOL observingChildNodes; // @synthesize observingChildNodes=_observingChildNodes;
@property(readonly, retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)debugDescription;
- (id)_descriptionWithDescendantsAtIndentLevel:(unsigned int)arg1;
- (id)description;
- (BOOL)acceptDrop:(id)arg1 childIndex:(long long)arg2;
- (BOOL)acceptDrop:(id)arg1 childIndex:(long long)arg2 operationBefore:(CDUnknownBlockType)arg3 operationAfter:(CDUnknownBlockType)arg4;
- (unsigned long long)validateDrop:(id)arg1 childIndex:(long long)arg2;
- (void)updateNodeAndChildren:(BOOL)arg1;
- (void)_updateNodeAndChildrenAndOutlineView;
- (BOOL)_updateNodeAndChildren:(id)arg1;
- (void)reload:(BOOL)arg1;
- (id)sidebarController;
- (BOOL)_isRootOfOutlineView;
- (id)outlineView;
- (void)configureAsRootOfOutlineView:(id)arg1;
- (void)stopObservingChildNodes;
- (void)startObservingChildNodes;
- (void)setObservingChildNodes:(BOOL)arg1 includeChildrenAtDepth:(int)arg2;
- (BOOL)allowsContextMenu;
- (BOOL)isSelectable;
- (BOOL)displaysDisclosureGlyph;
- (BOOL)isExpandable;
- (id)adornmentRolloverImage:(BOOL)arg1;
- (id)adornmentImage:(BOOL)arg1;
- (double)adornmentAreaWidth;
- (id)iconRolloverImage:(BOOL)arg1;
- (id)iconImage:(BOOL)arg1;
- (double)iconAreaWidth;
- (id)persistentID;
- (double)rowHeight;
- (id)toolTip;
- (id)titleFont:(BOOL)arg1;
- (id)titleColor:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)isTitleEditable;
- (id)title;
- (id)organizerItem;
- (id)indexPath;
- (id)_updateChildNodesExpandingNodes;
- (void)updateChildNodes;
- (id)childNodeWithRepresentedObject:(id)arg1;
- (id)representedObjectsForChildNodes;
- (void)replaceChildNodesInRange:(struct _NSRange)arg1 withNodes:(id)arg2;
- (void)setChildNodes:(id)arg1;
- (void)removeChildNodeAtIndex:(long long)arg1;
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;
- (id)addChildNodeOfClass:(Class)arg1;
- (void)addChildNode:(id)arg1;
- (id)_mutableChildNodesCreateIfNeeded:(BOOL)arg1;
- (id)ancestorWithClass:(Class)arg1;
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (id)childNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)childNodeCount;
- (id)childNodes;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1;

@end

