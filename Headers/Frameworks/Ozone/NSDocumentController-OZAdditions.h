//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocumentController.h"

@interface NSDocumentController (OZAdditions)
- (void)generateTemplatePreviewsInDirectory:(id)arg1 withSaveOptions:(int)arg2;
- (void)restoreDocumentFromAutosave:(id)arg1 setDocFileURL:(id)arg2 setDocType:(int)arg3;
- (void)updateAutosaveVault;
- (void)releaseResourcesOfDocuments;
- (void)savePathsOfOpenDocuments;
- (void)openPreviouslyOpenDocuments;
@end

