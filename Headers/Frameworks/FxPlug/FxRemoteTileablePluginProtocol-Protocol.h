//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FxImageTile, FxRemoteTiming, NSArray, NSData, NSMutableArray, NSString, NSViewController;

@protocol FxRemoteTileablePluginProtocol
- (void)tileablePlugin:(unsigned long long)arg1 isLeftValue:(NSData *)arg2 equalTo:(NSData *)arg3 forParameterID:(unsigned int)arg4 reply:(void (^)(BOOL, BOOL, NSError *))arg5;
- (void)tileablePlugin:(unsigned long long)arg1 interpolateLeftData:(NSData *)arg2 rightData:(NSData *)arg3 atPercent:(float)arg4 forParameter:(unsigned int)arg5 reply:(void (^)(NSData *, NSError *))arg6;
- (void)OSCPlugin:(unsigned long long)arg1 mouseExitedAtPositionX:(double)arg2 positionY:(double)arg3 modifiers:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5 transactionID:(unsigned long long)arg6 reply:(void (^)(BOOL, BOOL, NSError *))arg7;
- (void)OSCPlugin:(unsigned long long)arg1 mouseEnteredAtPositionX:(double)arg2 positionY:(double)arg3 modifiers:(unsigned long long)arg4 atTime:(CDStruct_1b6d18a9)arg5 transactionID:(unsigned long long)arg6 reply:(void (^)(BOOL, BOOL, NSError *))arg7;
- (void)OSCPlugin:(unsigned long long)arg1 mouseMovedAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 mouseUpAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 mouseDraggedAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 mouseDownAtPositionX:(double)arg2 positionY:(double)arg3 activePart:(long long)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 keyUpAtPositionX:(double)arg2 positionY:(double)arg3 keyPressed:(unsigned short)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, BOOL, BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 keyDownAtPositionX:(double)arg2 positionY:(double)arg3 keyPressed:(unsigned short)arg4 modifiers:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, BOOL, BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 hitTestAtPositionX:(double)arg2 positionY:(double)arg3 atTime:(CDStruct_1b6d18a9)arg4 transactionID:(unsigned long long)arg5 reply:(void (^)(BOOL, long long, NSError *))arg6;
- (void)OSCPlugin:(unsigned long long)arg1 drawWithWidth:(long long)arg2 height:(long long)arg3 activePart:(long long)arg4 destinationImage:(FxImageTile *)arg5 atTime:(CDStruct_1b6d18a9)arg6 transactionID:(unsigned long long)arg7 reply:(void (^)(BOOL, NSError *))arg8;
- (void)OSCPlugin:(unsigned long long)arg1 drawingCoordinates:(void (^)(unsigned long long))arg2;
- (void)restartOSCSession:(unsigned long long)arg1 pluginSessionID:(unsigned long long)arg2 forPlugInWithClass:(NSString *)arg3 version:(unsigned int)arg4 reply:(void (^)(BOOL, NSError *))arg5;
- (void)createOSCPlugInWithClass:(NSString *)arg1 OSCUUID:(NSString *)arg2 pluginSessionID:(unsigned long long)arg3 reply:(void (^)(unsigned long long, unsigned int, NSError *))arg4;
- (void)viewServiceListenerEndPoint:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)tileablePlugin:(unsigned long long)arg1 performSelectorNamed:(NSString *)arg2 forParameter:(unsigned int)arg3 parameters:(NSArray *)arg4 atTime:(CDStruct_1b6d18a9)arg5 withReply:(void (^)(BOOL, NSArray *, NSError *))arg6;
- (void)tileablePlugin:(unsigned long long)arg1 renderWithState:(NSData *)arg2 withImageInputs:(NSArray *)arg3 withOutput:(FxImageTile *)arg4 rendererRegistryID:(unsigned long long)arg5 atTime:(CDStruct_1b6d18a9)arg6 withReply:(void (^)(BOOL, NSError *))arg7;
- (void)getPluginState:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2 quality:(unsigned long long)arg3 withParameters:(NSArray *)arg4 timingData:(FxRemoteTiming *)arg5 threeDData:(NSData *)arg6 lightingData:(NSData *)arg7 pathData:(NSMutableArray *)arg8 colorData:(NSData *)arg9 withReply:(void (^)(BOOL, NSData *, NSError *))arg10;
- (void)getTileablePlugin:(unsigned long long)arg1 tileROI:(struct FxRect)arg2 forInput:(int)arg3 withInputImages:(NSArray *)arg4 outputImage:(FxImageTile *)arg5 pluginState:(NSData *)arg6 atTime:(CDStruct_1b6d18a9)arg7 withReply:(void (^)(BOOL, struct FxRect, NSError *))arg8;
- (void)getTileablePlugin:(unsigned long long)arg1 DOD:(struct FxRect)arg2 withImageInputs:(NSArray *)arg3 outputImage:(FxImageTile *)arg4 pluginState:(NSData *)arg5 atTime:(CDStruct_1b6d18a9)arg6 withReply:(void (^)(BOOL, struct FxRect, NSError *))arg7;
- (void)tileablePlugin:(unsigned long long)arg1 requestFramesWithPluginState:(NSData *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withReply:(void (^)(BOOL, NSArray *, NSError *))arg4;
- (void)tileablePlugin:(unsigned long long)arg1 finishInitialSetupWithReply:(void (^)(BOOL, NSError *))arg2;
- (void)tileablePluginProperties:(unsigned long long)arg1 withReply:(void (^)(BOOL, NSDictionary *, NSError *))arg2;
- (void)tileablePlugin:(unsigned long long)arg1 parameterChanged:(unsigned int)arg2 transactionID:(unsigned long long)arg3 timingData:(FxRemoteTiming *)arg4 atTime:(CDStruct_1b6d18a9)arg5 withReply:(void (^)(BOOL, NSError *))arg6;
- (void)tileablePluginUpdateCustomViews:(unsigned long long)arg1;
- (void)tileablePlugin:(unsigned long long)arg1 createViewForParameter:(unsigned int)arg2 andViewController:(NSViewController *)arg3;
- (void)addTileableParameters:(unsigned long long)arg1 withReply:(void (^)(BOOL, NSArray *, NSError *))arg2;
- (void)restartSession:(unsigned long long)arg1 forPlugInWithClass:(NSString *)arg2 version:(unsigned int)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)createTileablePlugInWithClass:(NSString *)arg1 UUID:(NSString *)arg2 version:(unsigned int)arg3 reply:(void (^)(unsigned long long, unsigned int, NSError *))arg4;
@end

