//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import "NSSplitViewDelegate.h"

@interface LKSplitViewModule : LKViewModule <NSSplitViewDelegate>
{
    BOOL _isVertical;
    struct {
        unsigned int keepFirstModuleConstantSize:1;
        unsigned int keepLastModuleConstantSize:1;
        unsigned int RESERVED:30;
    } _svmFlags;
    void *_reserved4;
    void *_reserved5;
    void *_reserved6;
}

- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)_resizeSplitViewsTo:(double)arg1 dimensions:(double *)arg2 minDimensions:(double *)arg3 count:(unsigned long long)arg4;
- (void)preLayout:(id)arg1;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (BOOL)isVertical;
- (void)setVertical:(BOOL)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (BOOL)loadView;
- (Class)splitviewClass;
- (void)dealloc;
- (void)_removeViewForModule:(id)arg1;
- (void)_installViewForModule:(id)arg1;

@end

