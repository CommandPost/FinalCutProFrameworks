//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKSource, CKTarget, FFAnchoredSequence, FFRole;

__attribute__((visibility("hidden")))
@interface FFExportCaptionSidecarFileOperation : NSObject
{
    BOOL _isDryRun;
    BOOL _shouldIncludeFormatting;
    int _timingMode;
    CKSource *_source;
    FFAnchoredSequence *_sequence;
    CKTarget *_target;
    FFRole *_role;
    long long _numberOfFilesWritten;
}

@property(nonatomic) long long numberOfFilesWritten; // @synthesize numberOfFilesWritten=_numberOfFilesWritten;
@property(nonatomic) BOOL shouldIncludeFormatting; // @synthesize shouldIncludeFormatting=_shouldIncludeFormatting;
@property(retain, nonatomic) FFRole *role; // @synthesize role=_role;
@property(retain, nonatomic) CKTarget *target; // @synthesize target=_target;
@property(nonatomic) BOOL isDryRun; // @synthesize isDryRun=_isDryRun;
@property(nonatomic) int timingMode; // @synthesize timingMode=_timingMode;
@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) CKSource *source; // @synthesize source=_source;
- (id)separator;
- (id)baseFileName;
- (id)fileNameForCaptionSidecarFile;
- (id)fileExtensionForSidecarFile;
- (id)directoryURL;
- (id)urlForCaptionSidecarFile;
- (void)exportCaptionSidecarFileWithLockedSequence;
- (void)exportCaptionSidecarFile;
- (void)dealloc;

@end

