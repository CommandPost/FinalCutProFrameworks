//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class OZChanMiniCurveEditorController, OZLabeledParamController, OZMiniCurveEditorStripController, OZViewController;

@interface OZMiniCurveEditorGroupController : OZViewControllerGroup
{
    OZLabeledParamController *_pHeadingController;
    OZChanMiniCurveEditorController *_pEditorController;
    OZMiniCurveEditorStripController *_pEditorStripController;
    OZViewControllerGroup *_pEditorGroup;
    OZViewController *_pYController;
    OZViewController *_pXController;
}

- (void)update;
- (void)notify:(unsigned int)arg1;
- (void)setDisplayRange:(const CDStruct_1b6d18a9 *)arg1 duration:(const CDStruct_1b6d18a9 *)arg2;
- (void)setTotalRange:(const CDStruct_1b6d18a9 *)arg1 duration:(const CDStruct_1b6d18a9 *)arg2;
- (id)createXController:(id)arg1 channel:(struct OZChannelBase *)arg2 withMiniCurveEditor:(id)arg3 context:(id)arg4;
- (id)createYController:(id)arg1 channel:(struct OZChannelBase *)arg2 withMiniCurveEditor:(id)arg3 context:(id)arg4;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

