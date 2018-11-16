//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZImagePreview.h>

@class OZChanSceneNodeRefController;

@interface OZSceneNodeDragTarget : OZImagePreview
{
    OZChanSceneNodeRefController *_pController;
    struct CGPoint _dragStart;
    struct OZRenderNode *_pDraggingRenderNode;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setController:(id)arg1;
- (id)controller;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseUp:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned int)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;

@end

