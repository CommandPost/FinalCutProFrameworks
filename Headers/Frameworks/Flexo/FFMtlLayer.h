//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

@class FFPlayerView;

__attribute__((visibility("hidden")))
@interface FFMtlLayer : CAMetalLayer
{
    BOOL _contextChanged;
    FFPlayerView *_playerView;
}

+ (BOOL)shouldRenderOnBackgroundThread;
- (void)setPlayerView:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (CDStruct_1b6d18a9)_calcDrawDelay:(double)arg1;
- (void)dealloc;

@end

