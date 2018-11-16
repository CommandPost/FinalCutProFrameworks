//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFSharePanelDelegate.h"

@class FFPlayerModule, NSArray, NSString;

@interface FFSequenceExporter : NSObject <FFSharePanelDelegate>
{
    NSArray *_selection;
    CDStruct_1b6d18a9 _currentSequenceTime;
    FFPlayerModule *_playerModule;
    NSString *_projectPath;
    BOOL _isTheaterSelection;
    BOOL _excludeDisabledRoles;
}

+ (void)registerMediaServerONCE;
+ (id)fingerPrintForSelection:(id)arg1;
+ (id)shareDirectoryPath:(id)arg1;
+ (id)sequenceExporterWithSelection:(id)arg1 currentSequenceTime:(CDStruct_1b6d18a9)arg2 excludeDisabledRoles:(BOOL)arg3;
+ (id)sequenceExporterWithSelection:(id)arg1 excludeDisabledRoles:(BOOL)arg2;
+ (id)GetSequenceForShare:(id)arg1 upgradeLegacyProjects:(BOOL)arg2;
+ (id)GetSequenceForShare:(id)arg1;
@property(readonly) BOOL excludeDisabledRoles; // @synthesize excludeDisabledRoles=_excludeDisabledRoles;
@property(readonly) BOOL isTheaterSelection; // @synthesize isTheaterSelection=_isTheaterSelection;
@property(copy, nonatomic) NSString *projectPath; // @synthesize projectPath=_projectPath;
@property(copy, nonatomic) NSArray *selection; // @synthesize selection=_selection;
- (BOOL)writeSelectionToURL:(id)arg1 error:(id *)arg2;
- (void)panel:(id)arg1 willCloseWithCode:(long long)arg2;
- (id)previewLayer;
- (void)setPreviewTime:(double)arg1 supportsAudio:(BOOL)arg2 rebuildContext:(BOOL)arg3;
- (id)playerModule;
- (CDStruct_1b6d18a9)durationOfSequence:(id)arg1 mediaRange:(CDStruct_e83c9415)arg2;
- (CDStruct_1b6d18a9)durationOfSequence:(id)arg1;
- (CDStruct_1b6d18a9)durationOfSelection:(id)arg1;
- (void)submitBatch:(id)arg1 toCluster:(id)arg2 forWindow:(id)arg3 performInForeground:(BOOL)arg4;
- (void)showSharePanelWithSource:(id)arg1 destination:(id)arg2 destinationURL:(id)arg3 parentWindow:(id)arg4;
- (void)queueShareOperationsForBatches:(id)arg1 addToTheater:(BOOL)arg2;
- (void)missingMediaAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)alertForMissingContent:(BOOL)arg1 andCaptionValidationErrors:(BOOL)arg2 withMediaName:(id)arg3;
- (id)alertForProxyPlaybackEnabled:(BOOL)arg1;
- (void)displayWarningInWindow:(id)arg1 aboutProxyPlayback:(BOOL)arg2 andMissingContent:(BOOL)arg3 andCaptionValidationErrors:(BOOL)arg4 whenSharingSelection:(id)arg5 fromSource:(id)arg6 toDestination:(id)arg7 atDestinationURL:(id)arg8;
- (void)shareToDestination:(id)arg1 parentWindow:(id)arg2;
- (void)stopPlayback;
- (void)registerMediaServer;
- (BOOL)foregroundSharing:(id)arg1;
- (id)destinationPath;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 currentSequenceTime:(CDStruct_1b6d18a9)arg2 excludeDisabledRoles:(BOOL)arg3;
- (id)initWithSelection:(id)arg1 excludeDisabledRoles:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

