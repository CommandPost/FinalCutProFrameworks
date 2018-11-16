//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZLibraryPreviewCtrl.h>

@class NSTimer, OZImagePreview;

@interface OZLibraryNodePreviewCtrl : OZLibraryPreviewCtrl
{
    struct OZRenderNode *_pRenderNode;
    OZImagePreview *_pImagePreview;
    BOOL _isPlaying;
    struct PCMutex *_pRenderLock;
    BOOL _shouldRerender;
    BOOL _isRenderComplete;
    NSTimer *_pPlayingTimer;
    CDStruct_1b6d18a9 _playTime;
}

@property(nonatomic) OZImagePreview *imagePreviewView; // @synthesize imagePreviewView=_pImagePreview;
- (void)playCB:(id)arg1;
- (void)renderComplete:(id)arg1;
- (struct OZRenderNode *)getRenderNode;
- (void)update:(const CDStruct_1b6d18a9 *)arg1;
- (BOOL)isPlaying;
- (void)stopPlaying;
- (void)togglePlay:(id)arg1;
- (void)togglePlayNoLock;
- (void)viewDidLoad;
- (void)previewDidResize:(id)arg1;
- (void)dealloc;
- (id)initWithRenderNode:(struct OZRenderNode *)arg1 scene:(struct OZScene *)arg2;

@end

