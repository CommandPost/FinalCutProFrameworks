//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class LKTextField, PISegmentedScrubber;

@interface OZChanPositionPercentController : OZViewControllerGroup
{
    PISegmentedScrubber *_pXPosTF;
    PISegmentedScrubber *_pYPosTF;
    LKTextField *_pPrefixXTF;
    LKTextField *_pPrefixYTF;
    LKTextField *_pSuffixXTF;
    LKTextField *_pSuffixYTF;
    BOOL _useAbsolutePoints;
    BOOL _runningInFlexo;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)connectKeyViewsRec:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (BOOL)hasControls;
- (void)startSegmentedScrubberAction:(id)arg1;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)imageWidth:(float *)arg1 andHeight:(float *)arg2 forTime:(const CDStruct_1b6d18a9 *)arg3;
- (void)setupLabelTF:(id)arg1;

@end
