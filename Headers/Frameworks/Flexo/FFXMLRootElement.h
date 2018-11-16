//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSXMLDocument.h"

@class FFXMLTranslation, NSMutableArray, NSMutableDictionary, NSString;

@interface FFXMLRootElement : NSXMLDocument
{
    NSString *_format;
    int _primaryVersion;
    int _secondaryVersion;
    FFXMLTranslation *_mappingTable;
    NSMutableArray *_errorsArray;
    void *_aslClient;
    int _errLogFileNum;
    BOOL _shouldCloseErrLogFileNum;
    NSMutableDictionary *_itemsByID;
}

+ (void)initialize;
+ (id)newFFXMLRootElementWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)newFFXMLRootElementWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (Class)replacementClassForClass:(Class)arg1;
+ (id)FFXMLRootElement;
- (id)init;
- (void)dealloc;
- (BOOL)checkVersionNumsFileName:(id)arg1 error:(id *)arg2;
- (id)rootNode;
- (id)rootElement;
- (id)initWithRootElement:(id)arg1;
- (void)setRootElement:(id)arg1;
- (void)setRootNode:(id)arg1;
- (int)secondaryVersion;
- (int)primaryVersion;
- (id)versionString;
- (id)format;
- (void)setFormat:(id)arg1 versionPrimary:(int)arg2 versionSecondary:(int)arg3;
- (id)mappingTable;
- (void)setMappingTable:(id)arg1;
- (id)treeElementForIdentifier:(id)arg1;
- (void)clearErrors;
- (id)errors;
- (void)addError:(id)arg1;
- (void)addErrors:(id)arg1;
- (BOOL)logAndClearErrors:(id *)arg1;
- (void)log:(id)arg1;
- (id)XMLDataWithOptions:(unsigned long long)arg1;

@end
