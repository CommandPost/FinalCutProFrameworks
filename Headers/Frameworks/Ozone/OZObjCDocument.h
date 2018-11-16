//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "OZDocumentOwner.h"

@class NSDate, NSMutableArray, NSString, NSTimer, OZConvertProjectToEffectController, OZConvertProjectToTitleController, OZConvertProjectToTransitionController, OZDocumentKeyResponder, OZSaveAsTemplateController, OZTemporaryUndoHandler;

@interface OZObjCDocument : NSDocument <OZDocumentOwner>
{
    struct OZDocument *_document;
    OZTemporaryUndoHandler *_tempUndoHandler;
    BOOL _hasMediaFolder;
    BOOL _isUntouched;
    struct PCURL *_savingToURL;
    NSTimer *_pAutosaveTimer;
    NSDate *_pLastSaveDate;
    NSMutableArray *_pAutosaveHistory;
    NSString *_pAutosaveUntitledName;
    BOOL _isAutosaving;
    BOOL _isProcessing;
    BOOL _touchedSinceLastAutosave;
    BOOL _savePanelRan;
    BOOL _saveTemplateRan;
    unsigned int _saveMethod;
    unsigned int _saveTemplateMethod;
    NSString *_fpath;
    OZDocumentKeyResponder *_documentKeyResponder;
    struct FFPMRSimpleTimer _pmrTimer;
    unsigned long long _numFramesToExport;
    OZSaveAsTemplateController *_saveAsTemplateController;
    OZConvertProjectToEffectController *_convertProjectToEffectController;
    OZConvertProjectToTitleController *_convertProjectToTitleController;
    OZConvertProjectToTransitionController *_convertProjectToTransitionController;
    BOOL _isAppActive;
}

