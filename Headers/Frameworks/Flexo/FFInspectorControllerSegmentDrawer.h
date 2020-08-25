//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFInspectorControllerSegmentDrawing.h"

@class FFInspectorControllerDrawSegment, NSObject<FFInspectorControllerSegmentedDrawing>, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorControllerSegmentDrawer : NSObject <FFInspectorControllerSegmentDrawing>
{
    NSObject<FFInspectorControllerSegmentedDrawing> *_drawer;
    FFInspectorControllerDrawSegment *_drawSegment;
}

- (id)segmentLayer;
- (id)copyWithDrawSegmentIndexOffset:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDrawer:(id)arg1 drawSegment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

