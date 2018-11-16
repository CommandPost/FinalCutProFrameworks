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
}

+ (id)fingerPrintForSelection:(id)arg1;
+ (id)shareDirectoryPath:(id)arg1;
+ (id)sequenceExporterWithSelection:(id)arg1 currentSequenceTime:(CDStruct_1b6d18a9)arg2;
+ (id)sequenceExporterWithSelection:(id)arg1;
@property(copy, nonatomic) NSString *projectPath; // @synthesize projectPath=_projectPath;
@property(copy, nonatomic) NSArray *selection; // @synthesize selection=_selection;
- (id).cxx_construct;
- (BOOL)writeSelectionToURL:(id)arg1 error:(id *)arg2;
- (void)panel:(id)arg1 willCloseWithCode:(long long)arg2;
- (id)previewLayer;
- (void)setPreviewTime:(double)arg1;
- (id)playerModule;
- (CDStruct_1b6d18a9)durationOfSequence:(id)arg1 mediaRange:(CDStruct_e83c9415)arg2;
- (CDStruct_1b6d18a9)durationOfSequence:(id)arg1;
- (CDStruct_1b6d18a9)durationOfSelection:(id)arg1;
- (void)submitBatch:(id)arg1 toCluster:(id)arg2 forWindow:(id)arg3 performInForeground:(BOOL)arg4;
- (void)openInCompressor;
- (void)showSharePanelWithSource:(id)arg1 destination:(id)arg2 destinationURL:(id)arg3 parentWindow:(id)arg4;
- (void)queueShareOperationsForBatches:(id)arg1;
- (void)missingMediaAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)shareToDestination:(id)arg1 parentWindow:(id)arg2;
- (void)stopPlayback;
- (void)registerMediaServer;
- (void)exportUsingCompressorSettingModalForWindow:(id)arg1;
- (void)exportHTTPLiveStreamingModalForWindow:(id)arg1;
- (void)exportImageSequenceModalForWindow:(id)arg1;
- (void)exportStillFrameModalForWindow:(id)arg1;
- (void)exportMediaModalForWindow:(id)arg1;
- (void)exportAudioModalForWindow:(id)arg1;
- (void)exportMovieModalForWindow:(id)arg1;
- (void)publishCNNiReportModalForWindow:(id)arg1;
- (void)publishVimeoModalForWindow:(id)arg1;
- (void)publishFacebookModalForWindow:(id)arg1;
- (void)publishYouTubeModalForWindow:(id)arg1;
- (void)sendEmailModalForWindow:(id)arg1;
- (void)burnBlurayModalForWindow:(id)arg1;
- (void)burnDVDModalForWindow:(id)arg1;
- (void)exportiTunesModalForWindow:(id)arg1;
- (void)exportMediaBrowserModalForWindow:(id)arg1;
- (void)exportUsingPanelClass:(Class)arg1 window:(id)arg2;
- (id)setupExportAndReturnSources;
- (BOOL)foregroundSharing:(id)arg1;
- (id)destinationPath;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 currentSequenceTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithSelection:(id)arg1;

@end

