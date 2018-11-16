//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFFileImportProcessingFilesDialogController, FFFileImportRejectedDialogController, FFFileImportValidateFilesDialogController, FFMediaEventProject, NSArray, NSDictionary, NSMutableArray, NSSet, NSThread;

@interface FFFileImporter : NSObject
{
    NSArray *_importURLs;
    NSDictionary *_importURLsInfo;
    NSMutableArray *_acceptedURLs;
    NSMutableArray *_acceptedKeywordSets;
    NSSet *_initialEventKeywordNames;
    FFMediaEventProject *_initialEvent;
    NSMutableArray *_rejectedURLs;
    FFFileImportValidateFilesDialogController *_validateFilesController;
    FFFileImportProcessingFilesDialogController *_processingFilesController;
    FFFileImportRejectedDialogController *_rejectedDialogController;
    NSThread *_validationThread;
}

+ (BOOL)suppressWarnings;
+ (void)setSuppressWarnings:(BOOL)arg1;
@property(retain) FFFileImportRejectedDialogController *rejectedDialogController; // @synthesize rejectedDialogController=_rejectedDialogController;
- (void)rejectedSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelValidation;
- (BOOL)validateURLs:(id)arg1 withURLsInfo:(id)arg2 forImportToLocation:(id)arg3 showWarnings:(BOOL)arg4 window:(id)arg5 copyFiles:(BOOL)arg6 acceptedURLs:(id *)arg7 options:(id)arg8;
- (void)preflightFilesBackgroundThread:(id)arg1;
- (void)scanURLForFiles:(id)arg1 fileURLs:(id)arg2 keywordSets:(id)arg3 keywords:(id)arg4 rejectedURLs:(id)arg5;
- (id)importToEvent:(id)arg1 manageFileType:(int)arg2 processNow:(BOOL)arg3 warnClipsAlreadyExist:(BOOL)arg4 error:(id *)arg5;
- (void)setInitialEvent:(id)arg1 keywordNames:(id)arg2;
- (void)dealloc;
- (id)init;

@end

