//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDPRenderController;

__attribute__((visibility("hidden")))
@interface FFHitTestContextObject : NSObject
{
    struct _CGLContextObject *_hitTestContext;
    unsigned int _hitTestFBO;
    unsigned int _hitTestTexture;
    struct FxDevice *_currentGPUImageLocationForHitTest;
    struct CGSize _currentSizeForHitTest;
    struct HGRef<HGMetalTexture> _hitTestMtlTexture;
    float _hitTestBackingScale;
    MDPRenderController *_hitTestMDPRenderController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (pair_2a2d2e3d)hitTestContext:(struct CGSize)arg1 imageLocation:(const struct FxDevice *)arg2 backingScale:(float)arg3;
- (void)updateInternalHitTestContext:(struct CGSize)arg1 imageLocation:(const struct FxDevice *)arg2 backingScale:(float)arg3;
- (void)setUpContextWithSize:(struct _CGLContextObject *)arg1 viewSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

@end

