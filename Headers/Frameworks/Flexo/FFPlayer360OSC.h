//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class FFLRUImageCacheObject, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFPlayer360OSC : FFOSC
{
    NSDictionary *_360TextAttributesText;
    NSDictionary *_360TextAttributesNumbers;
    NSDictionary *_360TextAttributesText2X;
    NSDictionary *_360TextAttributesNumbers2X;
    FFLRUImageCacheObject *_lastTextImageObject;
    NSString *_lastTextKey;
    struct CGRect _setBounds;
    long long _show360Details;
    struct CGPoint _mouseDownPoint;
    BOOL _mouseDown;
}

- (BOOL)supportsMetalRendering;
- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (void)drawOnScreenForContexts:(id)arg1 drawProperties:(id)arg2;
- (BOOL)shouldDrawUsingDrawProperties:(id)arg1;
- (void)drawOrientation:(id)arg1 rect:(struct CGRect)arg2 tiltValue:(float)arg3 panValue:(float)arg4 rollValue:(float)arg5 textAttributes:(id)arg6 valueAttributes:(id)arg7 cornerSize:(double)arg8 renderer:(id)arg9;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (BOOL)isAvailableDuringPlayback;
- (CDStruct_1b6d18a9)currentChannelTime;
- (CDStruct_1b6d18a9)channelTimeForTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)_setupFontsForRender:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (id)init;

@end

