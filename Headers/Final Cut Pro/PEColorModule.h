//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class NSArray, NSMutableArray, NSView;

@interface PEColorModule : LKViewModule
{
    NSView *_headerView;
    NSView *_footerView;
    BOOL _observingSelection;
    NSArray *_currentSelectedItems;
    NSMutableArray *_currentColorItems;
    NSMutableArray *_observedActiveVariantItems;
    BOOL _cachedHasSetupItems;
}

+ (id)defaultModuleNibName;
@property(readonly, nonatomic) NSView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideModule:(id)arg1;
- (void)viewDidLoad;
- (void)moduleDidUnhide;
- (void)_resyncWithSelectionManager;
- (void)_setCurrentSelectedItems:(id)arg1;
- (void)moduleDidHide;
- (void)_setupCurrentColorItems;
- (id)_context;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsFooterBar;
- (id)moduleHeaderAccessoryView;
- (BOOL)wantsHeaderBar;
- (id)lastKeyView;
- (id)firstKeyView;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (id)submoduleLayoutArray;
- (id)targetModules;
- (id)_currentContentModule;
- (unsigned long long)revealAnimationStyle;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (id)identifier;
- (void)dealloc;
- (void)_endObservingActiveVariants;
- (void)_beginObservingActiveVariants;
- (void)_endObservingSelection;
- (void)_beginObservingSelection;

@end

