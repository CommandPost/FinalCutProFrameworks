//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKWindowModule, OZCanvasModule, OZCurveEditorModule, OZFileBrowserModule, OZFootageListModule, OZFooterModule, OZInspectorModule, OZLayerAudioContainerModule, OZLayerListModule, OZLibraryInspectorContainerModule, OZLibraryModule, OZMainContainerModule, OZMainTimingModule, OZTimelineCurveEditorModule, OZTimelineModule, OZTimingControlModule, OZToolbarModule;

@protocol OZModuleAccessor <NSObject>
- (OZToolbarModule *)mainToolbarModule;
- (OZTimingControlModule *)mainTimingControlModule;
- (OZTimelineModule *)mainTimelineModule;
- (OZTimelineCurveEditorModule *)mainTimelineCurveEditorModule;
- (OZLibraryModule *)mainLibraryModule;
- (OZLayerListModule *)mainLayerListModule;
- (OZInspectorModule *)mainInspectorModule;
- (OZFooterModule *)secondaryFooterModule;
- (OZFooterModule *)mainFooterModule;
- (OZFootageListModule *)mainFootageListModule;
- (OZFileBrowserModule *)mainFileBrowserModule;
- (OZCurveEditorModule *)mainCurveEditorModule;
- (OZCanvasModule *)mainCanvasModule;
- (OZMainTimingModule *)mainTimingModule;
- (OZLibraryInspectorContainerModule *)mainLibraryInspectorContainerModule;
- (OZLayerAudioContainerModule *)mainLayerAudioContainerModule;
- (OZMainContainerModule *)mainContainerModule;
- (LKWindowModule *)secondaryWindowModule;
- (LKWindowModule *)mainWindowModule;
@end

