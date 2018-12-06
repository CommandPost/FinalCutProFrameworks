//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFXMLArchiver.h>

#import "FFCoderVersioning.h"

@class FFMediaEventProject, FFSequenceProject, FFXMLRootElement, NSMapTable, NSURL;

@interface FFXMLDecoder : FFXMLArchiver <FFCoderVersioning>
{
    NSURL *_fileURL;
    FFXMLRootElement *_rootElement;
    FFSequenceProject *_sequence;
    FFMediaEventProject *_event;
    id _targetProject;
    NSMapTable *_objects;
    BOOL _sequenceCase;
    int _assetUseage;
    BOOL _includeMedia;
    BOOL _includeMarkers;
    BOOL _includeEffects;
    BOOL _shouldOverrideFileOrganizationWithGlobal;
    BOOL _canModProject;
    BOOL _exportAfterImport;
    BOOL _exportJustBeforeImport;
    BOOL _shouldCopyMedia;
}

- (void)reportVersioningError:(id)arg1 forKey:(id)arg2;
- (int)fileVersion:(int *)arg1;
- (BOOL)allowsKeyedCoding;
- (void)dealloc;
- (id)init;
- (BOOL)shouldImportEffects;
- (BOOL)shouldImportMarkers;
- (BOOL)shouldImportMedia;
- (BOOL)shouldOverrideFileOrganizationWithGlobal;
- (void)setFileOrganizationWithEvent:(id)arg1;
- (void)runSaveDialogForExportJustBeforImport;
- (id)initDecoderWithXML:(id)arg1 options:(id)arg2 targetSequence:(id)arg3 event:(id)arg4;
- (unsigned int)systemVersion;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)validateHandlerClassDescription:(id)arg1 properties:(id)arg2 againstElt:(id)arg3;
- (Class)chooseHandler:(Class)arg1 numProperties:(int *)arg2 handler2:(Class)arg3 numProperties2:(int)arg4 forKey:(id)arg5;
- (id)curHandlerForKey:(id)arg1 withXMLElement:(id)arg2;
- (id)findDefinitionForXMLKey:(id)arg1 andID:(id)arg2;
- (id)objForIdentifier:(id)arg1;
- (id)decodeSet;
- (id)decodeArray;
- (id)decodeDictionary;
- (BOOL)isProjectCase:(id)arg1;
- (id)handleProjectCase:(id)arg1;
- (id)handlePreviousDefinitionsOf:(id)arg1 withHandler:(Class)arg2 shouldImport:(char *)arg3 shouldMakeNewID:(char *)arg4 oldObject:(id *)arg5;
- (id)decodeOne:(id)arg1;
- (id)decodeFigTime;
- (id)decodeFigTimeRange;
- (id)decodeFigTimePair;
- (id)decodeFigTimeRangeAndObj;
- (id)decodePCMatrix44Double;
- (id)decodeNSColor;
- (id)decodeNSDate;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)decodeExternalObjectForKey:(id)arg1;
- (id)targetProject;
- (id)eventProject;
- (BOOL)canModProject;
- (void)setCanModProject:(BOOL)arg1;
- (id)readObjects;
- (BOOL)shouldCopyMedia;

@end

