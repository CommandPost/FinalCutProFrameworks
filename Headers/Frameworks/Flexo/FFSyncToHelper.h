//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFMatchToolDelegate.h"

@class NSString, TLKTimelineView;

__attribute__((visibility("hidden")))
@interface FFSyncToHelper : NSObject <FFMatchToolDelegate>
{
    CDStruct_1b6d18a9 _contextTime;
    NSString *_eventHandlerID;
    TLKTimelineView *_timelineView;
}

- (void)setSelectedItems:(id)arg1 withContextTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)matchToolShouldCancelOnUndo:(id)arg1;
- (BOOL)referenceChanged:(id)arg1 reference:(id)arg2;
- (void)matchToolWasResigned:(id)arg1;
- (void)matchToolWasAssigned:(id)arg1;
- (void)completeOnSelectionOnMatchTool:(id)arg1;
- (void)cancelOnSelectionOnMatchTool:(id)arg1;
- (id)accessoryTitle;
- (id)footerText;
- (id)footerNibName;
- (BOOL)alignContextTimeToPlayheadTime;
- (void)setEventHandlerID:(id)arg1 forTimelineView:(id)arg2;
- (void)dealloc;

@end

