//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFTool, TLKTimelineView;

__attribute__((visibility("hidden")))
@interface FFTimelineToolController : NSObject
{
    TLKTimelineView *_timelineView;
    FFTool *_activeTimelineTool;
    BOOL _selectingFromModel;
    BOOL _selectingFromTK;
}

+ (BOOL)toolIsTimelineTool:(id)arg1;
+ (id)timelineTools;
@property(retain, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(retain, nonatomic) FFTool *activeTimelineTool; // @synthesize activeTimelineTool=_activeTimelineTool;
- (Class)_toolClassForCurrentEventHandler;
- (void)_setEventHandlerForTool:(id)arg1;
- (void)_activeTimelineHandlerDidChange;
- (void)_activeToolDidChange:(id)arg1;
- (void)eventDispatcher:(id)arg1 didSetCurrentHandler:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithTimelineView:(id)arg1;

@end

