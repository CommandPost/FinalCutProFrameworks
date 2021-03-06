//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/OZRenderClient-Protocol.h>

@class NSImage;
@protocol OZListController;

@interface OZListNodeRenderer : NSObject <OZRenderClient>
{
    id <OZListController> _list;
    struct OZSceneNode *_renderNode;
    NSImage *_image;
    _Bool _outOfDate;
    _Bool _processing;
    _Bool _used;
}

- (void)renderNodeCancelled:(const CDStruct_1b6d18a9 *)arg1 userData:(void *)arg2;
- (void)renderNodeFinished:(struct OZHGRenderNode *)arg1 result:(const shared_ptr_3bf61ddf *)arg2;
- (void)_imageReady:(id)arg1;
- (id)imageFor:(struct OZSceneNode *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2 scene:(struct OZScene *)arg3 view:(id)arg4;
- (void)dirty;
- (void)dealloc;
- (id)initWithList:(id)arg1;

@end

