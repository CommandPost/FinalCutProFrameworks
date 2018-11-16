//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFAnchoredObject, FFAnchoredStack, FFContext, FFEditorModule, FFMarkerLayer, FFSettingsModule, NSArray, NSString;

@protocol FFEditorModuleDelegate
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor;
- (void)showMarkerEditorForMarkerLayer:(FFMarkerLayer *)arg1 object:(FFAnchoredObject *)arg2;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(FFAnchoredObject *)arg2;
- (void)openAudioEnhancementsPanel;
- (void)openEffectsPanel;
- (void)openStabilizationPanel;
- (void)openTransformPanel;
- (void)openCropPanel;
- (void)openAdjustmentsPanel;
- (void)openInspectorToSubmodule:(NSString *)arg1;
- (void)openColorBoardForItem:(FFAnchoredObject *)arg1;
- (void)openStack:(FFAnchoredStack *)arg1;
- (id)selectionOwner;
- (void)durationOfRootItemChanged;
- (void)updateClipAdjustmentValuesFromTimelineView;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (void)sequenceChangedForEditorModule:(FFEditorModule *)arg1;
- (void)viewChangedForEditorModule:(FFEditorModule *)arg1;
- (void)editorModule:(FFEditorModule *)arg1 didSelectItems:(NSArray *)arg2;
- (void)openSettingsWithModule:(FFSettingsModule *)arg1;
- (void)makeSequenceActive:(id)arg1 withTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)revealBinObject:(FFAnchoredObject *)arg1 andRange:(CDStruct_5c5366e1)arg2;
- (void)displayMedia:(struct NSObject *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3 loadingBlock:(void (^)(FFPlayerModule *))arg4 unloadingBlock:(void (^)(void))arg5;
- (void)displayMedia:(struct NSObject *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3 unloadingBlock:(void (^)(void))arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3;
- (BOOL)editorModuleShouldShow2UpDisplay:(FFEditorModule *)arg1;
- (void)stopNUpViewer;
- (void)replaceNUpMedia:(struct NSObject *)arg1 context:(FFContext *)arg2 withMedia:(struct NSObject *)arg3 context:(FFContext *)arg4;
- (void)startNUpViewerWithMedia:(NSArray *)arg1 contexts:(NSArray *)arg2 effectCounts:(NSArray *)arg3;
- (void)pauseSkimmingForPlayback;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)replaceSkimmedObject:(struct NSObject *)arg1 context:(FFContext *)arg2 withSkimmable:(struct NSObject *)arg3 context:(FFContext *)arg4 effectCount:(long long)arg5 allowPlayback:(BOOL)arg6 controlCanvas:(BOOL)arg7 showAngles:(BOOL)arg8 owner:(id)arg9;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 controlCanvas:(BOOL)arg5 showAngles:(BOOL)arg6 owner:(id)arg7;
@end

