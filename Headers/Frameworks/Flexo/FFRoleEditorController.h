//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FFRoleColorPickerTableViewProtocol.h"
#import "FFRoleEditorOutlineViewProtocol.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class FFLibrary, FFRole, FFRoleEditorDFRController, FFRoleEditorOutlineView, NSButton, NSMutableArray, NSMutableAttributedString, NSPopover, NSScrollView, NSString, NSTableView, NSView;

@interface FFRoleEditorController : NSWindowController <FFRoleEditorOutlineViewProtocol, FFRoleColorPickerTableViewProtocol, NSOutlineViewDataSource, NSOutlineViewDelegate, NSTableViewDelegate, NSTableViewDataSource, NSWindowDelegate, NSTextFieldDelegate, NSPopoverDelegate>
{
    FFLibrary *_library;
    NSMutableArray *_rootMainRoles;
    NSMutableArray *_rootVideoRoles;
    NSMutableArray *_rootAudioRoles;
    FFRole *_rootVideoHeaderRole;
    FFRole *_rootAudioHeaderRole;
    NSMutableArray *_actions;
    BOOL _observingFirstResponder;
    FFRoleEditorDFRController *_dfrController;
    long long _insideControlTextDidEndEditing;
    BOOL _runningModal;
    BOOL _saveBeforeClosing;
    FFRoleEditorOutlineView *_outlineView;
    NSScrollView *_scrollView;
    NSTableView *_colorPickerTableView;
    NSView *_colorPickerHUDView;
    NSButton *_applyButton;
    NSButton *_cancelButton;
    FFRole *_hoverRole;
    FFRole *_hoverMainRole;
    FFRole *_dragSrcRole;
    FFRole *_dropDstRole;
    NSMutableAttributedString *_showText;
    NSMutableAttributedString *_hideText;
    NSMutableAttributedString *_addSubroleText;
    NSMutableAttributedString *_videoText;
    NSMutableAttributedString *_audioText;
    NSMutableAttributedString *_addVideoText;
    NSMutableAttributedString *_addAudioText;
    NSPopover *_colorPickerHUD;
    FFRole *_colorPickerRole;
    long long _colorPickerRow;
}

