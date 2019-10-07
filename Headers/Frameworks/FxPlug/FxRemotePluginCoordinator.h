//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxRemoteTileablePluginProtocol.h"

@class NSLock, NSMutableDictionary, NSXPCConnection;

@interface FxRemotePluginCoordinator : NSObject <FxRemoteTileablePluginProtocol>
{
    NSXPCConnection *hostConnection;
    NSMutableDictionary *pluginSessions;
    unsigned long long nextSessionID;
    NSLock *sessionLock;
}

- (void)tileablePlugin:(unsigned long long)arg1 isLeftValue:(id)arg2 equalTo:(id)arg3 forParameterID:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)tileablePlugin:(unsigned long long)arg1 interpolateLeftData:(id)arg2 rightData:(id)arg3 atPercent:(float)arg4 forParameter:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)OSCPlugin:(unsigned long long)arg1 mouseExitedAtPositionX:(double)arg2 positionY:(double)arg3 modifiers:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5 transactionID:(unsigned long long)arg6 reply:(CDUnknownBlockType)arg7;
- (void)OSCPlugin:(unsigned long long)arg1 mouseEnteredAtPositionX:(double)arg2 positionY:(double)arg3 modifiers:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5 transactionID:(unsigned long long)arg6 reply:(CDUnknownBlockType)arg7;
- (void)OSCPlugin:(unsigned long long)arg1 mouseMovedAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 mouseUpAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 mouseDraggedAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 mouseDownAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 keyUpAtPositionX:(double)arg2 positionY:(double)arg3 keyPressed:(unsigned short)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 keyDownAtPositionX:(double)arg2 positionY:(double)arg3 keyPressed:(unsigned short)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 hitTestAtPositionX:(double)arg2 positionY:(double)arg3 atTime:(CDStruct_1b6d18a9)arg4 transactionID:(unsigned long long)arg5 reply:(CDUnknownBlockType)arg6;
- (void)OSCPlugin:(unsigned long long)arg1 drawWithWidth:(long long)arg2 height:(long long)arg3 activePart:(long long)arg4 destinationImage:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(CDUnknownBlockType)arg8;
- (void)OSCPlugin:(unsigned long long)arg1 drawingCoordinates:(CDUnknownBlockType)arg2;
- (void)viewServiceListenerEndPoint:(CDUnknownBlockType)arg1;
- (void)tileablePlugin:(unsigned long long)arg1 renderWithState:(id)arg2 withImageInputs:(id)arg3 withOutput:(id)arg4 rendererRegistryID:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 withReply:(CDUnknownBlockType)arg7;
- (void)getPluginState:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2 quality:(unsigned long long)arg3 withParameters:(id)arg4 timingData:(id)arg5 threeDData:(id)arg6 lightingData:(id)arg7 pathData:(id)arg8 colorData:(id)arg9 withReply:(CDUnknownBlockType)arg10;
- (void)getTileablePlugin:(unsigned long long)arg1 tileROI:(struct FxRect)arg2 forInput:(int)arg3 withInputImages:(id)arg4 outputImage:(id)arg5 pluginState:(id)arg6 atTime:(CDStruct_1b6d18a9)arg7 withReply:(CDUnknownBlockType)arg8;
- (void)getTileablePlugin:(unsigned long long)arg1 DOD:(struct FxRect)arg2 withImageInputs:(id)arg3 outputImage:(id)arg4 pluginState:(id)arg5 atTime:(CDStruct_1b6d18a9)arg6 withReply:(CDUnknownBlockType)arg7;
- (void)tileablePlugin:(unsigned long long)arg1 requestFramesWithPluginState:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)tileablePlugin:(unsigned long long)arg1 finishInitialSetupWithReply:(CDUnknownBlockType)arg2;
- (void)tileablePluginProperties:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)tileablePlugin:(unsigned long long)arg1 performSelectorNamed:(id)arg2 forParameter:(unsigned int)arg3 parameters:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)tileablePlugin:(unsigned long long)arg1 parameterChanged:(unsigned int)arg2 transactionID:(unsigned long long)arg3 timingData:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)tileablePluginUpdateCustomViews:(unsigned long long)arg1;
- (void)tileablePlugin:(unsigned long long)arg1 createViewForParameter:(unsigned int)arg2 andViewController:(id)arg3;
- (void)addTileableParameters:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)restartOSCSession:(unsigned long long)arg1 pluginSessionID:(unsigned long long)arg2 forPlugInWithClass:(id)arg3 version:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)restartSession:(unsigned long long)arg1 forPlugInWithClass:(id)arg2 version:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)createOSCPlugInWithClass:(id)arg1 OSCUUID:(id)arg2 pluginSessionID:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)createTileablePlugInWithClass:(id)arg1 UUID:(id)arg2 version:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (unsigned long long)threadTransactionID:(unsigned long long)arg1;
- (id)apiManagerForPluginSessionID:(unsigned long long)arg1;
- (unsigned int)checkOptionalMethods:(id)arg1;
- (id)pluginForSession:(unsigned long long)arg1 withError:(id *)arg2;
- (id)hostAPIMediatorAsyncForFunction:(const char *)arg1;
- (id)hostAPIMediatorSyncForFunction:(const char *)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

