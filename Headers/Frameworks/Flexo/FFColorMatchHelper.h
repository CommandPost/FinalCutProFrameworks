//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFMatchToolDelegate.h"
#import "FFRollbackRecordProtocol.h"

@class FFHistoAnalysis, FFMatchReference, FFRollbackRecord, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFColorMatchHelper : NSObject <FFMatchToolDelegate, FFRollbackRecordProtocol>
{
    FFRollbackRecord *_records;
    FFMatchReference *_referenceObj;
    FFHistoAnalysis *_histoRef;
    NSMutableArray *_visibleSelectedItems;
    CDStruct_1b6d18a9 _playheadTime;
}

+ (struct CGColorSpace *)processingColorSpace;
+ (id)newPixelBufferFromAnchoredObject:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withEffectCount:(long long)arg3;
+ (BOOL)isObjectCompliant:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)histoRef;
- (void)cancelOnSelectionOnMatchTool:(id)arg1;
- (void)completeOnSelectionOnMatchTool:(id)arg1;
- (void)matchToolWasAssigned:(id)arg1;
- (void)matchToolWasResigned:(id)arg1;
- (BOOL)referenceChanged:(id)arg1 reference:(id)arg2;
- (BOOL)applyMatchToOnAnchoredObject:(id)arg1;
- (id)copyCompliantObjectsFromSelection:(id)arg1;
- (id)effectStackToRecordForAnchoredObject:(id)arg1;
- (id)effectToRecordForAnchoredObject:(id)arg1;
- (id)channelFolderToRecordForAnchoredObject:(id)arg1;
- (id)effectContainerToRecordForAnchoredObject:(id)arg1;
- (id)actionStringForSaveChanges;
- (id)_newColorMatchHueAdjustmentWithRef:(id)arg1 forDest:(id)arg2;
- (id)footerText;
- (id)accessoryTitle;

@end

