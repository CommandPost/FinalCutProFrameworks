//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSliderTouchBarItem;

@interface OZDFRSliderController : NSObject
{
    BOOL _isRegisteredForContinuousTracking;
    unsigned long long _decimalDigits;
    double _decimalFactor;
    BOOL _isSliding;
    double _doubleValue;
    NSSliderTouchBarItem *_sliderBarItem;
    id <OZDFRSliderControllerDelegate> _delegate;
}

+ (id)sliderControllerWithSliderBarItem:(id)arg1 delegate:(id)arg2 decimalDigits:(unsigned long long)arg3;
@property(nonatomic) BOOL isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) id <OZDFRSliderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSSliderTouchBarItem *sliderBarItem; // @synthesize sliderBarItem=_sliderBarItem;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
- (void)updateDelegateIsStarting:(BOOL)arg1 isDone:(BOOL)arg2;
- (void)onSliderAccessory:(id)arg1;
- (void)onSliderBarItem:(id)arg1;
- (void)onDidCancelContinuousTrackingNotification:(id)arg1;
- (void)onDidEndContinuousTrackingNotification:(id)arg1;
- (void)onWillBeginContinuousTrackingNotification:(id)arg1;
- (void)removeContinuousTrackingObservers;
- (void)addContinuousTrackingObservers;
- (id)init;
- (id)initWithSliderBarItem:(id)arg1 delegate:(id)arg2 decimalDigits:(unsigned long long)arg3;
- (void)dealloc;

@end

