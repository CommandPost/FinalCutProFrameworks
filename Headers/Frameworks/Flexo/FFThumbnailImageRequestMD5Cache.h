//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFThumbnailImageRequestMD5Cache : NSObject
{
    struct vector<unnamed::MD5CacheEntry, std::allocator<unnamed::MD5CacheEntry>> *_video;
    struct vector<unnamed::MD5CacheEntry, std::allocator<unnamed::MD5CacheEntry>> *_audio;
}

- (id)init;
- (void)dealloc;

@end

