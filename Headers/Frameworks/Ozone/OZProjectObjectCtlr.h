//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewCtlrRoot.h"

@class LKSegmentedControl, NSBox, NSView, OZProjectDARCtlr, OZProjectPublishingCtlr, OZViewControllerGroup, PIBuildContext;

@interface OZProjectObjectCtlr : OZViewCtlrRoot
{
    NSView *_pMainView;
    NSBox *_pBox;
    LKSegmentedControl *_pSegmentedControl;
    OZProjectPublishingCtlr *_pPublishingCtlr;
    OZProjectDARCtlr *_pDARSnapshotsCtlr;
    OZViewControllerGroup *_pCurrCtlr;
    PIBuildContext *_pContext;
    list_752fd9b9 *_pNodeList;
}

- (void)switchPane:(id)arg1;
- (void)disable;
- (void)enable;
- (BOOL)isEnabled;
- (void)notify:(unsigned int)arg1;
- (id)mainView;
- (void)select:(BOOL)arg1 excludeChannel:(struct OZChannelBase *)arg2;
- (void)dealloc;
- (id)initWithSceneNodes:(list_752fd9b9 *)arg1 viewCtlrDelegate:(id)arg2 context:(id)arg3;
- (id)initWithSceneNodes:(list_752fd9b9 *)arg1 viewCtlrDelegate:(id)arg2;

@end

