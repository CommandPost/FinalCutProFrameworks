//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTimeTFController.h>

@interface OZTimeTFControllerStart : OZTimeTFController
{
}

- (id)initWithChan:(struct OZChannelBase *)arg1 withRetimeController:(id)arg2 useSceneStartTimecode:(BOOL)arg3 context:(id)arg4;
- (double)getValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getMinValueFromChannel:(struct OZChannelBase *)arg1;
- (double)getMaxValueFromChannel:(struct OZChannelBase *)arg1;
- (void)setValue:(double)arg1 forRoots:(map_fb141d32 *)arg2 constrainToDependents:(_Bool)arg3;
- (void)setValue:(double)arg1 forFootage:(struct OZFootage *)arg2;
- (void)startScrubberAction:(id)arg1;
- (double)getInitialValue:(_Rb_tree_iterator_844e2a22 *)arg1;

@end

