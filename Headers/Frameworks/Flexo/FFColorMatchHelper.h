//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFMatchToolDelegate-Protocol.h>

@class FFHistoAnalysis, FFMatchReference, FFRollbackRecord_v2, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFColorMatchHelper : NSObject <FFMatchToolDelegate>
{
    FFHistoAnalysis *_histoRef;
    NSArray *_selectedItems;
    FFRollbackRecord_v2 *_rollbackRecord;
    FFMatchReference *_referenceObj;
    NSMutableArray *_visibleSelectedItems;
    CDStruct_1b6d18a9 _contextTime;
    NSArray *_activeEffects;
    Class _modalToolClass;
}

+ (BOOL)isObjectCompliant:(id)arg1;
+ (BOOL)colorMatchHueAdjustmentWithHistoAnalysis:(id)arg1 colorMatchInfo:(id)arg2 adjustment:(vector_37556099 *)arg3 colorMatchResult:(struct FFRefColorMatchInfo *)arg4 error:(id *)arg5;
- (void)channelParameterChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)accessoryTitle;
- (id)footerText;
- (id)copyCompliantObjectsFromSelection:(id)arg1;
- (BOOL)applyMatchToOnAnchoredObject:(id)arg1;
- (vector_37556099)_colorMatchHueAdjustmentWithRef:(id)arg1 forDest:(id)arg2 refInfoColorMatchStruct:(struct FFRefColorMatchInfo *)arg3;
- (CDStruct_1b6d18a9)contextTime;
- (void)setSelectedItems:(id)arg1 withContextTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)referenceChanged:(id)arg1 reference:(id)arg2;
- (void)matchToolWasResigned:(id)arg1;
- (void)matchToolWasAssigned:(id)arg1;
- (void)completeOnSelectionOnMatchTool:(id)arg1;
- (void)cancelOnSelectionOnMatchTool:(id)arg1;
- (void)setActiveEffects:(id)arg1;
- (void)_resyncToolControls;
- (id)histoRef;
- (void)dealloc;
- (id)init;
- (void)toggleActiveEffectsEnabledState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

