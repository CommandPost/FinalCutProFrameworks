//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFPooledTexture : NSObject
{
    struct FFPooledTextureImpl *_impl;
}

- (unsigned int)name;
- (void)dealloc;
- (id)initWithContext:(struct _CGLContextObject *)arg1 target:(unsigned int)arg2 width:(int)arg3 height:(int)arg4 internalFormat:(int)arg5;

@end

