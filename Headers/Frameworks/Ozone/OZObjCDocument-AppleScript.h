//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZObjCDocument.h>

@interface OZObjCDocument (AppleScript)
- (void)play:(id)arg1;
- (void)pause:(id)arg1;
- (void)goToStart:(id)arg1;
- (void)goToEnd:(id)arg1;
- (void)setRecording:(id)arg1;
- (_Bool)getRecording;
- (void)setPlayhead:(id)arg1;
- (void)setInPoint:(id)arg1;
- (void)setOutPoint:(id)arg1;
- (void)setLooping:(_Bool)arg1;
- (_Bool)getMuted;
- (void)setMuted:(_Bool)arg1;
- (id)playhead;
- (id)inPoint;
- (id)outPoint;
- (id)valueInMarkersAtIndex:(int)arg1;
- (id)valueInMarkersWithName:(id)arg1;
- (double)countMarkers;
- (unsigned int)countOfMarkers;
- (id)objectInMarkersAtIndex:(int)arg1;
- (void)removeFromMarkersAtIndex:(int)arg1;
- (id)insertInMarkers:(id)arg1;
- (id)valueInFramesAtIndex:(int)arg1;
- (id)valueInFramesWithName:(id)arg1;
- (double)countFrames;
- (unsigned int)countOfFrames;
- (id)objectInFramesAtIndex:(int)arg1;
- (id)valueInMediaFilesAtIndex:(int)arg1;
- (id)valueInMediaFilesWithName:(id)arg1;
- (id)objectInMediaFilesAtIndex:(int)arg1;
- (unsigned int)countOfMediaFiles;
- (void)updateMediaFile:(id)arg1 infoToChange:(id)arg2;
- (void)updateMarker:(id)arg1 fromOldInfo:(id)arg2 andOldValue:(id)arg3;
- (id)objectSpecifier;
- (id)handleSaveScriptCommand:(id)arg1;
- (id)handleCloseScriptCommand:(id)arg1;
- (void)_handleImportOfFiles:(id)arg1 withArgs:(id)arg2;
- (void)handleImport:(id)arg1;
- (void)_notifyDocOfChanges;
- (void)clearRAMPreview:(id)arg1;
- (id)valueInProjectPresetsWithName:(id)arg1;
- (id)valueInProjectPresetsAtIndex:(int)arg1;
- (id)objectInProjectPresetsAtIndex:(int)arg1;
- (unsigned int)countOfProjectPresets;
- (id)_getIntendedPresetSetting;
- (void)setProjectDescription:(id)arg1;
- (id)getProjectDescription;
- (id)getProjectWidth;
- (void)setProjectWidth:(id)arg1;
- (id)getProjectHeight;
- (void)setProjectHeight:(id)arg1;
- (id)getProjectDimension;
- (id)getProjectBitDepth;
- (void)setProjectBitDepth:(id)arg1;
- (id)getProjectPixelAspectRatio;
- (void)setProjectPixelAspectRatio:(id)arg1;
- (id)getProjectFieldOrder;
- (void)setProjectFieldOrder:(id)arg1;
- (int)getProjectDuration;
- (void)setProjectDuration:(id)arg1;
- (id)getProjectStart;
- (void)setProjectStart:(id)arg1;
- (id)getProjectBackgroundColor;
- (void)setProjectBackgroundColor:(id)arg1;
- (void)setProjectMotionBlurSamples:(id)arg1;
- (id)getProjectMotionBlurSamples;
- (void)setProjectMotionBlurShutterAngle:(id)arg1;
- (id)getProjectMotionBlurShutterAngle;
- (void)setProjectMotionBlur:(id)arg1;
- (_Bool)getProjectMotionBlur;
- (void)setProjectFieldRendering:(id)arg1;
- (_Bool)getProjectFieldRendering;
- (void)setPresetSetting:(id)arg1;
- (id)getPresetSetting;
- (unsigned int)getPlaybackQuality;
- (void)setPlaybackQuality:(unsigned int)arg1;
- (void)setCanvasViewingResolution:(unsigned int)arg1;
- (void)setViewCanvasOverlays:(id)arg1;
- (void)setViewCanvasAnimationPaths:(id)arg1;
- (void)setViewCanvasLines:(id)arg1;
- (void)setViewCanvasHandles:(id)arg1;
- (void)setViewCanvasGrid:(id)arg1;
- (void)setViewCanvasGuides:(id)arg1;
- (void)setViewCanvasDynamicGuides:(id)arg1;
- (void)setViewCanvasRulers:(id)arg1;
- (void)setViewCanvasSafeZone:(id)arg1;
- (void)setViewCanvasFilmZone:(id)arg1;
- (unsigned int)_getMasterTrackID;
- (id)getMasterTrack;
- (id)_getAudioTrackByIdentifier:(id)arg1;
- (id)valueInAudioTracksWithName:(id)arg1;
- (id)valueInAudioTracksAtIndex:(int)arg1;
- (id)objectInAudioTracksAtIndex:(int)arg1;
- (unsigned int)countOfAudioTracks;
- (void)setPan:(double)arg1 ofTrack:(id)arg2;
- (id)getPanOfTrack:(id)arg1;
- (void)setLevel:(double)arg1 ofTrack:(id)arg2;
- (id)getLevelOfTrack:(id)arg1;
- (void)setInPoint:(id)arg1 ofTrack:(id)arg2;
- (id)getInPointOfTrack:(id)arg1;
- (void)setOutPoint:(id)arg1 ofTrack:(id)arg2;
- (id)getOutPointOfTrack:(id)arg1;
- (void)setName:(id)arg1 ofTrack:(id)arg2;
- (void)setInPoint:(id)arg1 ofTimelineElement:(id)arg2;
- (void)setOutPoint:(id)arg1 ofTimelineElement:(id)arg2;
- (void)setActive:(_Bool)arg1 ofTimelineElement:(id)arg2;
- (void)setLock:(_Bool)arg1 ofTimelineElement:(id)arg2;
- (void)setName:(id)arg1 ofTimelineElement:(id)arg2;
- (id)valueInTimelineElementsWithName:(id)arg1;
- (id)_makeNewOZASLayerFromOZLayer:(struct OZLayer *)arg1 withIndex:(int)arg2;
- (id)valueInLayersWithUniqueID:(id)arg1;
- (id)valueInLayersAtIndex:(int)arg1;
- (id)valueInLayersWithName:(id)arg1;
- (unsigned int)countOfLayers;
- (id)getInfoOf:(id)arg1 descendantOfLayerWithID:(unsigned int)arg2;
@end
