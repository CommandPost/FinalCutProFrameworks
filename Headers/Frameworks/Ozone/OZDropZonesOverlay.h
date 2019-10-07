//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@class NSDictionary, NSMutableArray;

@interface OZDropZonesOverlay : OZOverlay
{
    _Bool _isEnabled;
    unsigned int _flags;
    unsigned int _hitNodeID;
    _Bool _isDragging;
    NSMutableArray *_objectsArray;
    struct PCPtr<POMultiResStringTexture> _stringTexture;
    NSDictionary *_textAttributes;
    NSMutableArray *_textMDPs;
    NSMutableArray *_boxMDPs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)texMDP:(id)arg1 center:(const PCVector2_79efa81a *)arg2;
- (id)highlightBoxMDPFromCorners:(PCVector2_79efa81a *)arg1 c2:(PCVector2_79efa81a *)arg2 c3:(PCVector2_79efa81a *)arg3 c4:(PCVector2_79efa81a *)arg4 color:(id)arg5;
- (id)getMetalDrawPrimitives:(id)arg1;
- (BOOL)doesSupportMetal;
- (void)draw;
- (void)drawOutlineHighlight:(PCVector2_79efa81a *)arg1 c2:(PCVector2_79efa81a *)arg2 c3:(PCVector2_79efa81a *)arg3 c4:(PCVector2_79efa81a *)arg4 color:(const struct PCColor *)arg5;
- (void)updateDropZonesArray:(const struct OZRenderState *)arg1;
- (int)hitCheckPoint:(const PCVector2_7e488b7d *)arg1;
- (int)hitCheck:(id)arg1;
- (struct OZObjectManipulator *)hitCheckNode:(const PCVector2_7e488b7d *)arg1;
- (int)getDrawingOrder;
- (BOOL)shouldDraw;
- (void)disable;
- (void)enable:(unsigned int)arg1 pBoard:(void *)arg2 dropInfo:(struct OZDropTargetInfo *)arg3;
- (void)setIsDragging:(_Bool)arg1;
- (_Bool)isDragging;
- (_Bool)isEnabled;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

