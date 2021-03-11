//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface LKCoachTipManager : NSObject
{
    NSArray *_states;
    NSMutableArray *_currentSetStack;
    id _delegate;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)toggleCoachTips:(id)arg1;
- (BOOL)coachTipsAreOpen;
- (void)_showCoachTips:(id)arg1;
- (void)_hideCoachTips;
- (void)updateCoachTips;
- (id)_inferredCoachTipSet:(BOOL)arg1;
- (void)_handleCoachTipRelatedNotification:(id)arg1;
- (void)_stopObservingActivityAffectingCoachTips;
- (void)_startObservingActivityAffectingCoachTipsForWindow:(id)arg1;
- (void)_setCurrentCoachTipSet:(id)arg1;
- (id)_currentCoachTipSet;
- (void)configureStatesWithLayout:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_initSingleton;

@end

