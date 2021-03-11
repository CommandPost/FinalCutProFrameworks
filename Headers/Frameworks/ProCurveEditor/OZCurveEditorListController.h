//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProCurveEditor/NSOutlineViewDelegate-Protocol.h>

@class NSNumberFormatter, NSString, OZBoolFormatter, OZCurveEditorChannelList, OZCurveEditorCtrl, OZDecibelFormatter;

@interface OZCurveEditorListController : NSObject <NSOutlineViewDelegate>
{
    OZCurveEditorCtrl *_mainCurveEditorController;
    OZCurveEditorChannelList *_outlineView;
    NSNumberFormatter *_valueFormatter;
    OZDecibelFormatter *_decibelFormatter;
    OZBoolFormatter *_boolFormatter;
    long long _mouseInRow;
    long long _mouseInPartIndex;
    struct OZChannelBase *_mouseInChan;
    BOOL _mouseDown;
    BOOL _selectedHasPreviousKeyframe;
    BOOL _selectedHasNextKeyframe;
    struct OZChannelBase *_cellClickedChannel;
}

@property(nonatomic) BOOL mouseDown; // @synthesize mouseDown=_mouseDown;
- (void)resetSelection;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (struct OZChannelBase *)cellClickedChannel;
- (void)setCellClickedChannel:(struct OZChannelBase *)arg1;
- (BOOL)outlineView:(id)arg1 canBeginDragInColumn:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)refreshRowWithoutTitle:(unsigned int)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)truncatedString:(id)arg1;
- (int)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3;
- (long long)mouseInRow;
- (void)setMouseInRow:(long long)arg1 part:(long long)arg2 chan:(struct OZChannelBase *)arg3;
- (id)mainCurveEditorController;
- (void)setChannelValue:(id)arg1;
- (void)endScrubberAction:(id)arg1;
- (void)startScrubberAction:(id)arg1;
- (void)update;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (long long)mouseInPartIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

