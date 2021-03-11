//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKImageView.h>

#import <Ozone/OZRenderClient-Protocol.h>

@class NSImage, OZPreviewPlayButtonView;

@interface OZImagePreview : LKImageView <OZRenderClient>
{
    struct OZRenderNode *_renderNode;
    struct PCRecursiveMutex _lock;
    id _renderDelegate;
    BOOL _shouldDrawBackground;
    BOOL _selected;
    NSImage *_customFrameImage;
    OZPreviewPlayButtonView *_playButtonView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) OZPreviewPlayButtonView *playButtonView; // @synthesize playButtonView=_playButtonView;
- (void)renderNodeCancelled:(const CDStruct_1b6d18a9 *)arg1 userData:(void *)arg2;
- (void)renderNodeFinished:(struct OZHGRenderNode *)arg1 result:(const shared_ptr_3bf61ddf *)arg2;
- (void)imagePreviewRenderReady:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (double)getInset;
- (void)callRenderDelegate:(id)arg1;
- (void)setRenderDelegate:(id)arg1;
- (struct OZRenderNode *)renderNode;
- (void)display:(struct OZRenderNode *)arg1 forTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)display:(struct OZRenderNode *)arg1;
- (struct OZRenderManager *)renderManagerForNode:(struct OZRenderNode *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCustomFrameImage:(id)arg1;
- (void)setShouldDrawBackground:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_init;

@end

