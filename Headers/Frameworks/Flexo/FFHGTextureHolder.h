//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFHGAsyncQueue;

__attribute__((visibility("hidden")))
@interface FFHGTextureHolder : NSObject
{
    struct HGGLTexture *_text;
    FFHGAsyncQueue *_queue;
}

- (void)dealloc;
- (id)initWithHGGLTexture:(struct HGGLTexture *)arg1 queue:(id)arg2;

@end

