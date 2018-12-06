//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamOptions.h>

@class FFStreamVideoCache, FFVideoProps;

@interface FFStreamVideoOptions : FFStreamOptions
{
    FFVideoProps *_videoProps;
    FFStreamVideoCache *_streamCache;
    int _layerIndex;
}

- (id)initWithVideoProps:(id)arg1 streamCache:(id)arg2;
- (void)dealloc;
- (id)videoProps;
- (id)streamCache;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStreamVideoOptions:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) int layerIndex; // @synthesize layerIndex=_layerIndex;

@end

