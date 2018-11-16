//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSPasteboard;

@interface OZDragManager : NSObject
{
    NSMutableArray *_selectorArray;
    NSMutableArray *_targetArray;
    NSMutableArray *_mainTextArray;
    NSMutableArray *_subTextArray;
    NSMutableArray *_iconArray;
    NSMutableArray *_indentArray;
    struct OZDropTargetInfo *_dropMenuDropInfo;
    NSPasteboard *_dropMenuPasteboard;
    struct OZFootage *_dropMenuFootage;
    id _dropMenuRedirect;
    struct PCThreadNS *_convertThread;
    _Bool _convertingPasteboard;
    _Bool _convertingFilenames;
    _Bool _convertOnMainThread;
    _Bool _undoSet;
    _Bool _pastingOnlyAudioTracks;
    _Bool _pastingOnlyLightsOrCameras;
    vector_77d837c3 *_convertedClips;
}

+ (id)dragManager;
- (id)dropMenuPasteboard;
- (struct OZDropTargetInfo *)dropMenuDropInfo;
- (void)setDropMenuTarget:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)doConvertPasteboard:(void *)arg1 createClips:(BOOL)arg2;
- (void)convertPasteboard:(void *)arg1 createClips:(BOOL)arg2;
- (void)waitForConversionToComplete:(void *)arg1 createClips:(BOOL)arg2;
- (void)computeOffsets:(map_0bf39bb6 *)arg1 from:(struct OZPasteList *)arg2 dropInfo:(struct OZDropTargetInfo *)arg3 center:(PCVector3_457fd1f0 *)arg4;
- (BOOL)checkForCamerasAndLights:(struct OZPasteList *)arg1 numCameras:(int *)arg2 numLights:(int *)arg3;
- (unsigned long long)validateDrop:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (void)_copyShape;
- (void)_copyMask;
- (void)_convertShapeToMask;
- (void)_convertMaskToShape;
- (void)_mergeLayers;
- (void)_loadAllLayers;
- (void)_loadLayer:(id)arg1;
- (void)_loadSequence;
- (void)_loadStills;
- (void)_pickLayer;
- (void)loadLayerDoOK:(id)arg1;
- (void)loadLayerDoCancel:(id)arg1;
- (void)_qualifiedDrop:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1 dropInfo:(struct OZDropTargetInfo *)arg2 operation:(unsigned long long)arg3;
- (void)draggingExited:(id)arg1 view:(id)arg2;
- (unsigned long long)draggingUpdated:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2 sender:(id)arg3 view:(id)arg4 operation:(unsigned long long)arg5;
- (BOOL)prepareForDragOperation:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (BOOL)performDropWithInfo:(struct OZDropTargetInfo *)arg1;
- (struct OZSceneNode *)performSplit:(struct OZFootage *)arg1 footageExtent:(struct PCTimeRange)arg2 withOffset:(const CDStruct_1b6d18a9 *)arg3 andDuration:(const CDStruct_1b6d18a9 *)arg4 target:(struct OZSceneNode *)arg5 document:(struct OZDocument *)arg6;
- (void)performReplace:(struct OZFootage *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (BOOL)performDrop:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (BOOL)performDelete:(void *)arg1 dropInfo:(struct OZDropTargetInfo *)arg2;
- (void)clearDropMenu;
- (void)addDropMenuItem:(id)arg1 subText:(id)arg2 icon:(id)arg3 indentLevel:(int)arg4 selector:(SEL)arg5 target:(id)arg6;
- (void)addDropMenuItem:(id)arg1 subText:(id)arg2 icon:(id)arg3 indentLevel:(int)arg4 selector:(SEL)arg5 target:(id)arg6 param:(id)arg7;
- (void)cut:(id)arg1 flags:(unsigned int)arg2;
- (void)copy:(id)arg1;
- (void)paste:(struct OZDropTargetInfo *)arg1 fromPBoard:(id)arg2;
- (BOOL)validatePaste:(struct OZDropTargetInfo *)arg1 fromPBoard:(id)arg2;

@end

