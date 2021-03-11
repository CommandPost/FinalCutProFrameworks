//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class FFGPUNSImage, NSCursor, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFMultiCamOSC : FFOSC
{
    FFGPUNSImage *_angleEmpty;
    FFGPUNSImage *_angleBezel;
    FFGPUNSImage *_angleBezelRollover;
    FFGPUNSImage *_angleBezelSelectionAudioVideo;
    FFGPUNSImage *_angleBezelSelectionAudio;
    FFGPUNSImage *_angleBezelSelectionVideo;
    FFGPUNSImage *_angleAudioIcon;
    struct CGSize _angleAudioIconSize;
    NSMutableDictionary *_textTimeCodeImageCache;
    NSMutableDictionary *_textNameImageCache;
    NSCursor *_cursor;
    int _LRUCount;
    NSDictionary *_timecodeTextAttributes;
    NSDictionary *_angleClipTextAttributes;
    NSString *_lastAngleIDOver;
}

@property(retain) NSString *lastAngleIDOver; // @synthesize lastAngleIDOver=_lastAngleIDOver;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)isAccessorized;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getCursor;
- (void)flagsChanged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)passCommonOSCDrawProperties;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (long long)handleAtEventLocation:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (id)objectUnderPlayheadAndAngle:(id)arg1 allowBlade:(char *)arg2 angleName:(id *)arg3 angleLocation:(struct CGRect *)arg4;
- (BOOL)supportsMetalRendering;
- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (void)drawOnScreenForContexts:(id)arg1 drawProperties:(id)arg2;
- (BOOL)shouldDrawUsingDrawProperties:(id)arg1;
- (void)simpleTextRectangle:(id)arg1 rect:(struct CGRect)arg2 renderer:(id)arg3 string:(id)arg4 attributes:(id)arg5 attributeCode:(int)arg6 paddingX:(double)arg7 paddingY:(double)arg8;
- (void)_setupDrawInfoAndTextures:(id)arg1;
- (id)getAudioIconForSize:(float)arg1;
- (BOOL)isAvailableForMultiAngleState:(BOOL)arg1;
- (BOOL)isAvailableDuringPlayback;
- (void)dealloc;
- (id)init;

@end

