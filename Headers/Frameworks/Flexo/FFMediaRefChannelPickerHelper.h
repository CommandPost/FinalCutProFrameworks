//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFMatchToolDelegate-Protocol.h>

@class NSString;

@interface FFMediaRefChannelPickerHelper : NSObject <FFMatchToolDelegate>
{
}

+ (void)setCurrentPickChannel:(id)arg1;
+ (id)currentPickChannel;
- (BOOL)allowsReferenceChangeFromOrganizerListView;
- (id)okButtonTitle;
- (id)accessoryTitle;
- (id)footerText;
- (id)actionStringForSaveChanges;
- (id)effectContainerToRecordForAnchoredObject:(id)arg1;
- (id)channelFolderToRecordForAnchoredObject:(id)arg1;
- (id)effectToRecordForAnchoredObject:(id)arg1;
- (id)effectStackToRecordForAnchoredObject:(id)arg1;
- (void)pickAnchoredObject:(id)arg1 atOffset:(CDStruct_1b6d18a9)arg2;
- (BOOL)referenceChanged:(id)arg1 reference:(id)arg2;
- (void)matchToolWasResigned:(id)arg1;
- (void)matchToolWasAssigned:(id)arg1;
- (void)completeOnSelectionOnMatchTool:(id)arg1;
- (void)cancelOnSelectionOnMatchTool:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

