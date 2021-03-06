//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFLibrary, NSArray, NSError, NSMapTable, NSPasteboard, NSRunningApplication, NSSet, NSURL, NSXMLDocument;
@protocol FFXMLTranslationExportProtocol;

@interface FFXMLTranslationTask : NSObject
{
    NSObject<FFXMLTranslationExportProtocol> *_exporter;
    NSPasteboard *_pasteboard;
    NSXMLDocument *_document;
    NSURL *_fileURL;
    NSRunningApplication *_origin;
    unsigned long long _version;
    int _contentType;
    NSArray *_warnings;
    NSError *_error;
    NSMapTable *_importResults;
    unsigned long long _contentVersion;
}

+ (id)translationTaskForFile:(id)arg1 origin:(id)arg2;
+ (id)translationTaskForPasteboard:(id)arg1;
+ (id)translationTaskForClips:(id)arg1;
+ (id)translationTaskForEvents:(id)arg1;
+ (id)translationTaskForLibrary:(id)arg1;
@property unsigned long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property int contentType; // @synthesize contentType=_contentType;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, retain, nonatomic) NSArray *warnings; // @synthesize warnings=_warnings;
- (id)newXMLDocumentWithOptions:(id)arg1;
- (BOOL)exportToFile:(id)arg1 withOptions:(id)arg2;
- (BOOL)exportToPasteboardItem:(id)arg1 withOptions:(id)arg2;
- (BOOL)exportToPasteboard:(id)arg1 withOptions:(id)arg2;
- (BOOL)exportToUserSelectedFile;
- (id)configuredSavePanel;
- (id)newPasteboardItem;
@property(readonly) NSSet *allImportedClipsAndRanges;
- (id)clipsAndRangesImportedInEvent:(id)arg1;
@property(readonly) NSArray *importedEvents;
- (BOOL)importClipsWithOptions:(id)arg1 taskDelegate:(id)arg2;
- (BOOL)importClipsWithOptions:(id)arg1;
- (id)importWithOptions:(id)arg1;
- (void)setWarnings:(id)arg1;
- (void)setError:(id)arg1;
- (void)reportImportErrorOrWarnings:(BOOL)arg1;
- (void)dealloc;
- (id)initForFile:(id)arg1 origin:(id)arg2;
- (id)initForPasteboard:(id)arg1;
- (id)initForClips:(id)arg1;
- (id)initForEvents:(id)arg1;
- (id)initForLibrary:(id)arg1;
@property(readonly, retain, nonatomic) FFLibrary *library;

@end

