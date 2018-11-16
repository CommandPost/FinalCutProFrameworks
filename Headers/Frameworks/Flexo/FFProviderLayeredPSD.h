//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

@class FFVideoProps, NSRecursiveLock, ProPSDImageRef;

__attribute__((visibility("hidden")))
@interface FFProviderLayeredPSD : FFProvider
{
    ProPSDImageRef *_imageRef;
    FFVideoProps *_nativeVideoProps;
    NSRecursiveLock *_lock;
    struct CGColorSpace *_colorSpace;
    struct _PSDImageInfo _imageInfo;
    unsigned int _layerCount;
    int _layerCounter;
    CDStruct_bdcb2b0d _md5;
}

+ (id)extensions;
+ (id)utis;
@property(readonly) unsigned int layerCount; // @synthesize layerCount=_layerCount;
- (CDStruct_bdcb2b0d)_md5WithContext:(id)arg1;
- (id)nativeVideoProps;
- (CDStruct_1b6d18a9)duration;
- (void)_setupSources;
- (void)_setupLayer:(id)arg1 groupDisabled:(BOOL)arg2;
- (BOOL)_layerIsValid:(id)arg1;
- (id)_newImageAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 downstreamPT:(id)arg3 layer:(id)arg4;
- (void)dealloc;
- (void)setFlat;
- (id)initWithAssetFileID:(id)arg1;

@end

