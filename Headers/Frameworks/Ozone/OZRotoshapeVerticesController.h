//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZVerticesController.h>

@class OZAnimIndicator;

@interface OZRotoshapeVerticesController : OZVerticesController
{
    OZAnimIndicator *_pAnim;
}

- (void)updateLockFlags;
- (id)addVertexController:(struct OZChannelBase *)arg1 index:(unsigned int)arg2 context:(id)arg3;
- (unsigned int)getNumberOfVertices:(struct OZChannelBase *)arg1;
- (id)addMainController:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

