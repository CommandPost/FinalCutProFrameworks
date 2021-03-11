//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/FxHostPrivateAPI-Protocol.h>
#import <Ozone/FxRenderModelAPIPrivate-Protocol.h>
#import <Ozone/PROAPIObject-Protocol.h>

@class NSString;

@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate>
{
    struct OZFxPlugSharedBase *_plugin;
}

- (void)pluginXPCConnectionBroken:(id)arg1;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithIdentifier:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundle:(id)arg4;
- (float)blendingGamma;
- (BOOL)giveEffectUIFocus;
- (BOOL)navigateToTime:(CDUnion_2516e51e)arg1;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

