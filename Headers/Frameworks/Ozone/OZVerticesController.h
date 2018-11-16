//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

#import "OZObjCObserver.h"

@class NSMutableArray;

@interface OZVerticesController : OZViewControllerGroup <OZObjCObserver>
{
    NSMutableArray *_verticesController;
}

- (id)addMainController:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)addVertexController:(struct OZChannelBase *)arg1 index:(unsigned int)arg2 context:(id)arg3;
- (unsigned int)getNumberOfVertices:(struct OZChannelBase *)arg1;
- (void)notify:(unsigned int)arg1;
- (BOOL)isSelected;
- (void)updateLockFlags;
- (void)select:(BOOL)arg1 excludeChannel:(struct OZChannelBase *)arg2;
- (void)select:(BOOL)arg1;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

