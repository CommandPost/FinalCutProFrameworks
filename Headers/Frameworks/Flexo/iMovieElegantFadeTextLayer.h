//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/iMovieScalableTextLayer.h>

#import "iMovieMicaPlugin.h"

@class CAMediaTimingFunction, MicaAnimator;

__attribute__((visibility("hidden")))
@interface iMovieElegantFadeTextLayer : iMovieScalableTextLayer <iMovieMicaPlugin>
{
    MicaAnimator *_micaAnimatorTemplate;
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)timeStretchableBeginTimeProperties;
+ (id)micaPluginProperties;
@property(retain, nonatomic) MicaAnimator *micaAnimatorTemplate; // @synthesize micaAnimatorTemplate=_micaAnimatorTemplate;
- (void).cxx_destruct;
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

