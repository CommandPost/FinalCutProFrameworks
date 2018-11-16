//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PEOrganizerBaseContainerModule.h"

@class FFEventLibraryModule;

@interface PEMediaEventOrganizerContainerModule : PEOrganizerBaseContainerModule
{
    BOOL _isActive;
}

@property(readonly) FFEventLibraryModule *activeOrganizerModule;
- (Class)organizerModuleClass;
- (struct CGSize)viewMinSize;
- (void)viewWasInstalled;
- (void)viewWillBeRemoved;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)insertKeyDown:(id)arg1;
- (void)insertKeyDownAudio:(id)arg1;
- (void)insertKeyDownVideo:(id)arg1;
- (void)_replaceWithSelectedMedia:(id)arg1 replaceActionType:(int)arg2;
- (void)_editWithSelectedMedia:(id)arg1 editAction:(int)arg2 backtimed:(BOOL)arg3;
- (void)_editWithSelectedMedia:(id)arg1 editAction:(int)arg2 backtimed:(BOOL)arg3 trackType:(id)arg4;
- (void)insertPlaceholder:(id)arg1;
- (void)insertGap:(id)arg1;
- (void)insertWithSelectedMedia:(id)arg1;
- (void)insertWithSelectedMediaAudio:(id)arg1;
- (void)insertWithSelectedMediaVideo:(id)arg1;
- (void)overwriteWithSelectedMedia:(id)arg1;
- (void)overwriteWithSelectedMediaAudio:(id)arg1;
- (void)overwriteWithSelectedMediaVideo:(id)arg1;
- (void)insertWithSelectedMediaBacktimed:(id)arg1;
- (void)insertWithSelectedMediaAudioBacktimed:(id)arg1;
- (void)insertWithSelectedMediaVideoBacktimed:(id)arg1;
- (void)overwriteWithSelectedMediaBacktimed:(id)arg1;
- (void)overwriteWithSelectedMediaAudioBacktimed:(id)arg1;
- (void)overwriteWithSelectedMediaVideoBacktimed:(id)arg1;
- (void)appendWithSelectedMedia:(id)arg1;
- (void)appendWithSelectedMediaAudio:(id)arg1;
- (void)appendWithSelectedMediaVideo:(id)arg1;
- (void)anchorWithSelectedMedia:(id)arg1;
- (void)anchorWithSelectedMediaAudio:(id)arg1;
- (void)anchorWithSelectedMediaVideo:(id)arg1;
- (void)anchorWithSelectedMediaBacktimed:(id)arg1;
- (void)anchorWithSelectedMediaAudioBacktimed:(id)arg1;
- (void)anchorWithSelectedMediaVideoBacktimed:(id)arg1;
- (void)replaceWithSelectedMediaWhole:(id)arg1;
- (void)replaceWithSelectedMediaAtPlayhead:(id)arg1;
- (void)replaceWithSelectedMediaFromStart:(id)arg1;
- (void)replaceWithSelectedMediaFromEnd:(id)arg1;
- (void)replaceWithSelectedMediaAndAddToAudition:(id)arg1;
- (void)addSelectedMediaToAudition:(id)arg1;
- (BOOL)revealBinObject:(id)arg1 andRange:(CDStruct_5c5366e1)arg2;
- (void)openStack:(id)arg1;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)hideMarkerEditor;
- (BOOL)markerEditorIsShown;
- (void)setKeywordEditorVisible:(BOOL)arg1;
- (void)_firstResponderChanged:(id)arg1;
- (void)numericEntryWillBegin;
- (void)numericEntryDidEnd;
- (void)setNumericEntryValue:(id)arg1;
- (void)setNumericEntryType:(unsigned long long)arg1;
- (void)setNumericEntryDirection:(long long)arg1;
- (void)setNumericEntryShowsSubframes:(BOOL)arg1;
- (void)showProjectLibrary;

@end

