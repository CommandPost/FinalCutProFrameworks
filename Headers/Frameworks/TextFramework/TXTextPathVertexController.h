//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProShapes/OZVertexPosition3DController.h>

@interface TXTextPathVertexController : OZVertexPosition3DController
{
}

- (void)updateScrubberColor:(id)arg1;
- (void)setObjectTranslation:(struct OZChannelBase *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4;
- (BOOL)isEnabled;
- (void)globalToLocal:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)localToGlobal:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (id)initWithChan:(struct OZChannelBase *)arg1 index:(unsigned int)arg2 context:(id)arg3;

@end

