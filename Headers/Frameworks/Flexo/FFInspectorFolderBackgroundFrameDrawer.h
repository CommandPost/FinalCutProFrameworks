//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorControllerFrameDrawer.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface FFInspectorFolderBackgroundFrameDrawer : FFInspectorControllerFrameDrawer
{
    NSColor *_spacingColor;
    double _spacingWidth;
}

@property(nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property(retain, nonatomic) NSColor *spacingColor; // @synthesize spacingColor=_spacingColor;
- (BOOL)updateLayer:(id)arg1 priorDrawSegment:(id)arg2 newDrawSegment:(id)arg3;
- (id)layerForDrawSegment:(id)arg1;
- (void)dealloc;

@end

