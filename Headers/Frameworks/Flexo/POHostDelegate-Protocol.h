//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol POHostDelegate
- (PCVector2_79a470e1)viewCoords2DForEvent:(id)arg1;
- (PCVector2_79a470e1)filmCoords2DForEvent:(id)arg1;
- (PCVector3_515d8d1c)viewCoords3DForEvent:(id)arg1;
- (PCVector3_515d8d1c)filmCoords3DForEvent:(id)arg1;
- (CDStruct_1b6d18a9)getTime;
- (const struct OZRenderState *)renderState;
- (double)pixelAspectRatio;
- (double)getSceneWidth;
- (double)getSceneHeight;
- (double)scenePixelAspectRatio;
- (BOOL)has3DObjects;
- (BOOL)applyFlatten;
- (void)postNotification:(unsigned int)arg1;
- (void)postNotification:(unsigned int)arg1 updateToolOnSelectionChanged:(BOOL)arg2;
- (void)notifyChangeDelta;
- (void)notifyChangeDone;
- (void)notifyObjectChange:(BOOL)arg1;
- (void)notifySceneChange;
- (void)notifyInspectorContentsChanged;
- (void)notifyPathChanged;
- (BOOL)channelChanged:(unsigned int)arg1;
- (BOOL)timeRangeChanged:(unsigned int)arg1;
- (BOOL)sceneListChanged:(unsigned int)arg1;
- (BOOL)objectEnableChanged:(unsigned int)arg1;
- (void)ignoreObserverOnce:(void *)arg1 forFlags:(unsigned int)arg2;
- (void)aboutToChangeChannel:(const struct OZChannelBase *)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)willSetChannel:(struct OZChannelBase *)arg1;
- (void)didSetChannel:(struct OZChannelBase *)arg1;
- (void)abort:(BOOL)arg1;
- (void)setAnimateFlag:(BOOL)arg1;
- (void)startCaptureModifiedChannels:(id)arg1;
- (void)endCaptureModifiedChannels;
- (void)beginUndoGroup:(id)arg1;
- (void)endUndoGroup;
- (void)beginTemporaryUndo;
- (BOOL)isInTemporaryUndo;
- (void)endTemporaryUndo;
- (void)clearTemporaryUndoItems;
- (void)undoBegin;
- (void)undoEnd;
- (BOOL)showToolTips;
- (void)registerOSC:(id)arg1 withID:(const struct PCUUID *)arg2;
- (void)deregisterOSC:(id)arg1 withID:(const struct PCUUID *)arg2;
- (void)getActiveOSCsWithID:(const struct PCUUID *)arg1 inList:(list_c8607091 *)arg2;
- (id)createScaleOSCWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (BOOL)isMotion;
@end
