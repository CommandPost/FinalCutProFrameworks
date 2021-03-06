//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class FFInspectorRootViewController, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorBridgeOZViewController : OZViewController
{
    NSView *_observedView;
    double _viewHeight;
    BOOL _didSetupConstraints;
    FFInspectorRootViewController *_rootViewController;
}

- (void)deleteSelection;
- (void)getSelectedControllers:(id)arg1 doShallowSearch:(BOOL)arg2;
- (BOOL)isSelected;
- (void)select:(BOOL)arg1;
- (void)updateEnableState;
- (void)update;
- (BOOL)isNewInspectorInfrastructure;
- (void)_frameChanged:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)updateViewFinalFrame;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithInspectorRootViewController:(id)arg1;

@end

