//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFHGTextureHolder : NSObject
{
    struct HGGLTexture *_text;
    struct HGRenderQueue *_queue;
}

- (void)dealloc;
- (id)initWithHGGLTexture:(struct HGGLTexture *)arg1 queue:(id)arg2;
- (id)initWithHGGLTexture:(struct HGGLTexture *)arg1 HGQueue:(struct HGRenderQueue *)arg2;

@end

