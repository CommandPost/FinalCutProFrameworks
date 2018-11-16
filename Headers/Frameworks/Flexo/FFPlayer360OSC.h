//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class FFLRUImageCacheObject, FFOpenGLInfoGrid2, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFPlayer360OSC : FFOSC
{
    NSDictionary *_360TextAttributesText;
    NSDictionary *_360TextAttributesNumbers;
    NSDictionary *_360TextAttributesText2X;
    NSDictionary *_360TextAttributesNumbers2X;
    FFOpenGLInfoGrid2 *_objectDetailsGrid;
    FFOpenGLInfoGrid2 *_footerDetailsGrid;
    FFLRUImageCacheObject *_lastTextImageObject;
    NSString *_lastTextKey;
    struct CGRect _setBounds;
    long long _show360Details;
    struct CGPoint _mouseDownPoint;
    BOOL _mouseDown;
}

- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (BOOL)isAvailableDuringPlayback;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)drawOrientation:(id)arg1 rect:(struct CGRect)arg2 cgl_ctx:(struct _CGLContextObject *)arg3 tiltValue:(float)arg4 panValue:(float)arg5 rollValue:(float)arg6 textAttributes:(id)arg7 valueAttributes:(id)arg8 cornerSize:(double)arg9;
- (CDStruct_1b6d18a9)currentChannelTime;
- (CDStruct_1b6d18a9)channelTimeForTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)_setupTextures:(struct _CGLContextObject *)arg1 bounds:(struct CGRect)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (id)init;

@end
