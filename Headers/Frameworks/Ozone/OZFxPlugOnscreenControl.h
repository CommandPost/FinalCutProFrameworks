//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

#import "FxOnScreenControlAPI_v2.h"
#import "FxOnScreenControlAPI_v3.h"
#import "FxOnScreenControlAPI_v4.h"
#import "PAEOSCXPCConnectionDelegate.h"
#import "PROAPIObject.h"

@class NSCursor, NSString;

@interface OZFxPlugOnscreenControl : POOnScreenControl <PROAPIObject, FxOnScreenControlAPI_v2, FxOnScreenControlAPI_v3, FxOnScreenControlAPI_v4, PAEOSCXPCConnectionDelegate>
{
    const struct OZRenderState *_state;
    PCRect_b601f9f3 _bounds;
    void *_plugin;
    unsigned long long _curModifiers;
    NSCursor *_cursor;
    struct OZChannel *_trackChannel;
    int _startCaptureModifiedChannels;
    PCVector2_7e488b7d _hitCheckCoords;
    int _savedActivePart;
}

+ (BOOL)validate:(struct OZChannelBase *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: ^{OZFxPlugSharedBase=^^?@@@^v@@@@@@@@@@@@@@{PCString=^{__CFString}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}BB{atomic<bool>=AB}BBBiBBBBB^{OZChannelBase}B@BBQB{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}I}16@0:8, name: _sharedBase
- (void)menuAddTrack:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (double)backingScaleFactor;
- (id)getCursor;
- (void)setCursor:(id)arg1;
- (id)getDefaultCursor;
- (id)objectToScreenTransform;
- (BOOL)postRedisplayOnActivePartChange;
- (void)inputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 pixelAspectRatio:(double *)arg3;
- (double)pixelAspectRatio;
- (struct CGRect)inputBounds;
- (struct CGRect)objectBounds;
- (void)objectWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 pixelAspectRatio:(double *)arg3;
- (double)canvasPixelAspectRatio;
- (double)canvasZoom;
- (void)convertPointFromSpace:(unsigned long long)arg1 fromX:(double)arg2 fromY:(double)arg3 toSpace:(unsigned long long)arg4 toX:(double *)arg5 toY:(double *)arg6;
- (int)getActivePart;
- (BOOL)oscFlagsChanged:(id)arg1;
- (BOOL)keyUpOSC:(id)arg1;
- (BOOL)keyDownOSC:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_getFxPlugTime:(CDUnion_2516e51e *)arg1;
- (void)unlockCustomParameters;
- (void)lockCustomParameters;
- (void)finishEvent:(id)arg1 update:(BOOL)arg2;
- (BOOL)setupEvent:(id)arg1 x:(double *)arg2 y:(double *)arg3 modifiers:(unsigned long long *)arg4;
- (int)hitCheckWithViewCoords:(PCVector2_7e488b7d *)arg1;
- (void)draw;
-     // Error parsing type: v48@0:8@16@24^{OZFxPlugSharedBase=^^?@@@^v@@@@@@@@@@@@@@{PCString=^{__CFString}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}BB{atomic<bool>=AB}BBBiBBBBB^{OZChannelBase}B@BBQB{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}I}32@40, name: createPluginWithUUID:OSCClassName:sharedBase:forConnection:
- (void)updateXPCConnection:(id)arg1 OSCPluginUUID:(id)arg2 OSCClassName:(id)arg3 sharedBase:(void *)arg4;
-     // Error parsing type: v40@0:8@16@24^{OZFxPlugSharedBase=^^?@@@^v@@@@@@@@@@@@@@{PCString=^{__CFString}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}BB{atomic<bool>=AB}BBBiBBBBB^{OZChannelBase}B@BBQB{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}I}32, name: setupRemoteOSCConnectionForUUID:OSCClassName:sharedBase:
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

