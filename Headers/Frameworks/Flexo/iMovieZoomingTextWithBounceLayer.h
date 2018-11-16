//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/iMovieScalableTextLayer.h>

#import "iMovieMicaPlugin.h"

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface iMovieZoomingTextWithBounceLayer : iMovieScalableTextLayer <iMovieMicaPlugin>
{
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)timeStretchableBeginTimeProperties;
+ (id)micaPluginProperties;
- (void)addAnimations;

// Remaining properties
@property double zoomBalance; // @dynamic zoomBalance;
@property double zoomBeginTime; // @dynamic zoomBeginTime;
@property double zoomDelayBetween; // @dynamic zoomDelayBetween;
@property double zoomDuration; // @dynamic zoomDuration;
@property double zoomEnd1; // @dynamic zoomEnd1;
@property double zoomEnd2; // @dynamic zoomEnd2;
@property double zoomOverlap; // @dynamic zoomOverlap;
@property double zoomStart1; // @dynamic zoomStart1;
@property(retain) CAMediaTimingFunction *zoomTimingFunction1; // @dynamic zoomTimingFunction1;
@property(retain) CAMediaTimingFunction *zoomTimingFunction2; // @dynamic zoomTimingFunction2;

@end

