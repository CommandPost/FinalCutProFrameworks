//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorSelectionOSC.h>

#import "FFColorSelectionOSCDelegate.h"
#import "FFModalToolDelegate.h"

@class FFOpenGLNSImage, NSDictionary, NSString;

@interface FFBalanceColorUserEffectOSC : FFColorSelectionOSC <FFModalToolDelegate, FFColorSelectionOSCDelegate>
{
    NSDictionary *_balanceUserEffectMessageTextAttribute;
    NSDictionary *_balanceUserEffectMessageTextAttributeGlow;
    FFOpenGLNSImage *_textImage;
    NSString *_lastTextKey;
    int _textWidth;
    int _textHeight;
    struct CGRect _textRect;
    BOOL _textShouldHide;
    BOOL _hasOpenTransaction;
}

- (void)extraDrawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)proOSCMouseDownInitialize:(id)arg1;
- (id)_actionNameForChannelChange;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)_setupTextures:(struct _CGLContextObject *)arg1;
- (void)simpleTextRectangle:(float)arg1 cgl_ctx:(struct _CGLContextObject *)arg2 string:(id)arg3 attributes:(id)arg4 glowAttributes:(id)arg5 paddingX:(double)arg6 paddingY:(double)arg7 roundRectBackground:(BOOL)arg8 drawProperties:(id)arg9;
- (id)getCursor;
- (BOOL)containsTime:(CDStruct_1b6d18a9)arg1 forContainer:(id)arg2 useEntireTransitionRange:(BOOL)arg3;
- (void)modifyAdjustmentsWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 bufferData:(char *)arg4 bufferWidth:(double)arg5 bufferHeight:(double)arg6 bytesPerRow:(unsigned int)arg7;
- (id)newPixelBufferClampedTo8Bits;
- (BOOL)wantsHDRDelinearizedForWorkingSpace:(int)arg1;
- (id)effect;
- (long long)effectCountForReference;
- (long long)effectEyedropperButtonState;
- (int)balanceMethod;
- (id)anchoredObject;
- (void)ensureIntrinsic;
- (id)undoChannels;
- (BOOL)supportsTool:(Class)arg1;
- (void)dealloc;
- (id)initWithEffectStack:(id)arg1 channelFolder:(id)arg2 toolClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, getter=wantsSaturatedResult) BOOL wantsSaturatedResult;

@end

