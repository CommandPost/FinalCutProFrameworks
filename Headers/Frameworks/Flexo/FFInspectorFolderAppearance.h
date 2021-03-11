//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFInspectorFolderAppearance-Protocol.h>

@class FFInspectorFolderBackgroundFrameDrawer, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorFolderAppearance : NSObject <FFInspectorFolderAppearance>
{
    FFInspectorFolderBackgroundFrameDrawer *_backgroundFrameDrawer;
    FFInspectorFolderBackgroundFrameDrawer *_groupBackgroundFrameDrawer;
}

+ (id)appearance;
@property(readonly, nonatomic) FFInspectorFolderBackgroundFrameDrawer *groupBackgroundFrameDrawer; // @synthesize groupBackgroundFrameDrawer=_groupBackgroundFrameDrawer;
@property(readonly, nonatomic) FFInspectorFolderBackgroundFrameDrawer *backgroundFrameDrawer; // @synthesize backgroundFrameDrawer=_backgroundFrameDrawer;
- (id)segmentPaddingForDrawSegment:(id)arg1;
- (BOOL)hasSegmentPadding;
- (id)groupBackgroundDrawer;
- (id)folderBackgroundDrawer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

