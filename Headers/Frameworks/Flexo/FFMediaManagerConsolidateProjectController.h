//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaManagerController.h>

@class NSButton, NSMatrix, NSMutableArray, NSString, NSTextField, NSURL;

@interface FFMediaManagerConsolidateProjectController : FFMediaManagerController
{
    NSTextField *_destProjectNameTextField;
    NSTextField *_referencedEventsTextField;
    NSMatrix *_consolidateTypeMatrix;
    NSButton *_includeRenderFilesCheckBox;
    NSMutableArray *_referencedEvents;
    NSMutableArray *_referencedAssets;
    NSURL *_hideFileURL;
    NSString *_destProjectName;
}

+ (void)showMediaManagerConsolidateProjectSheetForOrganizerModule:(id)arg1 organizerSelectionState:(unsigned int)arg2 organizerSelectedBrowser:(unsigned int)arg3 project:(id)arg4;
+ (void)showMediaManagerDuplicateProjectSheetForOrganizerModule:(id)arg1 organizerSelectionState:(unsigned int)arg2 organizerSelectedBrowser:(unsigned int)arg3 destinationLocation:(id)arg4 destinationProjectFolderURL:(id)arg5 project:(id)arg6;
+ (void)showMediaManagerMoveProjectSheetForOrganizerModule:(id)arg1 organizerSelectionState:(unsigned int)arg2 organizerSelectedBrowser:(unsigned int)arg3 destinationLocation:(id)arg4 destinationProjectFolderURL:(id)arg5 project:(id)arg6;
- (void)awakeFromNib;
- (id)initWithWindowNibName:(id)arg1;
- (void)dealloc;
- (void)finishMMOperation;
- (void)setConsolidateType:(id)arg1;
- (void)copyClipObjects:(id)arg1;
- (id)filesAndClipsReferencedByProjectWithOptions:(id)arg1;
- (void)updateAssetRefsInAllProjectsForMovedEvent:(id)arg1;
- (void)updateAssetRefsAfterCopyingEventsInProject:(id)arg1 eventDict:(id)arg2;
- (void)updateMediaRefsInProject:(id)arg1 destEvent:(id)arg2;
- (void)OK:(id)arg1;
- (void)showMediaManagerConsolidateProjectSheetForOrganizerModule:(id)arg1 organizerSelectionState:(unsigned int)arg2 organizerSelectedBrowser:(unsigned int)arg3 destinationLocation:(id)arg4 destinationProjectFolderURL:(id)arg5 project:(id)arg6;
@property(copy, nonatomic) NSString *destProjectName; // @synthesize destProjectName=_destProjectName;

@end

