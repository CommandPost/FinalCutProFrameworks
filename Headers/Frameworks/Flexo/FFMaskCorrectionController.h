//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFColorBaseViewControllerGroup.h>

@class CHChannelBase, OZLabeledParamController;

__attribute__((visibility("hidden")))
@interface FFMaskCorrectionController : FFColorBaseViewControllerGroup
{
    OZLabeledParamController *_headingController;
    CHChannelBase *_observedChannel;
}

- (void)selectedItemEffectsChanged:(id)arg1;
- (BOOL)_hasOtherCorrectionsSelectedWithShapes:(id)arg1;
- (BOOL)_hasAnyShapesSelected:(id *)arg1;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

