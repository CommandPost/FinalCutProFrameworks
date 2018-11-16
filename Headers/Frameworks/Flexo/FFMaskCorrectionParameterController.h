//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorBaseViewController.h>

@class LKButton;

__attribute__((visibility("hidden")))
@interface FFMaskCorrectionParameterController : FFColorBaseViewController
{
    LKButton *_showColorBoardButton;
    LKButton *_resetButton;
    LKButton *_addShapeButton;
    LKButton *_addKeyerButton;
    unsigned long long _maskIndex;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (void)didBuildUI;
- (void)update;
- (float)suggestedMaxParamWidth;
- (void)reset:(id)arg1;
- (void)showColorBoard:(id)arg1;
- (void)enableKeyer:(id)arg1;
- (void)addShape:(id)arg1;
- (id)facetForShowColorBoardButton;
- (id)effect;
- (BOOL)isBasemem;
- (BOOL)shouldEnableShowColorBoard;
- (BOOL)wasAddWithPerformBlock:(CDUnknownBlockType)arg1 action:(id)arg2 error:(id *)arg3;

@end
