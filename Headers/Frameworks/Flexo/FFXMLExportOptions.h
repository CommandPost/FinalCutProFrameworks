//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFXMLTranslationOptions.h>

@class FFMetadataViewSet, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFXMLExportOptions : FFXMLTranslationOptions
{
    NSNumber *_versionNumberObj;
    NSString *_metadataViewName;
    FFMetadataViewSet *_metadataViewSet;
    NSNumber *_replaceExistingDocumentObj;
    NSNumber *_clipOrganizationTypeObj;
    NSNumber *_useSimpleSyntaxObj;
    NSNumber *_excludeModDateObj;
    NSNumber *_excludeAssetFileInfoObj;
    NSNumber *_useKeywordMarkerKeywordObj;
    NSNumber *_importConsumerProjectInFCPXObj;
    NSURL *_documentURL;
}

+ (id)propertyKeys;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(retain, nonatomic) NSNumber *importConsumerProjectInFCPXObj; // @synthesize importConsumerProjectInFCPXObj=_importConsumerProjectInFCPXObj;
@property(retain, nonatomic) NSNumber *useKeywordMarkerKeywordObj; // @synthesize useKeywordMarkerKeywordObj=_useKeywordMarkerKeywordObj;
@property(retain, nonatomic) NSNumber *excludeAssetFileInfoObj; // @synthesize excludeAssetFileInfoObj=_excludeAssetFileInfoObj;
@property(retain, nonatomic) NSNumber *excludeModDateObj; // @synthesize excludeModDateObj=_excludeModDateObj;
@property(retain, nonatomic) NSNumber *useSimpleSyntaxObj; // @synthesize useSimpleSyntaxObj=_useSimpleSyntaxObj;
@property(retain, nonatomic) NSNumber *clipOrganizationTypeObj; // @synthesize clipOrganizationTypeObj=_clipOrganizationTypeObj;
@property(retain, nonatomic) NSNumber *replaceExistingDocumentObj; // @synthesize replaceExistingDocumentObj=_replaceExistingDocumentObj;
@property(retain, nonatomic) NSNumber *versionNumberObj; // @synthesize versionNumberObj=_versionNumberObj;
- (void)writeAsUserDefaults;
- (id)initWithUserDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)clearImportConsumerProjectInFCPX;
@property(readonly, nonatomic) BOOL hasImportConsumerProjectInFCPX;
@property(nonatomic) BOOL importConsumerProjectInFCPX;
- (void)clearUseKeywordMarkerKeyword;
@property(readonly, nonatomic) BOOL hasUseKeywordMarkerKeyword;
@property(nonatomic) BOOL useKeywordMarkerKeyword;
- (void)clearExcludeAssetFileInfo;
@property(readonly, nonatomic) BOOL hasExcludeAssetFileInfo;
@property(nonatomic) BOOL excludeAssetFileInfo;
- (void)clearExcludeModDate;
@property(readonly, nonatomic) BOOL hasExcludeModDate;
@property(nonatomic) BOOL excludeModDate;
- (void)clearUseSimpleSyntax;
@property(readonly, nonatomic) BOOL hasUseSimpleSyntax;
@property(nonatomic) BOOL useSimpleSyntax;
- (void)clearClipOrganizationType;
@property(readonly, nonatomic) BOOL hasClipOrganizationType;
@property(nonatomic) int clipOrganizationType;
- (void)clearReplaceExistingDocument;
@property(readonly, nonatomic) BOOL hasReplaceExistingDocument;
@property(nonatomic) BOOL replaceExistingDocument;
@property(retain, nonatomic) FFMetadataViewSet *metadataViewSet;
@property(retain, nonatomic) NSString *metadataViewName;
- (void)clearVersionNumber;
@property(readonly, nonatomic) BOOL hasVersionNumber;
@property(nonatomic) unsigned long long versionNumber;

@end

