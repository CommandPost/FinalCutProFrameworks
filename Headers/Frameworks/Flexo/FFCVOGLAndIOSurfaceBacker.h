//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFCVOGLAndIOSurfaceBacker : NSObject
{
    struct __CVBuffer *_cvTex;
    struct __CVOpenGLTextureCache *_cache;
    struct _CGLContextObject *_ctx;
    struct HGRef<HGCVPixelBuffer> _hgcvpb;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTexCache:(struct __CVOpenGLTextureCache *)arg1 context:(struct _CGLContextObject *)arg2 hgcvpb:(struct HGCVPixelBuffer *)arg3 cvTex:(struct __CVBuffer *)arg4;

@end

