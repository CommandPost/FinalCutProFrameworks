//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

@class NSProCursor;

@interface TXParagraphOSC : POOnScreenControl
{
    struct PCVector2<float> *_start;
    double _anchorX;
    double _anchorY;
    _Bool _stretchX;
    _Bool _stretchY;
    NSProCursor *_cursor;
    double _startObjX;
    double _startObjY;
    double _startObjZ;
    PCRect_b601f9f3 _startBounds;
    _Bool _capturingModifiedChannels;
    _Bool _mouseIsDown;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHandleName;
- (id)getCursorWithEvent:(id)arg1;
- (BOOL)postRedisplayOnActivePartChange;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)draw;
- (void)_computeCorners:(PCVector2_79efa81a *)arg1 fromBounds:(PCRect_b601f9f3)arg2 transform:(PCMatrix44Tmpl_93ed1289 *)arg3;
- (struct TXTextLayout *)getTextLayout;
- (void)setNewObjectDelegateForSceneNode:(struct OZSceneNode *)arg1;
- (void)setText:(struct TXTextLayout *)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

