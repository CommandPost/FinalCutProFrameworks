//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@interface OZLibraryPreviewCtrl : LKViewModule
{
    struct OZSceneNode *_pSceneNode;
    unsigned int _pSceneNodeID;
    struct OZScene *_pScene;
    CDStruct_1b6d18a9 _timeStart;
    CDStruct_1b6d18a9 _duration;
    BOOL _shouldDeleteDoc;
}

- (double)frameInterval;
- (CDStruct_1b6d18a9)nextPlayTime:(const CDStruct_1b6d18a9 *)arg1;
- (BOOL)isPlaying;
- (void)stopPlaying;
- (void)togglePlay:(id)arg1;
- (void)update:(const CDStruct_1b6d18a9 *)arg1;
- (void)setTimeRange:(const struct PCTimeRange *)arg1;
- (void)setShouldDeleteDocument:(BOOL)arg1;
- (void)setSceneNodeID:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithRenderNode:(struct OZRenderNode *)arg1 scene:(struct OZScene *)arg2;

@end

