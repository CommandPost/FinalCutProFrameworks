//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxOnScreenControl_v3.h"

@class NSObject<PAEOSCXPCConnectionDelegate>, NSString, NSXPCConnection, PAETileableXPCPlugIn;

@interface PAEXPCOSC : NSObject <FxOnScreenControl_v3>
{
    id <PROAPIAccessing> apiManager;
    NSXPCConnection *xpcConnection;
    unsigned long long sessionID;
    unsigned long long xpcVersion;
    unsigned int optionalMethodSupport;
    PAETileableXPCPlugIn *plugin;
    NSObject<PAEOSCXPCConnectionDelegate> *delegate;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: connectionLost
    NSString *oscUUID;
    NSString *oscClassName;
    void *sharedBase;
    unsigned long long savedDrawingCoordinates;
    unsigned long long oscDrawingColorspace;
}

- (void)updateConnection:(id)arg1;
- (BOOL)runListenLoopForTransactionID:(unsigned long long)arg1 withSemaphore:(id)arg2;
- (void)flushListenLoopWithTransactionID:(unsigned long long)arg1;
- (void)endAllTransactions;
- (void)mouseExitedWithPositionX:(double)arg1 positionY:(double)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (void)mouseEnteredWithPositionX:(double)arg1 positionY:(double)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (void)mouseMovedWithPositionX:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (void)mouseUp:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (void)mouseDragged:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (void)mouseDown:(double)arg1 positionY:(double)arg2 activePart:(long long)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (int)activePartAtMousePositionX:(double)arg1 mousePositionY:(double)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (void)keyUp:(double)arg1 positionY:(double)arg2 keyPressed:(unsigned short)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 didHandle:(char *)arg6 atFxTime:(CDUnion_2516e51e)arg7;
- (void)keyDown:(double)arg1 positionY:(double)arg2 keyPressed:(unsigned short)arg3 modifiers:(unsigned long long)arg4 forceUpdate:(char *)arg5 didHandle:(char *)arg6 atFxTime:(CDUnion_2516e51e)arg7;
- (void)drawOSC:(long long)arg1 height:(long long)arg2 activePart:(long long)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (void)setupOSCTiming:(CDStruct_198678f7)arg1;
- (void)compositeImageToCanvas:(id)arg1;
- (id)imageTileWithWidth:(long long)arg1 height:(long long)arg2;
- (unsigned long long)drawingCoordinates;
- (void)setXPCVersion:(unsigned long long)arg1;
- (unsigned long long)sessionID;
- (id)asynchronousRemoteForMethod:(const char *)arg1;
- (id)synchronousRemoteForMethod:(const char *)arg1;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1 connection:(id)arg2 sessionID:(unsigned long long)arg3 optionalMethodSupport:(unsigned int)arg4 pluginInstance:(id)arg5 delegate:(id)arg6 UUID:(id)arg7 className:(id)arg8 sharedBase:(void *)arg9;

@end

