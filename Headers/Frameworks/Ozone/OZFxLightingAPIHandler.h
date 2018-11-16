//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxLightingAPI.h"

@interface OZFxLightingAPIHandler : NSObject <FxLightingAPI>
{
    struct OZFxPlugSharedBase *_plugin;
    BOOL _lightAccessValid;
    struct OZRenderParams _renderParams;
    struct LiLightSet *_lights;
    int _refCount;
}

- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;
- (void)beginLightAccess:(struct OZRenderParams)arg1;
- (void)endLightAccess;
- (unsigned long long)numberOfLightsAtTime:(double)arg1;
- (unsigned long long)lightModelToFxLightType:(struct LiLight)arg1;
- (void)lightInfo:(struct FxLightInfo *)arg1 forLight:(unsigned long long)arg2 atTime:(double)arg3 error:(id *)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

