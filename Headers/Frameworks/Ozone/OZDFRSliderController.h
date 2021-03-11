//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSliderTouchBarItem;
@protocol OZDFRSliderControllerDelegate;

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

