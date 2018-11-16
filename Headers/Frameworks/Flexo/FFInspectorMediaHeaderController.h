//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorHeaderStyleContainerController.h>

@class _FFInspectorMediaFormatsController, _FFInspectorMediaLastModifiedController;

__attribute__((visibility("hidden")))
@interface FFInspectorMediaHeaderController : FFInspectorHeaderStyleContainerController
{
    _FFInspectorMediaFormatsController *_formatsController;
    _FFInspectorMediaLastModifiedController *_lastModifiedController;
}

- (void)autoFillMultipleItems;
- (void)autoFillNoItems;
- (void)setLastModifiedDate:(id)arg1;
- (void)setAudioSampleRateInHz:(double)arg1;
- (void)setAudioType:(id)arg1;
- (void)hideAudioProperties;
- (void)showAudioProperties;
- (void)setPixelFrameSize:(struct CGSize)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2 fieldOrder:(int)arg3 colorSpaceDisplayName:(id)arg4;
- (void)hideVideoProperties;
- (void)showVideoProperties;
- (void)setEditAction:(SEL)arg1;
- (void)setEditTarget:(id)arg1;
- (BOOL)editButtonIsHidden;
- (void)hideEditButton;
- (void)showEditButton;
- (void)dealloc;
- (id)init;

@end
