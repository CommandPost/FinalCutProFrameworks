//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/iMovieScalableTextLayer.h>

#import <Flexo/iMovieMicaPlugin-Protocol.h>

@class CAMediaTimingFunction, MicaAnimator;

__attribute__((visibility("hidden")))
@interface iMovieElegantFadeTextLayer : iMovieScalableTextLayer <iMovieMicaPlugin>
{
    MicaAnimator *_micaAnimatorTemplate;
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)timeStretchableBeginTimeProperties;
+ (id)micaPluginProperties;
- (void).cxx_destruct;
@property(retain, nonatomic) MicaAnimator *micaAnimatorTemplate; // @synthesize micaAnimatorTemplate=_micaAnimatorTemplate;
- (void)addAnimations;
- (void)customizeSublayers;

// Remaining properties
@property double animationBeginTime; // @dynamic animationBeginTime;
@property double animationDuration; // @dynamic animationDuration;
@property double blurEnd; // @dynamic blurEnd;
@property double blurSpeed; // @dynamic blurSpeed;
@property double blurStart; // @dynamic blurStart;
@property(retain) CAMediaTimingFunction *blurTimingFunction; // @dynamic blurTimingFunction;
@property double opacityEnd; // @dynamic opacityEnd;
@property double opacitySpeed; // @dynamic opacitySpeed;
@property double opacityStart; // @dynamic opacityStart;
@property(retain) CAMediaTimingFunction *opacityTimingFunction; // @dynamic opacityTimingFunction;
@property double zoomMaximumStart; // @dynamic zoomMaximumStart;
@property double zoomMinimumStart; // @dynamic zoomMinimumStart;
@property unsigned int zoomRandomSeed; // @dynamic zoomRandomSeed;
@property double zoomSpeed; // @dynamic zoomSpeed;
@property(retain) CAMediaTimingFunction *zoomTimingFunction; // @dynamic zoomTimingFunction;

@end

