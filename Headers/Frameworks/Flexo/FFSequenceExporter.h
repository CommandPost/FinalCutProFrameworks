//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFSharePanelDelegate-Protocol.h>

@class FFPlayerModule, NSArray, NSString;

@interface FFSequenceExporter : NSObject <FFSharePanelDelegate>
{
    NSArray *_selection;
    CDStruct_1b6d18a9 _currentSequenceTime;
    FFPlayerModule *_playerModule;
    NSString *_projectPath;
    BOOL _isTheaterSelection;
    NSArray *_useTimelinePlayback;
}

+ (void)registerMediaServerONCE;
+ (id)fingerPrintForSelection:(id)arg1;
+ (id)shareDirectoryPath:(id)arg1;
+ (id)sequenceExporterWithSelection:(id)arg1 currentSequenceTime:(CDStruct_1b6d18a9)arg2 useTimelinePlayback:(id)arg3;
+ (id)sequenceExporterWithSelection:(id)arg1 useTimelinePlayback:(id)arg2;
+ (id)GetSequenceForShare:(id)arg1 upgradeLegacyProjects:(BOOL)arg2;
+ (id)GetSequenceForShare:(id)arg1;
@property(readonly) NSArray *useTimelinePlayback; // @synthesize useTimelinePlayback=_useTimelinePlayback;
@property(readonly) BOOL isTheaterSelection; // @synthesize isTheaterSelection=_isTheaterSelection;
@property(copy, nonatomic) NSString *projectPath; // @synthesize projectPath=_projectPath;
@property(copy, nonatomic) NSArray *selection; // @synthesize selection=_selection;
- (BOOL)writeSelectionToURL:(id)arg1 error:(id *)arg2;
- (id)previewLayer;
- (void)setPreviewTime:(double)arg1 supportsAudio:(BOOL)arg2 rebuildContext:(BOOL)arg3;
@property(readonly) FFPlayerModule *playerModule;
- (CDStruct_1b6d18a9)durationOfSequence:(id)arg1 mediaRange:(CDStruct_e83c9415)arg2;
- (CDStruct_1b6d18a9)durationOfSequence:(id)arg1;
- (CDStruct_1b6d18a9)durationOfSelection:(id)arg1;
- (void)submitBatch:(id)arg1 toCluster:(id)arg2 forWindow:(id)arg3 performInForeground:(BOOL)arg4;
- (void)showSharePanelWithSources:(id)arg1 destination:(id)arg2 destinationURL:(id)arg3 parentWindow:(id)arg4;
- (void)queueShareOperationsForBatches:(id)arg1 addToTheater:(BOOL)arg2;
- (void)missingMediaAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)alertForMissingContent:(id)arg1;
- (id)alertForProxyPlaybackEnabled:(BOOL)arg1;
- (void)displayWarningInWindow:(id)arg1 aboutProxyPlayback:(BOOL)arg2 andMissingContent:(id)arg3 whenSharingSelection:(id)arg4 fromSources:(id)arg5 toDestination:(id)arg6 atDestinationURL:(id)arg7;
- (BOOL)_useTimelinePlaybackForFigTimeRangeAndObject:(id)arg1;
- (void)shareToDestination:(id)arg1 parentWindow:(id)arg2;
- (void)stopPlayback;
- (void)registerMediaServer;
- (id)destinationPath;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 currentSequenceTime:(CDStruct_1b6d18a9)arg2 useTimelinePlayback:(id)arg3;
- (id)initWithSelection:(id)arg1 useTimelinePlayback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

