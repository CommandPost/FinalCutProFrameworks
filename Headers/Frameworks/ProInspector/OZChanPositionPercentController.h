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

- (float)suggestedMaxParamWidth;
- (float)suggestedMinParamWidth;
- (void)imageWidth:(float *)arg1 andHeight:(float *)arg2 forTime:(const CDStruct_1b6d18a9 *)arg3;
- (void)setChannelValue:(id)arg1;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (BOOL)hasControls;
- (void)disable;
- (void)enable;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (id)connectKeyViewsRec:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

