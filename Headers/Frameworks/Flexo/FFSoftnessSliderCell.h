//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSliderCell.h"

@class CHChannelDouble, FFAnchoredObject, FFChannelChangeController, FFColorSecondaryEffect, FFHeColorEffect;

__attribute__((visibility("hidden")))
@interface FFSoftnessSliderCell : LKSliderCell
{
    FFHeColorEffect *_colorEffect;
    FFAnchoredObject *_anchoredObject;
    FFColorSecondaryEffect *_colorSecondaryEffect;
    FFChannelChangeController *_changeController;
    CHChannelDouble *_softnessChannel;
    CDStruct_122fea49 _state;
}

@property(nonatomic) FFColorSecondaryEffect *colorSecondaryEffect; // @synthesize colorSecondaryEffect=_colorSecondaryEffect;
@property(nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObject;
@property(nonatomic) FFHeColorEffect *colorEffect; // @synthesize colorEffect=_colorEffect;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

