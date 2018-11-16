//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKContainerModule.h"

@class LKModuleLayout, OZCurveEditorModule, OZTimelineModule;

@interface OZTimelineCurveEditorModule : LKContainerModule
{
    LKModuleLayout *_moduleLayout;
    OZTimelineModule *_timelineModule;
    OZCurveEditorModule *_curveEditorModule;
}

@property(readonly) OZCurveEditorModule *curveEditorModule; // @synthesize curveEditorModule=_curveEditorModule;
@property(readonly) OZTimelineModule *timelineModule; // @synthesize timelineModule=_timelineModule;
- (void)viewWasResized:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (BOOL)_ignoreBorderPadding;
- (BOOL)wantsHeaderBar;
- (struct CGSize)viewMinSize;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)dealloc;
- (id)init;

@end

