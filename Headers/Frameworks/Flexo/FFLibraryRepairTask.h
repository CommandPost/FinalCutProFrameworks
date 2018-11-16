//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFLibraryDocument, NSMapTable, NSMutableSet;

@interface FFLibraryRepairTask : NSObject
{
    FFLibraryDocument *_document;
    NSMutableSet *_restoredItems;
    NSMutableSet *_rebuiltItems;
    NSMapTable *_damagedItems;
    BOOL _mediaRefsNeedValidation;
}

+ (id)temporaryStoreURL:(id)arg1;
+ (BOOL)commitTemporaryStore:(id)arg1 error:(id *)arg2;
+ (id)prepareTemporaryStore:(id)arg1 identifier:(id)arg2 error:(id *)arg3;
+ (BOOL)replaceStoreURL:(id)arg1 withURL:(id)arg2 error:(id *)arg3;
+ (id)scanForItemRecords:(id)arg1 error:(id *)arg2;
+ (BOOL)checkComponentsForReservedProjectOrEventName:(id)arg1;
+ (id)repair:(id)arg1 error:(id *)arg2;
+ (BOOL)validateOrDeleteDatabase:(id)arg1 error:(id *)arg2;
- (id)newClipAssetsFromDirectory:(id)arg1 manageFileType:(int)arg2 forEvent:(id)arg3 error:(id *)arg4;
- (id)localizedSummary;
- (void)writeHeader:(id)arg1;
- (void)writeDamagedItems:(id)arg1;
- (void)writeRepairedItems:(id)arg1;
- (void)writeItemURLs:(id)arg1 to:(id)arg2;
- (void)write:(id)arg1 level:(unsigned int)arg2 to:(id)arg3;
- (BOOL)rebuildEvent:(id)arg1 map:(id)arg2 error:(id *)arg3;
- (BOOL)rebuildOriginalMedia:(id)arg1 error:(id *)arg2;
- (BOOL)rebuildProject:(id)arg1 map:(id)arg2 error:(id *)arg3;
- (id)restoreItem:(id)arg1 parent:(id)arg2 status:(int *)arg3 error:(id *)arg4;
- (void)restoreMediaReferences:(id)arg1 itemRepairMap:(id)arg2;
- (BOOL)restore:(id *)arg1;
- (void)item:(id)arg1 restored:(int)arg2 error:(id)arg3;
- (void)session:(struct NSObject *)arg1 setRepairProgress:(float)arg2 displayName:(id)arg3;
- (void)session:(struct NSObject *)arg1 setValidationProgress:(float)arg2;
- (id)damagedItems;
- (id)restoredItems;
- (id)rebuiltItems;
- (unsigned long long)errorCount;
- (unsigned long long)repairCount;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

