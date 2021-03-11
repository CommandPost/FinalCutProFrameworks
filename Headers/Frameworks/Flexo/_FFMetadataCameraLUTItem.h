//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/_FFMetadataItem.h>

@class FFCameraLUTController, FFInspectorCameraLUTParameterController;

__attribute__((visibility("hidden")))
@interface _FFMetadataCameraLUTItem : _FFMetadataItem
{
    FFCameraLUTController *_cameraLUTController;
    FFInspectorCameraLUTParameterController *_controller;
}

@property(retain, nonatomic) FFInspectorCameraLUTParameterController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) FFCameraLUTController *cameraLUTController; // @synthesize cameraLUTController=_cameraLUTController;
- (id)parameterViewController;
- (void)verifyOnlineStatus;
- (id)_md5;
- (id)_title;
- (BOOL)_isOffline;
- (id)LUTReference;
- (void)setControllerDelegate:(id)arg1 menu:(id)arg2 definition:(id)arg3 currentItems:(id)arg4 supportedModes:(id)arg5;
- (void)dealloc;

@end