+ (id)_nameForNewSubRoleInMainRole:(id)arg1;
+ (BOOL)_roleName:(id)arg1 alreadyUsedByMainRole:(id)arg2 orOneOfItsSubrolesOtherThan:(id)arg3;
+ (id)openedInstance;
@property(nonatomic) long long colorPickerRow; // @synthesize colorPickerRow=_colorPickerRow;
@property(retain, nonatomic) FFRole *colorPickerRole; // @synthesize colorPickerRole=_colorPickerRole;
@property(retain, nonatomic) NSPopover *colorPickerHUD; // @synthesize colorPickerHUD=_colorPickerHUD;
@property(retain, nonatomic) NSMutableAttributedString *addAudioText; // @synthesize addAudioText=_addAudioText;
@property(retain, nonatomic) NSMutableAttributedString *addVideoText; // @synthesize addVideoText=_addVideoText;
@property(retain, nonatomic) NSMutableAttributedString *audioText; // @synthesize audioText=_audioText;
@property(retain, nonatomic) NSMutableAttributedString *videoText; // @synthesize videoText=_videoText;
@property(retain, nonatomic) NSMutableAttributedString *addSubroleText; // @synthesize addSubroleText=_addSubroleText;
@property(retain, nonatomic) NSMutableAttributedString *hideText; // @synthesize hideText=_hideText;
@property(retain, nonatomic) NSMutableAttributedString *showText; // @synthesize showText=_showText;
@property(retain, nonatomic) FFRole *dropDstRole; // @synthesize dropDstRole=_dropDstRole;
@property(retain, nonatomic) FFRole *dragSrcRole; // @synthesize dragSrcRole=_dragSrcRole;
@property(retain, nonatomic) FFRole *hoverMainRole; // @synthesize hoverMainRole=_hoverMainRole;
@property(retain, nonatomic) FFRole *hoverRole; // @synthesize hoverRole=_hoverRole;
@property(nonatomic) BOOL saveBeforeClosing; // @synthesize saveBeforeClosing=_saveBeforeClosing;
@property(nonatomic) BOOL runningModal; // @synthesize runningModal=_runningModal;
@property(nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) NSButton *applyButton; // @synthesize applyButton=_applyButton;
@property(nonatomic) NSView *colorPickerHUDView; // @synthesize colorPickerHUDView=_colorPickerHUDView;
@property(nonatomic) NSTableView *colorPickerTableView; // @synthesize colorPickerTableView=_colorPickerTableView;
@property(nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) FFRoleEditorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void)_removeFirstResponderObserving;
- (void)_addFirstResponderObserving;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 updateDraggingItemsForDrag:(id)arg2;
- (void)_updateDragDropSelection;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)_canRenameRole:(id)arg1 toName:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)clickOnCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)popoverDidShow:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)closeColorPickerHUD;
- (void)_showColorPickerOverView:(id)arg1 onRow:(long long)arg2;
- (BOOL)isColorPickerHUDDisplayed;
- (long long)_roleColorIndexForColorPickerRowIndex:(long long)arg1 colIndex:(long long)arg2;
- (id)_nameForNewMainRoleOfType:(int)arg1;
- (BOOL)_roleName:(id)arg1 alreadyUsedByMainRoleOtherThan:(id)arg2;
- (id)_reservedRoleNameInConflictWith:(id)arg1;
- (BOOL)_canDeleteRole:(id)arg1;
- (BOOL)_canRenameRole:(id)arg1;
- (void)showHideSubRoles:(id)arg1;
- (void)addMainRole:(id)arg1;
- (void)addSubRole:(id)arg1;
- (void)removeRole:(id)arg1;
- (void)openColorPicker:(id)arg1;
- (void)cancelEditorWindow:(id)arg1;
- (void)saveAndCloseEditorWindow:(id)arg1;
- (void)mouseOverRole:(id)arg1 forOutlineView:(id)arg2;
- (void)_hoverRoleHasChanged;
- (void)_updateTableCellView:(id)arg1 forRole:(id)arg2;
- (id)_tableCellViewForRole:(id)arg1;
- (void)_hideSubRolesForMainRole:(id)arg1;
- (void)_showSubRolesForMainRole:(id)arg1;
- (void)_removeMainRole:(id)arg1;
- (void)_removeSubRole:(id)arg1 fromMainRole:(id)arg2;
- (void)_clearHoverIfRole:(id)arg1;
- (void)_moveSubRole:(id)arg1 inMainRole:(id)arg2 toSubRole:(id)arg3 inMainRole:(id)arg4;
- (void)_registerUndoMoveSubRole:(id)arg1 inMainRole:(id)arg2 toSubRole:(id)arg3 inMainRole:(id)arg4;
- (void)_mergeSubRole:(id)arg1 inMainRole:(id)arg2 toSubRole:(id)arg3 inMainRole:(id)arg4;
- (void)_registerUndoMergeSubRole:(id)arg1 inMainRole:(id)arg2 toSubRole:(id)arg3 inMainRole:(id)arg4;
- (void)_changeColorIndex:(id)arg1 forRole:(id)arg2;
- (void)_registerUndoChangeColorForRole:(id)arg1;
- (void)_renameRole:(id)arg1 parentRole:(id)arg2 toName:(id)arg3;
- (void)_swapRole:(id)arg1 inParentRole:(id)arg2 withRole:(id)arg3;
- (void)_registerUndoSwapRole:(id)arg1 inParentRole:(id)arg2 withRole:(id)arg3;
- (void)_renameRoleGroup:(id)arg1 toName:(id)arg2;
- (void)_registerUndoRenameRoleGroup:(id)arg1 toName:(id)arg2;
- (void)_registerUndoDeleteRole:(id)arg1 parentRole:(id)arg2;
- (void)_registerUndoAddRole:(id)arg1 parentRole:(id)arg2;
- (void)_removeAction:(id)arg1;
- (void)_addAction:(id)arg1;
- (void)_debugLogActions;
- (void)_scrollRoleIntoView:(id)arg1;
- (void)_addMainRole:(id)arg1;
- (void)_addMainRoleOfRoleType:(int)arg1;
- (void)_addSubRole:(id)arg1 toMainRole:(id)arg2;
- (void)_addSubRoleWithName:(id)arg1 toMainRole:(id)arg2;
- (BOOL)_tryToEndEditing;
- (BOOL)_isEditing;
- (void)_beginEditingOfNameForRole:(id)arg1;
- (void)_firstResponderChanged:(id)arg1;
- (void)_deferredRenameOfRole:(id)arg1;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineViewClicked:(id)arg1;
- (void)_removeItemAtRow:(long long)arg1;
- (BOOL)_hasPendingMergeOrMoveIntoToRole:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (id)_findRoleInLibraryWithUID:(id)arg1;
- (id)_findSubRoleInDialogWithUID:(id)arg1;
- (id)_findMainRoleInDialogWithUID:(id)arg1;
- (long long)runModalSheet:(id)arg1 forWindow:(id)arg2;
- (BOOL)_confirmChanges;
- (BOOL)windowShouldClose:(id)arg1;
- (id)_consolidateAllActions;
- (void)_saveExpandedMainRoleStates;
- (void)_restoreExpandedMainRoleStates;
- (long long)runModal;
- (void)windowDidLoad;
- (void)_reloadOutlineView:(id)arg1;
- (void)_rebuildRootMainRoles;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)_saveWindowFrame;
- (BOOL)hasExpandedItem;
- (void)showHideAllSubRoles;
- (void)addMainAudioRole;
- (void)addMainVideoRole;
- (id)touchBar;
- (void)dealloc;
- (void)_setupAttributedStrings;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

