//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFXMLTranslation : NSObject
{
}

+ (void)alertUserToXMLImportError:(id)arg1;
+ (void)alertUserToXMLImportWarnings:(id)arg1 url:(id)arg2;
+ (void)alertUserToXMLImportWarnings:(id)arg1;
+ (id)libraryEventsForProjects:(id)arg1;
+ (BOOL)exportLibraryToFinalCutPro:(id)arg1 error:(id *)arg2;
+ (BOOL)exportLibraryToXML:(id)arg1 error:(id *)arg2;
+ (BOOL)exportEventsToFinalCutPro:(id)arg1 error:(id *)arg2;
+ (BOOL)exportEventsToXML:(id)arg1 error:(id *)arg2;
+ (BOOL)exportEventClipsToFinalCutPro:(id)arg1 error:(id *)arg2;
+ (BOOL)exportEventClipsToXML:(id)arg1 error:(id *)arg2;
+ (BOOL)exportToFinalCutPro:(id)arg1 error:(id *)arg2;
+ (BOOL)exportEventsToFinalCutBundleSupported;
+ (BOOL)exportToFinalCutBundleSupported;
+ (BOOL)exportToXML:(id)arg1 usingVersion:(id)arg2 error:(id *)arg3;
+ (id)importXMLFile:(id)arg1 library:(id)arg2 warnings:(id *)arg3 error:(id *)arg4;

@end

