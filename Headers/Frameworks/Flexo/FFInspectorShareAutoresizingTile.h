//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTile.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorShareAutoresizingTile : LKTile
{
    NSView *resizableView;
    float oldViewHeight;
    float minViewHeight;
    id proxy;
}

- (void)dealloc;
- (id)resizableView;
- (void)setResizableView:(id)arg1;
- (float)minViewHeight;
- (void)setMinViewHeight:(float)arg1;
- (void)viewFrameChanged:(id)arg1;

@end

