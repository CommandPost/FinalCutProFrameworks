//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTimeTFController.h>

@interface OZTimeTFControllerStart : OZTimeTFController
{
}

- (double)getInitialValue:(__map_iterator_70a8c954 *)arg1;
- (void)startScrubberAction:(id)arg1;
- (void)setValue:(double)arg1 forFootage:(struct OZFootage *)arg2;
- (void)setValue:(double)arg1 forRoots:(map_d8745af3 *)arg2 constrainToDependents:(_Bool)arg3;
- (double)getMaxValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getMinValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getValueFromChannel:(struct OZChannelBase *)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 withRetimeController:(id)arg2 useSceneStartTimecode:(BOOL)arg3 context:(id)arg4;

@end

