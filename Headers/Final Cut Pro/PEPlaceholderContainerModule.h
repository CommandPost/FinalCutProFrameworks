//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

@interface PEPlaceholderContainerModule : LKViewModule
{
    LKViewModule *_submodule;
}

@property(retain, nonatomic) LKViewModule *submodule; // @synthesize submodule=_submodule;
- (double)bottomDraggableExclusionMargin;
- (double)topDraggableExclusionMargin;
- (double)rightDraggableExclusionMargin;
- (double)leftDraggableExclusionMargin;
- (double)rightDraggableMargin;
- (double)leftDraggableMargin;
- (double)bottomDraggableMargin;
- (double)topDraggableMargin;
- (id)localModuleActions;
- (id)targetModules;
- (long long)labelAlignment;
- (BOOL)wantsDarkCapBar;
- (BOOL)wantsTransparentBackground;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsFooterBar;
- (id)moduleHeaderAccessoryView;
- (BOOL)wantsHeaderBar;
- (id)lastKeyView;
- (id)firstKeyView;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (BOOL)isBackgroundGrabbableAtPoint:(struct CGPoint)arg1;
- (BOOL)isBackgroundViewGrabbable:(id)arg1;
- (BOOL)isBackgroundGrabbable;
- (id)submoduleHeaderView;
- (unsigned long long)revealAnimationStyle;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)dealloc;
- (BOOL)loadView;

@end

