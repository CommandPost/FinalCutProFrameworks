//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKLayoutGraphNode.h>

@class NSMutableSet;

@interface TLKLayoutGraphContainerNode : TLKLayoutGraphNode
{
    NSMutableSet *_childrenLayoutGraphNodes;
}

- (void)removeChildrenLayoutGraphNodesObject:(id)arg1;
- (void)addChildrenLayoutGraphNodesObject:(id)arg1;
- (void)setChildrenLayoutGraphNodes:(id)arg1;
- (id)childrenLayoutGraphNodes;
- (BOOL)isContainer;

@end
