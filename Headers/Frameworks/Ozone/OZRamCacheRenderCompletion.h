//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OZRamCacheManager;

@interface OZRamCacheRenderCompletion : NSObject
{
    OZRamCacheManager *_ramCacheManager;
    shared_ptr_211f3873 *_image;
    CDStruct_1b6d18a9 _time;
    unsigned int _renderTime;
}

- (id)init;
- (void)dealloc;
- (shared_ptr_211f3873)image;
- (void)setImage:(shared_ptr_211f3873)arg1;
@property unsigned int renderTime; // @synthesize renderTime=_renderTime;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(retain) OZRamCacheManager *ramCacheManager; // @synthesize ramCacheManager=_ramCacheManager;

@end

