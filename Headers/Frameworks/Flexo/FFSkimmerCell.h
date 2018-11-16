//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class CALayer, FFContext, FFPlayerModule, FFThumbnailRequest, NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject>;

__attribute__((visibility("hidden")))
@interface FFSkimmerCell : NSCell
{
    struct NSObject *_skimmable;
    struct CGPoint _mousePt;
    struct CGRect _cellFrameRect;
    struct CGRect _thumbnailTargetRect;
    struct CGRect _controlViewBoundsRect;
    BOOL _skimming;
    CALayer *_playheadLayer;
    long long _duration;
    long long _playheadTime;
    FFPlayerModule *_skimmingPlayer;
    FFContext *_skimmingContext;
    CDStruct_1b6d18a9 _mediaStart;
    CDStruct_1b6d18a9 _mediaSampleDuration;
    BOOL _hideThumbImage;
    float _bevelRadius;
    FFThumbnailRequest *_imageRequest;
}

- (void)_setupThumbImage:(struct CGImage *)arg1;
- (void)rangeInvalidated:(id)arg1;
- (void)rangeInvalidatedImmediate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setObjectValue:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)thumbImageReadyOnMainThread:(id)arg1;
- (void)thumbImageReady:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSkimmingLayerAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)delayedStartSkimmingAt:(id)arg1;
- (BOOL)startSkimmingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)continueSkimming:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (void)stopSkimming:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (void)setBevelRadius:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject> *skimmable; // @synthesize skimmable=_skimmable;
@property(readonly, nonatomic) long long playheadTime; // @synthesize playheadTime=_playheadTime;
@property(nonatomic) CDStruct_1b6d18a9 mediaStart; // @synthesize mediaStart=_mediaStart;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL hideThumbImage; // @synthesize hideThumbImage=_hideThumbImage;

@end
