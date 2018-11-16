//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class FFOpenGLInfoGrid, FFTextureBuffer, FFThemeFacet, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FFOverlayOSC : FFOSC
{
    FFThemeFacet *_magicFrameFacet;
    FFThemeFacet *_startOfMediaFacet;
    FFThemeFacet *_endOfMediaFacet;
    FFThemeFacet *_clipInOutFacet;
    FFThemeFacet *_sequenceInOutFacet;
    FFTextureBuffer *_dominantMotionMessage;
    FFTextureBuffer *_opticalFlowMessage;
    struct CGSize _dominantTextSize;
    struct CGSize _opticalFlowTextSize;
    double _magicRed;
    double _magicGreen;
    double _magicBlue;
    double _magicAlpha;
    NSMutableDictionary *_textImageCache;
    int _LRUCount;
    FFOpenGLInfoGrid *_objectDetailsGrid;
    NSDictionary *_dominantMotionOpticalFlowTextAttribute;
    NSDictionary *_dominantMotionOpticalFlowTextAttributeGlow;
}

- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)checkAnchoredObject:(id)arg1 forLoadingEffectsAtTime:(CDStruct_1b6d18a9)arg2 container:(id)arg3 loadingEffectName:(id *)arg4 depth:(int)arg5;
- (void)checkAnchoredObjectForLeftRightEndInRange:(CDStruct_1b6d18a9 *)arg1 frameDuration:(CDStruct_1b6d18a9 *)arg2 editRange:(CDStruct_e83c9415 *)arg3 leftOverlay:(char *)arg4 rightOverlay:(char *)arg5;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (BOOL)shouldDrawUsingDrawProperties:(id)arg1;
- (void)_bindAndDrawTexture:(id)arg1 toContext:(struct _CGLContextObject *)arg2 overlayRect:(struct CGRect *)arg3 textRect:(struct CGRect *)arg4;
- (void)_drawTexture:(struct CGRect *)arg1 texRect:(struct CGRect *)arg2 toContext:(struct _CGLContextObject *)arg3;
- (CDStruct_1b6d18a9)currentChannelTime;
- (CDStruct_1b6d18a9)channelTimeForTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)_setupTextures:(struct _CGLContextObject *)arg1;
- (void)simpleTextRectangle:(float)arg1 rect:(struct CGRect)arg2 cgl_ctx:(struct _CGLContextObject *)arg3 string:(id)arg4 attributes:(id)arg5 glowAttributes:(id)arg6 paddingX:(double)arg7 paddingY:(double)arg8 roundRectBackground:(BOOL)arg9;
- (id)init;

@end

