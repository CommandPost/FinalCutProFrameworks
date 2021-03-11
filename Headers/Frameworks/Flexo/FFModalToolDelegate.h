//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFModalToolDelegate-Protocol.h>

@class FFRollbackRecord, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFModalToolDelegate : NSObject <FFModalToolDelegate>
{
    FFRollbackRecord *_records;
    NSArray *_selectedItems;
    Class _modalToolClass;
    BOOL _hasPendingChanges;
}

- (id)selectedItems;
- (void)modalTool:(id)arg1 selectedItemsChanged:(id)arg2;
- (void)cancelledSelection;
- (void)completedSelection;
- (void)willResignModalTool:(id)arg1;
- (void)didActivateModalTool:(id)arg1;
- (id)modalTool:(id)arg1 handleFilteredEvent:(id)arg2;
- (void)modalTool:(id)arg1 willUndoRedoWithNotification:(id)arg2;
- (void)_audioEffectStackChanged:(id)arg1;
- (void)_videoEffectStackChanged:(id)arg1;
- (void)selectedItemsAudioEffectStackChanged;
- (void)selectedItemsVideoEffectStackChanged;
- (CDUnknownBlockType)objectPerformBlock;
- (id)effectForObject:(id)arg1;
- (void)dealloc;
- (void)_unregisterEffectStackObservers;
- (void)_registerVideoEffectStackObserversAndIntermediateEffects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

