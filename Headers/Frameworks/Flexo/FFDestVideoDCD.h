//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideoGL.h>

#import "FFDestVideoDeviceManaging.h"

@class FFFullScreenGLView, NSString;

__attribute__((visibility("hidden")))
@interface FFDestVideoDCD : FFDestVideoGL <FFDestVideoDeviceManaging>
{
    NSString *_deviceUID;
    FFFullScreenGLView *_dcdView;
    BOOL _disableOnRelease;
}

@property BOOL disableOnRelease; // @synthesize disableOnRelease=_disableOnRelease;
- (void)_drawImages:(id)arg1 forRate:(double)arg2 clockTime:(CDStruct_1b6d18a9)arg3 isStaleFrame:(BOOL)arg4 qSize:(float)arg5;
- (int)_displayTimerCallback:(const CDStruct_e50ab651 *)arg1 outTime:(const CDStruct_e50ab651 *)arg2;
- (id)newOnScreenControlsTextureForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 drawProperties:(id)arg3 isDisplaying:(BOOL)arg4;
- (id)newDrawPropertiesForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (unsigned int)outputMaxLatencyInFrames;
- (BOOL)wantsDithering:(id)arg1;
- (id)supportedPixelFormats;
- (struct CGColorSpace *)colorSpace;
- (void)updateOutputDevice:(id)arg1;
- (void)disableVideoOutOnRelease;
- (id)deviceUID;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)releaseView;
- (void)dealloc;
- (id)initWithDeviceUID:(id)arg1;

@end