+ (void)checkAutosaveVaultMax;
+ (void)checkAutosaveVaultMaxCopies:(id)arg1;
+ (void)checkAutosaveVaultMaxProjects;
+ (void)deleteMoreThan:(unsigned int)arg1 fromDirectory:(id)arg2 directoriesOnly:(BOOL)arg3;
+ (void)deleteMoreThan:(unsigned int)arg1 withDatedFilePairs:(id)arg2;
+ (id)getDatedContentsOf:(id)arg1 directoriesOnly:(BOOL)arg2;
+ (id)getDateOrderedContentsOf:(id)arg1 directoriesOnly:(BOOL)arg2;
+ (id)createUniqueUntitledName:(id)arg1;
+ (id)autosaveVaultPath;
@property(readonly, nonatomic) OZDocumentKeyResponder *documentKeyResponder; // @synthesize documentKeyResponder=_documentKeyResponder;
- (void)exportWillStart:(unsigned long long)arg1;
- (void)watchProgressFFQTMovieExporter;
- (void)QTProgressFinished:(id)arg1;
- (void)openSelectedInQuickTime:(unsigned int)arg1;
- (void)openSelectedInViewer:(unsigned int)arg1;
- (void)revealSelectedInFinder:(unsigned int)arg1;
- (void)simpleSaveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)stopPlayBack;
- (BOOL)isPlayBack;
- (void)removeObjCOZObserver:(id)arg1;
- (void)addObjCOZObserver:(id)arg1 withPriority:(long long)arg2;
- (void)postOZNotification:(unsigned int)arg1;
- (void)resetLastSaveDate;
- (void)autosaveTimerAction:(id)arg1;
- (void)autosaveIfNeeded:(BOOL)arg1;
- (void)autosave;
- (void)initAutosaveHistory;
- (id)autosaveBaseName;
- (void)autosaveMoveUntitledTo:(id)arg1;
- (id)autosaveBuildName:(id)arg1 extension:(id)arg2 date:(id)arg3;
- (void)autosaveUpdate;
- (void)processInkGestureEvent:(struct _gestureEventContiner *)arg1;
- (shared_ptr_1a5c5a10)renderedImage:(double *)arg1;
- (void)document:(id)arg1 didRunPrintOperation:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)printShowingPrintPanel:(BOOL)arg1;
- (void)setTemplateTheme:(id)arg1;
- (void)setTemplateFormat:(unsigned int)arg1;
- (void)saveTemplateWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)saveAsTemplate:(id)arg1;
- (void)findAndReplacePrevious:(id)arg1;
- (void)findAndReplaceNext:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)depthDistributeNears:(id)arg1;
- (void)depthDistributeCenters:(id)arg1;
- (void)depthDistributeFars:(id)arg1;
- (void)depthJustifyNear:(id)arg1;
- (void)depthJustifyCenter:(id)arg1;
- (void)depthJustifyFar:(id)arg1;
- (void)verticalDistributeTops:(id)arg1;
- (void)verticalDistributeCenters:(id)arg1;
- (void)verticalDistributeBottoms:(id)arg1;
- (void)verticalJustifyTop:(id)arg1;
- (void)verticalJustifyCenter:(id)arg1;
- (void)verticalJustifyBottom:(id)arg1;
- (void)horizontalDistributeRights:(id)arg1;
- (void)horizontalDistributeCenters:(id)arg1;
- (void)horizontalDistributeLefts:(id)arg1;
- (void)horizontalJustifyRight:(id)arg1;
- (void)horizontalJustifyCenter:(id)arg1;
- (void)horizontalJustifyLeft:(id)arg1;
- (BOOL)validateLocalUserInterfaceItem:(id)arg1;
- (BOOL)import:(id)arg1 intoLayer:(struct OZGroup *)arg2 atPoint:(struct CGPoint)arg3 doCenter:(BOOL)arg4 withFlags:(unsigned int)arg5;
- (void)handleUndo:(id)arg1;
- (id)getTemporaryUndoHandler;
- (void)updateChangeCount:(unsigned long long)arg1;
- (BOOL)hasMediaFolder;
- (BOOL)isUntouched;
- (id)localizedDocumentTypeName;
- (struct OZDocument *)getDocument;
- (void)restoreDocumentFromAutosave:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)revertDocumentToSaved:(id)arg1;
- (void)convertProjectCompletedSavedDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)conditionallySaveConvertedDocumentFrom:(id)arg1 previousType:(int)arg2;
- (void)convertProjectTypeWithBlock:(CDUnknownBlockType)arg1;
- (struct OZDocumentTypeUndoParams)convertProjectToTransitionWithNodeIDA:(unsigned int)arg1 nodeIDB:(unsigned int)arg2 createNewA:(BOOL)arg3 createNewB:(BOOL)arg4;
- (struct OZDocumentTypeUndoParams)convertProjectToTitleWithNodeID:(unsigned int)arg1 noTitleSource:(BOOL)arg2 createNewTitleSource:(BOOL)arg3;
- (struct OZDocumentTypeUndoParams)convertProjectToEffectWithNodeID:(unsigned int)arg1 createNewEffectSource:(BOOL)arg2;
- (struct OZDocumentTypeUndoParams)convertProjectToCompositionOrGenerator:(BOOL)arg1;
- (void)convertProjectToTransition:(id)arg1;
- (void)convertProjectToTitle:(id)arg1;
- (void)convertProjectToEffect:(id)arg1;
- (void)convertProjectToGenerator:(id)arg1;
- (void)convertProjectToComposition:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)prepareSavePanel:(id)arg1;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (unsigned int)saveTemplateMethod;
- (unsigned int)saveMethod;
- (BOOL)saveTemplateRan;
- (BOOL)savePanelRan;
- (void)setSaveTemplateRan:(BOOL)arg1 withMethod:(unsigned int)arg2;
- (void)setSavePanelRan:(BOOL)arg1 withMethod:(unsigned int)arg2;
- (void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)alertDidEnd:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(CDUnknownBlockType)arg3;
- (void)saveDocumentAs:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)makeWindowControllers;
- (void)windowDidResignMain:(id)arg1;
- (void)windowBecameMain:(id)arg1;
- (void)appBecameDeActive:(id)arg1;
- (void)appBecameActiveDelayed:(id)arg1;
- (void)appBecameActive:(id)arg1;
- (void)externalChangeAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (void)closeAfterDelay;
- (void)close;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)fileModificationDateOnDisk;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)setIsProcessing:(BOOL)arg1;
- (BOOL)isProcessing;
- (id)initWithOZDocument:(struct OZDocument *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

