//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFXMLTranslationExportProtocol.h"

@class NSArray, NSImage, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface FFXMLTranslationEventClipsExporter : NSObject <FFXMLTranslationExportProtocol>
{
    NSArray *_eventClips;
    NSString *_windowSourceName;
    NSImage *_windowSourceIcon;
    BOOL _calculatedWindowSourceInfo;
    NSMapTable *_eventClipsLibraryMap;
}

- (id)selectedSequences;
- (BOOL)upgradeLegacyiMovieProjects:(id *)arg1;
- (void)_calculateSourceNameAndIcon;
- (id)defaultFilename;
- (id)windowSourceIcon;
- (id)windowSourceName;
- (id)librariesForExport;
- (BOOL)exportXMLForLibrary:(id)arg1 toURL:(id)arg2 replace:(BOOL)arg3 usingVersion:(id)arg4 withMetadataViewSet:(id)arg5 taskDelegate:(id)arg6 error:(id *)arg7;
- (void)dealloc;
- (id)initWithEventClips:(id)arg1;

@end
