//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POAnimationPath.h"

@interface TXGlyphAnimationPathOnScreenControl : POAnimationPath
{
    PCPtr_3bd68a10 _textObject;
    struct TXTextStyle *_style;
    _Bool _glyphHasOwnStyleRun;
    _Bool _didSplitStyleRun;
    struct OZChannelRef *_pChannelRef;
}

- (void)init;
- (void)setTextObject:(struct TXTextObject *)arg1;
- (PCPtr_3bd68a10)getTextObject;
- (void)dealloc;
- (struct OZChannelPosition3D *)getPosition;
- (void)drawCurve:(const struct OZRenderState *)arg1 viewTransformation:(const PCMatrix44Tmpl_e98c85ee *)arg2 mode:(unsigned int)arg3 keyPoints:(BOOL)arg4 positionChannel:(struct OZChannelPosition3D *)arg5;
- (void)clipPath:(vector_8d17e539 *)arg1 edges:(vector_8d17e539 *)arg2 visible:(vector_69938c0b *)arg3;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)setChannelRef:(struct OZChannelBase *)arg1;
- (void)_splitStyleRuns;
- (_Bool)didSplitStyleRun;
- (void)resetDidSplitStyleRun;
- (void)menuAdd:(id)arg1;
- (void)menuDelete:(id)arg1;
- (void)menuSetInterpolation:(id)arg1;
- (void)menuLock:(id)arg1;
- (void)menuDisable:(id)arg1;
- (void)menuBreakTangent:(id)arg1;
- (void)menuAlignTangents:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
