//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSequenceSettingsExporter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FFXMLSettingsExporter : FFSequenceSettingsExporter
{
    double progress;
    NSString *_metadataViewSet;
    unsigned long long _xmlVersion;
}

@property unsigned long long xmlVersion; // @synthesize xmlVersion=_xmlVersion;
@property(retain) NSString *metadataViewSet; // @synthesize metadataViewSet=_metadataViewSet;
- (void)dealloc;
- (void)setProgressValue:(double)arg1;
- (BOOL)done;
- (double)progress;
- (void)cancel;
- (void)_runExport;
- (void)start;
- (id)initWithSequence:(id)arg1 toFile:(id)arg2 flags:(unsigned int)arg3 application:(id)arg4;
@property(readonly) BOOL exportLibrary;

@end

