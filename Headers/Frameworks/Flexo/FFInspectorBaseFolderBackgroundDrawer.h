//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFInspectorControllerSegmentedDrawing.h"

@class FFInspectorBaseFolderController, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorBaseFolderBackgroundDrawer : NSObject <FFInspectorControllerSegmentedDrawing>
{
    FFInspectorBaseFolderController *_baseFolderController;
}

- (id)layerForDrawSegment:(id)arg1;
- (BOOL)hasSegmentedDrawing;
- (void)disableDrawer;
- (id)initWithBaseFolderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
