//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKSource, NSCache;

__attribute__((visibility("hidden")))
@interface FFSharePanelCaptionsExporter : NSObject
{
    int _timingMode;
    CKSource *_source;
    NSCache *_cachedCaptions;
}

@property(retain, nonatomic) NSCache *cachedCaptions; // @synthesize cachedCaptions=_cachedCaptions;
@property(nonatomic) int timingMode; // @synthesize timingMode=_timingMode;
@property(readonly, nonatomic) CKSource *source; // @synthesize source=_source;
- (void)exportCaptionsToURL:(id)arg1 withRole:(id)arg2 source:(id)arg3 timingMode:(int)arg4 dryRun:(BOOL)arg5;
- (BOOL)exportCaptionsToURL:(id)arg1 withFFRole:(id)arg2 source:(id)arg3 timingMode:(int)arg4 includingFormatting:(BOOL)arg5 dryRun:(BOOL)arg6;
- (id)newCaptionsForRole:(id)arg1 withSequence:(id)arg2 forTimeRange:(CDStruct_e83c9415)arg3;
- (id)captionsForRole:(id)arg1 withSequence:(id)arg2 forTimeRange:(CDStruct_e83c9415)arg3;
- (id)roleForCKRole:(id)arg1 withSequence:(id)arg2;
- (id)languageIdentifierForRole:(id)arg1 withSource:(id)arg2;
- (void)attachCaptionsForRole:(id)arg1 withPurpose:(long long)arg2 toCaptionSets:(id)arg3 withSource:(id)arg4;
- (void)attachCaptionsForRoles:(id)arg1 withPurpose:(long long)arg2 toSource:(id)arg3;
- (unsigned long long)exportCaptionSidecarFilesForRoles:(id)arg1 withFormattingDictionary:(id)arg2 source:(id)arg3 target:(id)arg4 timingMode:(int)arg5 dryRun:(BOOL)arg6;
- (unsigned long long)exportCaptionSidecarFilesForRoles:(id)arg1 source:(id)arg2 target:(id)arg3 timingMode:(int)arg4 dryRun:(BOOL)arg5;
- (id)captionSidecarFileURLsForDestinationController:(id)arg1 target:(id)arg2;
- (unsigned long long)countCaptionSidecarFilesForRoles:(id)arg1;
- (unsigned long long)countCaptionSidecarFilesForCaptionFormat:(id)arg1 source:(id)arg2;
- (id)captionRolesForCaptionFormat:(id)arg1 source:(id)arg2;
- (id)captionFormatsInUse;
- (id)captionFormatsUsedInSequence:(id)arg1;
- (id)captionsMainRolesUsedInSequence:(id)arg1;
- (void)prepareWithSource:(id)arg1 destinationController:(id)arg2 andDestination:(id)arg3 target:(id)arg4;
- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

