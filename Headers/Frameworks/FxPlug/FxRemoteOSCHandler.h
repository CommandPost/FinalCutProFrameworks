//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxOnScreenControlAPI_v4.h"

@class FxRemotePluginCoordinator, NSString;

@interface FxRemoteOSCHandler : NSObject <FxOnScreenControlAPI_v4>
{
    FxRemotePluginCoordinator *pluginCoordinator;
    unsigned long long hostSessionID;
    NSString *pluginUUID;
}

@property(retain) NSString *pluginUUID; // @synthesize pluginUUID;
@property unsigned long long hostSessionID; // @synthesize hostSessionID;
@property FxRemotePluginCoordinator *pluginCoordinator; // @synthesize pluginCoordinator;
- (void)setCursor:(id)arg1;
- (double)backingScaleFactor;
- (id)objectToScreenTransform;
- (void)inputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 pixelAspectRatio:(double *)arg3;
- (void)objectWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 pixelAspectRatio:(double *)arg3;
- (double)pixelAspectRatio;
- (struct CGRect)inputBounds;
- (struct CGRect)objectBounds;
- (double)canvasPixelAspectRatio;
- (double)canvasZoom;
- (void)convertPointFromSpace:(unsigned long long)arg1 fromX:(double)arg2 fromY:(double)arg3 toSpace:(unsigned long long)arg4 toX:(double *)arg5 toY:(double *)arg6;
- (id)hostAPIHandlerAsyncForFunction:(const char *)arg1;
- (id)hostAPIHandlerSyncForFunction:(const char *)arg1;
- (void)dealloc;
- (id)initWithPluginCoordinator:(id)arg1 pluginUUID:(id)arg2 andHostSessionID:(unsigned long long)arg3;

@end

