//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import <LunaKit/NSUserInterfaceValidations-Protocol.h>

@class LKModuleLayout, NSArray, NSMapTable, NSMutableArray, NSString, NSView;

@interface LKViewModule : NSResponder <NSUserInterfaceValidations>
{
    LKViewModule *_supermodule;
    NSMutableArray *_submodules;
    NSView *_view;
    id _delegate;
    NSView *firstKeyView;
    NSView *lastKeyView;
    NSString *_label;
    id _identifier;
    NSMapTable *_actionCache;
    NSString *_nibName;
    int _tag;
    NSArray *_topLevelObjects;
    struct {
        unsigned int nibLoaded:1;
        unsigned int nibIsLoading:1;
        unsigned int needsUpdate:1;
        unsigned int viewIsInstalled:1;
        unsigned int disableAutounbinder:1;
        unsigned int reusePolicy:2;
        unsigned int hideOnAnimationStop:1;
        unsigned int RESERVED:24;
    } _mFlags;
    LKModuleLayout *_subLayout;
    BOOL loadNibFailed;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstanceIdentifier;
+ (id)sharedInstance;
+ (id)_mappedClassName:(id)arg1;
+ (id)defaultModuleNibName;
@property BOOL loadNibFailed; // @synthesize loadNibFailed;
- (double)bottomDraggableExclusionMargin;
- (double)topDraggableExclusionMargin;
- (double)rightDraggableExclusionMargin;
- (double)leftDraggableExclusionMargin;
- (double)rightDraggableMargin;
- (double)leftDraggableMargin;
- (double)bottomDraggableMargin;
- (double)topDraggableMargin;
- (BOOL)canBeInspected;
- (id)selectedItems;
- (void)setSelectedItems:(id)arg1;
- (id)inspectorClassName;
- (id)ancestorSharedWithModule:(id)arg1;
- (void)reorderSubmodule:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceSubmodule:(id)arg1 with:(id)arg2;
- (void)removeFromSupermodule;
- (void)moduleDidBecomeVisible:(id)arg1;
- (id)visibleSubmodule;
- (id)visibleSubmodules;
- (BOOL)isSubmoduleVisible:(id)arg1;
- (BOOL)isVisible;
- (id)makeSubmoduleVisible:(id)arg1;
- (id)makeVisible;
- (void)module:(id)arg1 didUnhideSubmodule:(id)arg2;
- (void)module:(id)arg1 didHideSubmodule:(id)arg2;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)recursiveModuleDidUnhide;
- (void)innerRecursiveModuleDidUnhide;
- (void)recursiveModuleDidHide;
- (void)innerRecursiveModuleDidHide;
- (BOOL)isHidden;
- (BOOL)isSubmoduleHidden:(id)arg1;
- (BOOL)unhideSubmodule:(id)arg1;
- (BOOL)hideSubmodule:(id)arg1;
- (id)_hideSubmodule:(id)arg1;
- (id)_hide;
- (id)_unhideSubmodule:(id)arg1;
- (id)_unhide;
- (BOOL)validateAction:(SEL)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)activate:(id)arg1;
- (void)moduleDidFinishRevealAnimation;
- (void)hide:(id)arg1;
- (void)unhideWithoutActivation:(id)arg1;
- (void)unhide:(id)arg1;
- (void)show:(id)arg1;
- (id)layoutDictionary;
- (void)displayPostAutoLayout;
- (void)postLayout:(id)arg1;
- (id)createSubmoduleFromDictionary:(id)arg1;
- (void)configureSubmodules:(id)arg1;
- (void)preLayout:(id)arg1;
- (id)validateLayoutDictionary:(id)arg1;
- (void)applyLayoutDictionary:(id)arg1;
- (void)applySubLayout:(id)arg1;
- (id)_sublayoutContainerView;
- (void)setCurrentSubLayout:(id)arg1;
- (id)currentSubLayout;
- (id)subLayoutWithName:(id)arg1;
- (id)_subLayoutWithName:(id)arg1;
- (id)_subLayoutWithName:(id)arg1 inBundle:(id)arg2;
- (void)windowDidShow;
- (void)windowWillShow;
- (id)submoduleLayoutArray;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)takeGeometryLayoutFromDictionary:(id)arg1;
- (id)geometryLayoutDictionary;
- (double)moduleFooterViewHeight;
- (double)moduleHeaderViewHeight;
- (BOOL)saveViewFrameInGeometryDictionary;
- (BOOL)moduleEnforcesViewMinSize;
- (void)submodule:(id)arg1 didChangeMaxSize:(struct CGSize)arg2;
- (struct CGSize)viewMaxSize;
- (void)submodule:(id)arg1 didChangeMinSize:(struct CGSize)arg2;
- (struct CGSize)viewMinSize;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)validateLocalToolbarButton:(id)arg1;
- (BOOL)validateToolbarButton:(id)arg1;
- (BOOL)validateLocalUserInterfaceItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)moduleForAction:(SEL)arg1;
- (id)allModuleActions;
- (id)targetModuleActions;
- (id)localModuleActions;
- (id)targetModules;
- (void)clearActionCache;
- (id)actionCache;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarAllowedItemIdentifiers;
- (BOOL)acceptsFirstResponder;
- (BOOL)isAncestorOfModule:(id)arg1;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)_module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)_module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (id)submoduleWithIdentifier:(id)arg1;
- (id)submodules;
- (id)supermodule;
- (void)setSupermodule:(id)arg1;
- (void)insertSubmodule:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeSubmodule:(id)arg1;
- (void)removeSubmodules:(id)arg1;
- (void)addSubmodule:(id)arg1;
- (void)updateRecursivelyIfNeeded;
- (void)updateIfNeeded;
- (void)update;
- (void)noteNeedsUpdate:(id)arg1;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)_informWindowControllerOfUpdateStatus;
- (BOOL)needsUpdate;
- (id)document;
- (void)showWindow:(id)arg1;
- (BOOL)containsActiveModule;
- (BOOL)isActive;
- (id)windowController;
- (id)window;
- (id)windowTitle;
- (void)moduleDidChangeLabel:(id)arg1;
- (void)moduleDidChangeIdentifier:(id)arg1;
- (id)representedFilename;
- (id)label;
- (void)setLabelAsFilename:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabel:(id)arg1 representedFilename:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (id)lastKeyView;
- (id)firstKeyView;
- (BOOL)_ignoreBorderPadding;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)_moduleViewWillBeRemoved:(id)arg1;
- (void)viewWillBeRemoved;
- (BOOL)isViewInstalled;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)_moduleViewWasInstalled:(id)arg1;
- (void)viewWasInstalled;
- (void)viewDidLoad;
- (void)_doPendingLayout;
- (void)_viewDidLoad;
- (void)awakeFromNib;
- (BOOL)loadView;
- (void)viewWillLoad;
- (void)_viewWillLoad;
- (void)loadWindow;
- (id)view;
- (void)setView:(id)arg1;
- (BOOL)isNibLoaded;
- (void)loadNib;
- (id)nibOwner;
- (id)moduleNibName;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (id)initWithModuleNibName:(id)arg1 quarantined:(BOOL)arg2;
- (id)init;
- (id)splitterHandle;
- (BOOL)wantsFirstResponder;
- (id)tabLabel;

@end

