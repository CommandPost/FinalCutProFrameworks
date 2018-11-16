//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

#import "OZFlippedViewResizeDelegate.h"

@class NSMutableArray, NSString, NSTrackingArea, NSView, OZViewController;

@interface OZLabeledParamController : OZViewControllerGroup <OZFlippedViewResizeDelegate>
{
    OZViewController *_pParamController;
    OZViewController *_pLabelController;
    NSView *_pLabelView;
    NSView *_pParamView;
    BOOL _isBrickHeading;
    BOOL _isAutosizing;
    NSMutableArray *_pMouseInObservers;
    NSTrackingArea *_pTrackingArea;
    vector_f672cb0f *_pAssociatedSceneNodeIDs;
    NSString *_pAssociatedFolderChanPath;
    NSString *_pAssociatedChanPath;
}

@property(nonatomic) vector_f672cb0f *associatedSceneNodeIDs; // @synthesize associatedSceneNodeIDs=_pAssociatedSceneNodeIDs;
@property(retain, nonatomic) NSString *associatedFolderChanPath; // @synthesize associatedFolderChanPath=_pAssociatedFolderChanPath;
@property(retain, nonatomic) NSString *associatedChanPath; // @synthesize associatedChanPath=_pAssociatedChanPath;
- (BOOL)reassociateChannels:(vector_b71873ec *)arg1;
- (void)addOrResetAssociatedID:(unsigned int)arg1 isAdd:(BOOL)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)registerMouseInObserver:(id)arg1;
- (void)registerMouseInObserversForController:(id)arg1;
- (void)registerMouseInObserversForView:(id)arg1;
- (id)labelView;
- (id)paramView;
- (BOOL)isMouseInLabelView:(id)arg1;
- (void)flippedView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)minLabelWidth;
- (void)setIsAutosizing:(BOOL)arg1;
- (id)paramController;
- (id)labelController;
- (id)getSubgroup;
- (void)didTwiddle:(BOOL)arg1;
- (void)twiddle;
- (void)didBuildUI;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)update;
- (void)dealloc;
- (void)setupFlippedViewWithChan:(struct OZChannelBase *)arg1;
- (id)initWithLabelController:(id)arg1 withParamController:(id)arg2 context:(id)arg3;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)setLabelController:(id)arg1 paramController:(id)arg2;

@end

