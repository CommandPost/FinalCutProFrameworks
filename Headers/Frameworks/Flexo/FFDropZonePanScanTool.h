//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFTool.h>

@interface FFDropZonePanScanTool : FFTool
{
}

+ (id)cursor;
+ (id)toolbarFacetImageOff;
+ (id)toolbarFacetImageOn;
+ (id)displayName;
+ (void)initialize;
- (void)didMouseDownOnCanvas:(id)arg1 target:(id)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)supportsMultipleSelection;
- (BOOL)editsItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)handlesItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)itemHasDropZone:(id)arg1;
- (BOOL)handlesSelection;
- (void)resignActiveTool;

@end

