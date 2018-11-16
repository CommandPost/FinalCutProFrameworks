//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFModalToolDelegate.h>

#import "FFColorSelectionOSCDelegate.h"
#import "FFRollbackRecordProtocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _FaceColorSelectionToolDelegate : FFModalToolDelegate <FFColorSelectionOSCDelegate, FFRollbackRecordProtocol>
{
    CDUnknownBlockType _objectPerformBlock;
    NSArray *_activeEffects;
}

+ (id)sharedDelegate;
- (void)channelParameterChanged:(id)arg1;
- (id)extendedDataToRecordForAnchoredObject:(id)arg1;
- (void)setExtendedData:(id)arg1 toRecordForAnchoredObject:(id)arg2;
- (id)actionStringForSaveChanges;
- (id)channelFolderToRecordForAnchoredObject:(id)arg1;
- (id)effectToRecordForAnchoredObject:(id)arg1;
- (id)effectStackToRecordForAnchoredObject:(id)arg1;
- (void)colorSelectionOSC:(id)arg1 willModifyAdjustmentsForToolClass:(Class)arg2;
- (void)didInsertIntrinsicEffect:(id)arg1 toEffectStack:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)selectedItemsVideoEffectStackChanged;
- (CDUnknownBlockType)objectPerformBlock;
- (id)effectForObject:(id)arg1;
- (void)willResignModalTool:(id)arg1;
- (void)toggleActiveEffectsEnabledState;
- (void)setActiveEffects:(id)arg1;
- (void)_resyncToolControls;
- (void)selectedItemsChanged:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

