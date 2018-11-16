//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBControllerDataSource.h"
#import "CBPuckControllerDataSource.h"
#import "FFControllerProtocol.h"

@class CHChannelBase, CHChannelFolder, FFAnchoredObject, FFChannelChangeController, FFEffect<FFColorBoardableObject>, FFEffectStack, NSArray;

__attribute__((visibility("hidden")))
@interface FFCBDataSource : NSObject <CBControllerDataSource, CBPuckControllerDataSource, FFControllerProtocol>
{
    BOOL _isCurrentCorrectionInner;
    BOOL _transactionStarted;
    long long _currentCorrectionID;
    FFAnchoredObject *_currentAnchoredObject;
    FFChannelChangeController *_channelChangeController;
    CHChannelFolder *_puckFolder;
    FFEffect<FFColorBoardableObject> *_currentEffect;
    FFEffectStack *_observedStack;
    CHChannelBase *_modifiedChannel;
    BOOL _ignoreObservedStackChanges;
    NSArray *_effectsChangedObservers;
}

+ (void)puckType:(int *)arg1 boardType:(int *)arg2 fromChannelID:(int)arg3;
+ (int)channelIDFromPuckType:(int)arg1 boardType:(int)arg2;
+ (void)releaseSharedDataSource;
+ (id)createSharedDataSource;
+ (id)sharedDataSource;
+ (BOOL)hasSharedDataSource;
@property(retain, nonatomic) FFEffectStack *observedStack; // @synthesize observedStack=_observedStack;
@property(retain, nonatomic) FFEffect<FFColorBoardableObject> *currentEffect; // @synthesize currentEffect=_currentEffect;
@property(retain, nonatomic) CHChannelFolder *puckFolder; // @synthesize puckFolder=_puckFolder;
@property(retain, nonatomic) FFChannelChangeController *channelChangeController; // @synthesize channelChangeController=_channelChangeController;
@property(nonatomic) long long currentCorrectionID; // @synthesize currentCorrectionID=_currentCorrectionID;
@property(nonatomic) BOOL transactionStarted; // @synthesize transactionStarted=_transactionStarted;
- (void)_updateInspectorSelectionForCurrentAnchoredObject;
- (void)createPresetForName:(id)arg1;
- (BOOL)presetNameExists:(id)arg1;
- (id)presetNameAtIndex:(long long)arg1;
- (void)usePresetAtIndex:(long long)arg1;
- (long long)numberOfPresets;
- (void)updatePresets;
- (void)_effectStackChanged:(id)arg1;
- (void)_effectSelectedStateChanged:(id)arg1;
- (void)_angleChanged:(id)arg1;
- (void)addEffectToCurrentAnchoredObject;
- (void)_uiEnd:(id)arg1;
- (void)_uiBegin:(id)arg1;
- (void)cancelUndoTransaction;
- (void)endUndoTransaction;
- (void)beginUndoTransactionWithPuckController:(id)arg1;
- (void)beginUndoTransaction;
- (id)defaultDataForPuckType:(int)arg1 boardType:(int)arg2;
- (id)dataForPuckType:(int)arg1 boardType:(int)arg2;
- (void)resetPuckData:(id)arg1;
- (void)setData:(id)arg1 forPuckType:(int)arg2 boardType:(int)arg3;
- (long long)addCorrection;
- (BOOL)hasCurrentCorrection;
- (BOOL)isMaskedForCorrectionID:(long long)arg1;
- (BOOL)isEnabledForCorrectionID:(long long)arg1;
- (void)setEnabled:(BOOL)arg1 forCorrectionID:(long long)arg2;
@property(getter=isCurrentCorrectionInner) BOOL currentCorrectionInner; // @dynamic currentCorrectionInner;
- (unsigned long long)correctionCount;
- (id)nameForCorrectionID:(long long)arg1;
- (id)arrayOfCorrectionNames;
- (id)arrayOfCorrectionIDs;
- (id)dataForPuck:(id)arg1;
- (void)setData:(id)arg1 forPuck:(id)arg2;
- (id)getPuckData:(id)arg1;
- (id)currentAnchoredObjectForController:(id)arg1;
- (void)controller:(id)arg1 switchToDataForCorrection:(id)arg2;
- (void)_validateAndSetPuckFolderForBoardableEffect:(id)arg1 createIfAbsent:(BOOL)arg2;
- (void)controller:(id)arg1 switchToDataForDefaultCorrectionForAnchoredObject:(id)arg2;
- (void)controller:(id)arg1 switchToDataForAnchoredObject:(id)arg2;
- (id)boardableEffects;
- (void)setColorBoardHidden:(BOOL)arg1;
- (void)dealloc;
- (void)_unregisterBoardableEffectsObservers;
- (void)_registerBoardableEffectsObservers;
- (id)init;
@property(retain, nonatomic) FFAnchoredObject *currentAnchoredObject; // @dynamic currentAnchoredObject;

@end

