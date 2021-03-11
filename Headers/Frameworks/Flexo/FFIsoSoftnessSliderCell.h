//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKSliderCell.h>

@class CHChannelDouble, FFAnchoredObject, FFChannelChangeController, FFIsolationMask;

__attribute__((visibility("hidden")))
@interface FFIsoSoftnessSliderCell : LKSliderCell
{
    FFIsolationMask *_isolationMask;
    FFAnchoredObject *_anchoredObject;
    CHChannelDouble *_softnessChannel;
    FFChannelChangeController *_changeController;
    CDStruct_122fea49 _state;
}

@property(nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObject;
@property(nonatomic) FFIsolationMask *isolationMask; // @synthesize isolationMask=_isolationMask;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)init;

@end

