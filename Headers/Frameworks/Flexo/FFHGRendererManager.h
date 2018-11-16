//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSDictionary, NSMutableArray;

@interface FFHGRendererManager : NSObject
{
    NSMutableArray *_rendererInfos;
    NSCondition *_cond;
    BOOL _doLinear;
    NSDictionary *_imageLocToRendererDescription;
}

+ (void)initialize;
+ (void)initOnMainThread:(id)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (int)getPrimaryGPUImageLocation;
+ (id)sharedManager;
- (unsigned long long)getMaximumVRAMOfAttachedGPUs;
- (unsigned long long)getVRAMOfGPU:(unsigned int)arg1;
- (const char *)getVendorNameOfGPU:(unsigned int)arg1;
- (_Bool)hasOnlyIntegratedGPUs;
- (_Bool)hasGPUPreventingMotionCompensatedDeinterlacing;
- (_Bool)hasGPUPreventingMGPU;
- (_Bool)hasExternalGPU;
- (_Bool)hasIntegratedGPU;
- (_Bool)hasMultipleMatchedGPUs;
- (int)getGPUCount;
- (void)_countGPUs;
- (_Bool)canFitTextureWithBounds:(struct CGRect)arg1;
- (_Bool)threadAccessedRenderQueueRenderer;
- (void)setRenderQueueRendererForCurrentThread:(struct HGRenderer *)arg1 bindingInfo:(id)arg2;
- (struct HGRenderer *)renderQueueRendererForCurrentThread;
- (struct HGRenderer *)renderQueueRendererForCurrentThreadWithRetBindingInfo:(id *)arg1;
- (_Bool)isManagedRenderer:(struct HGRenderer *)arg1;
- (BOOL)processLinear;
- (_Bool)threadHoldsImmediateModeRenderer;
- (void)releaseRenderer:(id)arg1;
- (id)getRendererIfAvailable:(struct HGRenderer *)arg1;
- (id)rendererForLocation:(int)arg1;
- (int)getFFImageLocationForMtlDevice:(id)arg1;
- (int)resolveIfSingleImageLocation:(int)arg1;
- (void)dealloc;
- (id)rendererDescriptionForVScreen:(int)arg1;
- (void)_ensureRenderersSetup;
- (void)_setupRenderers;
- (id)init;

@end

