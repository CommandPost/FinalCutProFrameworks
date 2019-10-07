//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

@class FFOpenGLNSImage, NSDictionary, NSString;

@interface FF360TransformEffectOSC : FFProOSC
{
    NSDictionary *_360EffectMessageTextAttribute;
    NSDictionary *_360EffectMessageTextAttributeGlow;
    FFOpenGLNSImage *_textImage;
    NSString *_lastTextKey;
    int _textWidth;
    int _textHeight;
    struct CGRect _textRect;
    BOOL _textShouldHide;
    BOOL _hasOpenTransaction;
}

- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)_setupTextures:(struct _CGLContextObject *)arg1;
- (BOOL)containsTime:(CDStruct_1b6d18a9)arg1 forContainer:(id)arg2 useEntireTransitionRange:(BOOL)arg3;
- (id)anchoredObject;
- (void)ensureIntrinsic;
- (BOOL)supportsTool:(Class)arg1;
- (void)dealloc;
- (id)initWithHe360TransformEffectEffect:(id)arg1 effectStack:(id)arg2;

@end

