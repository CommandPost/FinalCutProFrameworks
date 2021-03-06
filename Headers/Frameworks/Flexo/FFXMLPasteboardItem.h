//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSPasteboardItemDataProvider-Protocol.h>

@class FFXMLExportOptions, FFXMLTranslationOptions, FFXMLTranslationTask, NSData, NSString, NSXMLDocument;

__attribute__((visibility("hidden")))
@interface FFXMLPasteboardItem : NSObject <NSPasteboardItemDataProvider>
{
    NSString *_xmlString;
    NSData *_xmlData;
    NSXMLDocument *_xmlDoc;
    FFXMLTranslationTask *m_translationTask;
    FFXMLTranslationOptions *m_translationOptions;
}

- (void)dealloc;
- (void)resetPasteboardForExportVersion:(unsigned int)arg1;
- (void)setDataForPasteboardType:(id)arg1 item:(id)arg2 version:(unsigned int)arg3;
- (void)setStringForPasteboardType:(id)arg1 item:(id)arg2;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (id)initWithTranslationTask:(id)arg1;
- (id)init;
- (id)_xmlDoc;
- (id)xmlData;
- (id)xmlString;
@property(copy, nonatomic) FFXMLExportOptions *exportOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

