//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LKMenu, NSMutableArray, OZCurveEditorViewBase, OZCurveSet;
@protocol OZCurveEditorAppDelegate;

@interface OZCurveEditorCtrlBase : NSObject
{
    id <OZCurveEditorAppDelegate> _pAppDelegate;
    OZCurveEditorViewBase *_view;
    unsigned int _currentTool;
    OZCurveSet *_selectedCurveSet;
    LKMenu *_keyframeMenu;
    LKMenu *_tangentMenu;
    LKMenu *_curveMenu;
    LKMenu *_defaultMenu;
    double _originalInTanU;
    double _originalInTanV;
    double _originalOutTanU;
    double _originalOutTanV;
    _Bool _lastFrameTextUpdateTime;
    _Bool _linked;
    _Bool _snapshotChannels;
    _Bool _ignoreHiddenChannels;
    _Bool _negativeRangeAllowed;
    int _iLastDragDirection;
    _Bool _bSelectionWasFlipped;
    NSMutableArray *_keys;
}

- (BOOL)canModifySelectedAnyCurve;
- (void)dumpKeypoints;
- (void)updateUI;
- (void)update;
- (void)redrawCurveEditor;
- (void)didModifyValue:(id)arg1;
- (void)willModifyValue:(id)arg1;
- (void)didModify:(id)arg1;
- (void)willModify:(id)arg1;
- (void)magnifyGestureWithEvent:(id)arg1 andFactor:(double)arg2;
- (void)rotateWithEvent:(id)arg1;
- (void)showValueAtPoint:(struct CGPoint)arg1 inWindow:(id)arg2 withRect:(struct CGRect)arg3;
- (BOOL)shouldConstrainToFrames;
- (CDStruct_1b6d18a9)convertToCurveEditorAxis:(CDStruct_1b6d18a9)arg1;
- (double)convertFromChannelCoords:(id)arg1 value:(double)arg2;
- (double)convertToChannelCoords:(id)arg1 value:(double)arg2;
- (void)setCurrentTool:(unsigned int)arg1;
- (unsigned int)getCurrentTool;
- (void)setCurveInterpolation:(id)arg1 interpolation:(unsigned int)arg2;
- (vector_80acc5a3)getKeypoints:(unsigned int)arg1;
- (void)getSamples:(id)arg1 flag:(BOOL)arg2 minU:(CDStruct_1b6d18a9)arg3 resolution:(CDStruct_1b6d18a9)arg4 samplesU:(struct **)arg5 samplesV:(double **)arg6 number:(unsigned int *)arg7;
- (void)setBezierPoint:(id)arg1;
- (void)weightTangents:(id)arg1 flag:(BOOL)arg2;
- (void)saveTangents:(id)arg1;
- (void)breakTangents:(id)arg1;
- (void)setTangents:(id)arg1 u:(double)arg2 v:(double)arg3;
- (void)setTangents45:(id)arg1 u:(double)arg2 v:(double)arg3 flag:(BOOL)arg4;
- (void)alignTangentsSelected:(id)arg1;
- (void)breakTangentsSelected:(id)arg1;
- (void)setBezierPointSelected:(id)arg1;
- (void)weightTangentsSelected:(id)arg1 flag:(BOOL)arg2;
- (void)setTangentsSelected:(id)arg1 u:(double)arg2 v:(double)arg3;
- (void)setTangents45Selected:(id)arg1 u:(double)arg2 v:(double)arg3 flag:(BOOL)arg4;
- (void)flattenSelected:(id)arg1;
- (void)getSelectedVertex:(id)arg1 u:(double *)arg2 y:(double *)arg3;
- (_Bool)getSelected:(id)arg1 minX:(double *)arg2 maxX:(double *)arg3 minY:(double *)arg4 maxY:(double *)arg5;
- (void)easeBothSelected:(id)arg1;
- (void)easeOutSelected:(id)arg1;
- (void)easeInSelected:(id)arg1;
- (_Bool)shouldDeleteKeypoints;
- (struct CGPoint)getKeypointPosition:(id)arg1;
- (void)offsetCurve:(id)arg1 x:(CDStruct_1b6d18a9)arg2 y:(double)arg3;
- (void)offsetSelected:(id)arg1 x:(CDStruct_1b6d18a9)arg2 y:(double)arg3;
- (void)moveSelected:(id)arg1 x:(CDStruct_1b6d18a9)arg2 y:(double)arg3 useSelectionOrder:(BOOL)arg4 isConstraining:(BOOL)arg5;
- (void)duplicateSelected:(id)arg1;
- (void)deleteSelected:(id)arg1;
- (void)reverseSelected:(id)arg1;
- (void)disableSelected:(id)arg1;
- (void)lockSelected:(id)arg1;
- (void)sortKeypoints:(id)arg1 bBackward:(_Bool)arg2;
- (void)deformSelected:(id)arg1 bottomLeft:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 topRight:(struct CGPoint)arg4 topLeft:(struct CGPoint)arg5 lastDeformation:(BOOL)arg6;
- (struct CGRect)setupDeformSelected:(id)arg1;
- (void)deleteVertex:(id)arg1 u:(CDStruct_1b6d18a9)arg2;
- (id)addVertex:(id)arg1 u:(CDStruct_1b6d18a9)arg2 v:(double)arg3 link:(BOOL)arg4;
- (id)addVertex:(id)arg1 u:(CDStruct_1b6d18a9)arg2;
- (struct OZCompoundChannel *)getChannelsLinkedParent:(struct OZChannel *)arg1;
- (void)refreshSelectedCurveSet;
- (id)selectedCurveSet;
- (id)selectedChannel;
- (void)deselectAllChannels;
- (unsigned int)numberOfSketchedChannels;
- (id)sketchedChannels;
- (id)selectedRoots;
- (id)selectedChannels;
- (unsigned int)numberOfSelectedRootItems;
- (unsigned int)numberOfRootItems;
- (unsigned int)numberOfChannelItems;
- (unsigned int)numberOfSelectedChannels;
- (unsigned int)numberOfEnabledChannels;
- (unsigned int)numberOfDisplayedChannels;
- (BOOL)removeSelectedChannelFromSelectedCurveSet;
- (BOOL)removeChannelWithIdentifier:(unsigned int)arg1 fromCurveSet:(id)arg2;
- (id)channelItemWithIdentifier:(unsigned int)arg1;
- (id)appendFolder:(struct OZChannelFolder *)arg1 toCurveSet:(id)arg2;
- (id)appendFolderToCurveSet:(struct OZChannelFolder *)arg1;
- (id)appendChannel:(struct OZChannel *)arg1 toCurveSet:(id)arg2;
- (id)appendChannelToCurveSet:(struct OZChannel *)arg1;
- (id)appendCHFolder:(id)arg1 toCurveSet:(id)arg2;
- (id)appendCHFolderToSelectedCurveSet:(id)arg1;
- (id)appendCHChannel:(id)arg1 toCurveSet:(id)arg2;
- (id)appendCHChannelToSelectedCurveSet:(id)arg1;
- (void)resetSelection;
- (id)getFirstChannel;
- (void)cleanSelection:(id)arg1;
- (void)purgeSelected:(id)arg1;
- (void)validateSelection:(id)arg1;
- (void)selectionChangedTo:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)menuAlignTangent:(id)arg1;
- (void)menuBreakTangent:(id)arg1;
- (void)menuDeleteAllKeyframes:(id)arg1;
- (void)menuAddKeyframe:(id)arg1;
- (void)menuDisableSelected:(id)arg1;
- (void)menuLockSelected:(id)arg1;
- (void)menuSetSegmentInterpolation:(id)arg1;
- (void)menuSetKeypointInterpolation:(id)arg1;
- (void)menuEaseBoth:(id)arg1;
- (void)menuEaseOut:(id)arg1;
- (void)menuEaseIn:(id)arg1;
- (void)menuReverse:(id)arg1;
- (void)menuDelete:(id)arg1;
- (void)menuDuplicate:(id)arg1;
- (BOOL)validateDefaultMenuItem:(id)arg1;
- (BOOL)validateTangentMenuItem:(id)arg1;
- (BOOL)validateCurveMenuItem:(id)arg1;
- (BOOL)validateKeyframeMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)buildDefaultMenu;
- (void)buildCurveMenu;
- (void)buildTangentMenu;
- (void)buildKeyframeMenu;
- (id)getDefaultMenu;
- (id)getCurveMenu;
- (id)getTangentMenu;
- (id)getKeyframeMenu;
- (struct CGRect)getMaxViewVolume;
- (void)didSetViewContentsHorizontalOffset:(double)arg1;
- (void)didSetViewContentsHorizontalOrigin:(double)arg1 andDuration:(double)arg2;
- (void)resetDisplayRangeToProjectDuration:(id)arg1;
- (void)resetDisplayRangeToPlayRange:(id)arg1;
- (void)setDisplayRange:(CDStruct_e83c9415)arg1;
- (void)displayRangeChangedTo:(CDStruct_e83c9415)arg1;
- (void)currentViewVolumeChangedTo:(const struct CGRect *)arg1;
- (void)windowWasZoomed;
- (void)windowWasPanned:(double)arg1;
- (void)viewDidResize;
- (void)allowNegativeRange:(_Bool)arg1;
- (_Bool)negativeRangeAllowed;
- (void)setAppDelegate:(id)arg1;
- (void)setSnapshotChannels:(_Bool)arg1;
- (_Bool)snapshotChannels;
- (id)getView;
- (id)appDelegate;
- (id)allocAppDelegate;
- (void)dealloc;
- (id)init;

@end

