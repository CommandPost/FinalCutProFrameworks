//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFModalToolDelegate.h"

@class FFRollbackRecord, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFModalToolDelegate : NSObject <FFModalToolDelegate>
{
    FFRollbackRecord *_records;
    NSArray *_selectedItems;
    Class _modalToolClass;
    BOOL _hasPendingChanges;
}

@property(readonly, nonatomic) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
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
- (void)selectedItemsChanged:(id)arg1;
- (void)cancelledSelection;
- (void)completedSelection;
- (void)dealloc;
- (void)_unregisterEffectStackObservers;
- (void)_registerVideoEffectStackObserversAndIntermediateEffects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

