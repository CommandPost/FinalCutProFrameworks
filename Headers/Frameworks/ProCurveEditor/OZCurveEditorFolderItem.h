//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProCurveEditor/OZCurveEditorItem.h>

@class NSMutableArray;

@interface OZCurveEditorFolderItem : OZCurveEditorItem
{
    NSMutableArray *_children;
}

- (id)initWithChannel:(struct OZChannelBase *)arg1 numberOfSamples:(double)arg2 appDelegate:(id)arg3 ignoreHiddenChannels:(BOOL)arg4;
- (id)initWithRoot:(struct OZChannelBase *)arg1 numberOfSamples:(double)arg2 appDelegate:(id)arg3 ignoreHiddenChannels:(BOOL)arg4;
- (void)dealloc;
- (id)children;
- (void)addChild:(id)arg1;
- (id)childrenAtIndex:(unsigned int)arg1;
- (id)flattenDescendants;
- (int)numberOfChildren;
- (BOOL)hasChildren;
- (BOOL)isCollapsed;
- (void)collapse:(BOOL)arg1;
- (void)select:(BOOL)arg1;
- (void)enableItem:(int)arg1;
- (int)isEnabledItem;
- (void)takeCurveSnapshot:(BOOL)arg1;
- (BOOL)isAnimatedChannel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithRoot;

@end
