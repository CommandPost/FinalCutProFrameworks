//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFInspectorControllerSegmentDrawing-Protocol.h>
#import <Flexo/FFInspectorControllerUpdateDrawerDelegate-Protocol.h>

@class FFInspectorBaseFolderController, FFInspectorControllerUpdateDrawer, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorBaseFolderControllerUpdateDrawer : NSObject <FFInspectorControllerSegmentDrawing, FFInspectorControllerUpdateDrawerDelegate>
{
    FFInspectorControllerUpdateDrawer *_updateDrawer;
    FFInspectorBaseFolderController *_controller;
    long long _segmentIndex;
}

- (id)inspectorControllerUpdateDrawer:(id)arg1 drawSegmentForLayer:(id)arg2 priorDrawSegment:(id)arg3;
- (id)copyWithDrawSegmentIndexOffset:(long long)arg1;
- (id)segmentLayer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_addObserving;
- (void)disableUpdates;
- (void)numDrawSegmentsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithUpdateDrawer:(id)arg1 controller:(id)arg2 segmentIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

