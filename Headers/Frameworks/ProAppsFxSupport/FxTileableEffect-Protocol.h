//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FxImageTile, NSArray, NSData;

@protocol FxTileableEffect <NSObject>
- (BOOL)renderDestinationImage:(FxImageTile *)arg1 sourceImages:(NSArray *)arg2 pluginState:(NSData *)arg3 atTime:(CDStruct_198678f7)arg4 error:(id *)arg5;
- (BOOL)sourceTileRect:(struct FxRect *)arg1 sourceImageIndex:(unsigned long long)arg2 sourceImages:(NSArray *)arg3 destinationTileRect:(struct FxRect)arg4 destinationImage:(FxImageTile *)arg5 pluginState:(NSData *)arg6 atTime:(CDStruct_198678f7)arg7 error:(id *)arg8;
- (BOOL)destinationImageRect:(struct FxRect *)arg1 sourceImages:(NSArray *)arg2 destinationImage:(FxImageTile *)arg3 pluginState:(NSData *)arg4 atTime:(CDStruct_198678f7)arg5 error:(id *)arg6;
- (BOOL)pluginState:(id *)arg1 atTime:(CDStruct_198678f7)arg2 quality:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)properties:(id *)arg1 error:(id *)arg2;
- (BOOL)addParametersWithError:(id *)arg1;
- (id)initWithAPIManager:(id <PROAPIAccessing>)arg1;

@optional
- (Class)classForCustomParameterID:(unsigned int)arg1;
- (BOOL)scheduleInputs:(id *)arg1 withPluginState:(NSData *)arg2 atTime:(CDStruct_198678f7)arg3 error:(id *)arg4;
- (BOOL)parameterChanged:(unsigned int)arg1 atTime:(CDStruct_198678f7)arg2 error:(id *)arg3;
- (BOOL)finishInitialSetup:(id *)arg1;
@end

