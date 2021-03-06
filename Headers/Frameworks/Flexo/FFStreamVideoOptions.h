//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFStreamOptions.h>

@class FFStreamVideoCache, FFVideoProps;

@interface FFStreamVideoOptions : FFStreamOptions
{
    FFVideoProps *_videoProps;
    FFStreamVideoCache *_streamCache;
    int _layerIndex;
    BOOL _streamIsForUIUse;
}

@property(nonatomic) BOOL streamIsForUIUse; // @synthesize streamIsForUIUse=_streamIsForUIUse;
@property(nonatomic) int layerIndex; // @synthesize layerIndex=_layerIndex;
- (unsigned long long)hash;
- (BOOL)isEqualToStreamVideoOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)streamCache;
- (id)videoProps;
- (void)dealloc;
- (id)initWithVideoProps:(id)arg1 streamCache:(id)arg2;

@end

