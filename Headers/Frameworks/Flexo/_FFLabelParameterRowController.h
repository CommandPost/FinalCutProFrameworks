//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorBaseController.h>

#import <Flexo/FFInspectorContainerSubControllerViewDelegate-Protocol.h>
#import <Flexo/FFInspectorLabelParameterRowItemController-Protocol.h>

@class NSString, NSView;

__attribute__((visibility("hidden")))
@interface _FFLabelParameterRowController : FFInspectorBaseController <FFInspectorLabelParameterRowItemController, FFInspectorContainerSubControllerViewDelegate>
{
    id _labelViewController;
    id _parameterViewController;
    double _preferredSplitterPosition;
    NSView *_rowView;
}

@property(readonly, nonatomic) id parameterViewController; // @synthesize parameterViewController=_parameterViewController;
@property(readonly, nonatomic) id labelViewController; // @synthesize labelViewController=_labelViewController;
- (BOOL)viewHeightIsFixed;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (id)view;
- (void)dealloc;
- (id)initWithLabelViewController:(id)arg1 parameterViewController:(id)arg2 preferredSplitterPosition:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

