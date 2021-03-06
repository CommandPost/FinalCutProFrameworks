//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class LKButtonCell, LKTextFieldCell, NSAttributedString, NSColor, NSLayoutManager, NSMutableArray, NSString, NSText, NSTextContainer, NSTextStorage;

@interface LKSegmentedScrubberCell : NSTextFieldCell
{
    struct _LKSSCFlags _psscFlags;
    NSColor *_customBackgroundColor;
    NSColor *_customTextColor;
    NSColor *_nonScrubbingTextColor;
    NSColor *_rolloverBackgroundColor;
    double _dragTolerance;
    double _normalSensitivity;
    double _coarseSensitivity;
    double _fineSensitivity;
    LKTextFieldCell *_textCell;
    LKTextFieldCell *_backgroundCell;
    LKButtonCell *_decrementButtonCell;
    LKButtonCell *_incrementButtonCell;
    long long _segmentCount;
    long long _previousRolloverSegmentIndex;
    long long _selectedSegmentTag;
    long long _unmodifiedSelectedSegmentTag;
    NSText *_editor;
    id _previousValue;
    NSString *_previousString;
    struct CGRect _editingCellFrame;
    double _xScale;
    double _yScale;
    double _textWidth;
    double _yBaselineDelta;
    NSMutableArray *_segmentBounds;
    long long _rolloverSegmentTag;
    id _initialValue;
    id _previousObjectValue;
    NSAttributedString *_displayedString;
    void *_proReserved2;
    void *_proReserved3;
    struct CGRect _unused[15];
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    BOOL _isDisplayingPlaceHolder;
    BOOL _isEditing;
}

+ (void)getXOffset:(double *)arg1 yOffset:(double *)arg2 forFont:(id)arg3 withAlignment:(long long)arg4 inFrameWidth:(double)arg5 typesetterBehavior:(long long)arg6;
+ (void)initialize;
- (void)setAttributedStringValue:(id)arg1;
- (id)_placeHolderStringformatterTypeBased;
- (BOOL)_validateEntryString:(id)arg1 uiHandled:(char *)arg2;
- (BOOL)isEntryAcceptable:(id)arg1;
- (BOOL)_objectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (void)didRequestObjectValueFromFormatter;
- (void)willRequestObjectValueFromFormatter;
- (void)setFormatter:(id)arg1;
- (void)didSetFormatter;
- (void)willRemoveFormatter;
- (void)timecodeFormatterFormatChangedNotification:(id)arg1;
- (void)scrubbableFormatterFormatChangedNotification:(id)arg1;
- (BOOL)_updateForMinMaxChangeNotification:(id)arg1;
- (struct CGRect)_focusRingFrameForFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (void)_drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateSegmentLayoutWithFrame:(struct CGRect)arg1;
- (void)updateSegmentLayoutWithFrame:(struct CGRect)arg1 isRequired:(BOOL)arg2;
- (void)drawRoundBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_drawEditFocusRing;
- (BOOL)_drawBezelFocusRing;
- (BOOL)_allowFocusRing;
- (unsigned long long)focusRingType;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTableRolloverBackgroundInFrame:(struct CGRect)arg1;
- (struct CGRect)rolloverPillRectInFrame:(struct CGRect)arg1;
- (BOOL)showingRolloverPillIfNotScrubbing;
- (BOOL)showingScrubbingPill;
- (void)drawSegmentSelectionOrRolloverWithFrame:(struct CGRect)arg1;
- (struct CGRect)_bezelFrameForScrubbingArrowsInFrame:(struct CGRect)arg1;
- (void)_displayArrowsScrubbingUp:(BOOL)arg1;
- (void)_displayArrowsForScrubbing:(BOOL)arg1;
- (void)_displayScrubbingArrowsForSegmentAtIndex:(long long)arg1;
- (void)_displayCaretForSegmentIndex:(long long)arg1;
- (BOOL)inIBDesignMode;
- (long long)currentRolloverSegmentIndexInFrame:(struct CGRect)arg1;
- (BOOL)_drawsCaret;
- (BOOL)selectSegmentAtLocation:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2;
- (struct CGRect)rolloverFrameForIndex:(long long)arg1;
- (struct CGRect)segmentFrameForIndex:(long long)arg1;
- (long long)segmentCount;
- (struct CGSize)segmentPadding;
- (void)layoutTextAndSegmentsWithFrame:(struct CGRect)arg1 doDraw:(BOOL)arg2;
- (BOOL)isPerformingLayout;
- (void)setIsPerformingLayout:(BOOL)arg1;
- (void)invalidateLayout;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)editCellFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)editBezelFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)roundBezelRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (BOOL)isOpaque;
- (void)setEditable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (void)updateControlView:(id)arg1;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGRect)trackingRectForCellFrame:(struct CGRect)arg1 atIndex:(long long)arg2;
- (long long)trackingRectCountForCellFrame:(struct CGRect)arg1 objectValue:(id)arg2;
- (void)setRolloverState:(long long)arg1;
- (long long)rolloverState;
- (struct CGRect)trackingRectForCellFrame:(struct CGRect)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)trackButton:(id)arg1 forEvent:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4;
- (void)trackScrubbingforEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atLocation:(struct CGPoint)arg4;
- (BOOL)acceptsFirstResponderDuringEdit;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_controlWindowDidResignKeyNotification:(id)arg1;
- (void)_restoreCursorAfterScrubbing;
- (void)_setActionType:(long long)arg1;
- (long long)actionType;
- (BOOL)_targetNotified;
- (void)_setTargetNotified:(BOOL)arg1;
- (id)_previousString;
- (void)_willAttemptResignFirstResponder;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)exitEditStateWithNotification:(id)arg1;
- (void)enterEditStateInFrame:(struct CGRect)arg1 editSegment:(BOOL)arg2;
- (BOOL)_controlView:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)isEditing;
- (void)_cacheStringAndObjectValues;
- (id)_activeStringValue;
- (id)_activeObjectValue;
- (void)clearCachedEditingValues;
- (void)_proRomanTextFieldEditorWillMoveToNilSuperviewNotification:(id)arg1;
- (void)_proRomanTextFieldEditorDidMoveToValidSuperviewNotification:(id)arg1;
- (void)_stopObservingFieldEditorSuperviewNotifications;
- (void)_startObservingFieldEditorSuperviewNotifications;
- (void)clearSelectedSegment;
- (long long)selectedSegmentIndex;
- (long long)selectedSegmentTag;
- (id)currentObjectValue;
- (void)setDefaultSegmentSelectionIfNecessary;
- (void)setDefaultSegmentSelectionIfNecessary:(BOOL)arg1;
- (void)setSelectedSegmentTag:(long long)arg1 isTemporary:(BOOL)arg2;
- (void)exitSelectedState;
- (void)enterSelectedState;
- (BOOL)escapeSegmentEditing;
- (void)focusDefaultSegment;
- (void)focusSelectedSegment;
- (BOOL)hasSegmentFocus;
- (BOOL)isFocused;
- (void)selectLastSegment;
- (void)selectFirstSegment;
- (void)moveSelectedSegmentRight;
- (void)moveSelectedSegmentLeft;
- (void)decrementAction:(id)arg1;
- (void)incrementAction:(id)arg1;
- (void)buttonAction:(id)arg1 isIncreasing:(BOOL)arg2;
- (void)incrementSelectedSegmentBy:(long long)arg1;
- (void)_incrementSelectedSegmentBy:(long long)arg1;
- (void)updateModifierFlags:(id)arg1;
- (id)decrementButtonCell;
- (id)incrementButtonCell;
- (struct CGRect)decrementButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)incrementButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)buttonRectForBounds:(struct CGRect)arg1 buttonCell:(id)arg2 isLeft:(BOOL)arg3;
- (double)_verticalMargin;
- (struct CGSize)_buttonSize;
- (void)resetButtonCells;
- (void)resetButtonCell:(id *)arg1 withSelector:(SEL)arg2;
- (void)setMouseIsInsideRightButton:(BOOL)arg1;
- (void)setMouseIsInsideLeftButton:(BOOL)arg1;
- (void)updateButtonCellImages;
- (void)updateButtonAutorepeat;
- (void)updateButtonEnabling;
- (id)initialValue;
- (void)setInitialValue:(id)arg1;
- (id)placeholderValue;
- (void)setPlaceholderValue:(id)arg1;
- (void)setNeedsSelectedTextColorForEditing:(id)arg1;
- (void)setIsInHighlightedRow:(id)arg1;
- (BOOL)isRomanOnly;
- (void)setRomanOnly:(BOOL)arg1;
- (BOOL)autorepeat;
- (void)setAutorepeat:(BOOL)arg1;
@property(nonatomic) long long formatterType;
- (double)fineSensitivity;
- (void)setFineSensitivity:(double)arg1;
- (double)coarseSensitivity;
- (void)setCoarseSensitivity:(double)arg1;
- (double)normalSensitivity;
- (void)setNormalSensitivity:(double)arg1;
- (double)dragTolerance;
- (void)setDragTolerance:(double)arg1;
- (id)inactiveScrubbingArrowColor;
- (id)activeScrubbingArrowColor;
- (id)selectedTextColor;
- (id)selectedBackgroundColor;
- (void)setCustomRolloverBackgroundColor:(id)arg1;
- (id)customRolloverBackgroundColor;
- (id)rolloverBackgroundColor;
- (void)setCustomNonScrubbingTextColor:(id)arg1;
- (id)customNonScrubbingTextColor;
- (id)nonScrubbingTextColor;
- (id)scrubbingTextColor;
- (id)scrubbingTextColorForSegmentTag:(long long)arg1;
- (id)tableRolloverPillColor;
- (id)tableScrubbingPillColor;
- (void)setCustomTextColor:(id)arg1;
- (id)customTextColor;
- (id)textColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)customBackgroundColor;
- (BOOL)scalesTextToFit;
- (void)setScalesTextToFit:(BOOL)arg1;
- (BOOL)isRevealedStyle;
- (BOOL)isBezelStyle;
- (BOOL)isDisplayStyle;
- (BOOL)isTableCellStyle;
- (void)resetDefaultAppearance;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void)setTintIndex:(long long)arg1;
- (long long)tintIndex;
- (BOOL)_canTint;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initTextCell:(id)arg1;
- (void)_setupFormatter;
- (void)commonInit;
- (void)commonInitSegmentedScrubberCell;
- (void)commonInitCell;
- (void)formatTextCellForEditing:(id)arg1;
- (void)createTextCell;
- (id)textCell;
- (Class)textFieldCellClass;
- (id)initImageCell:(id)arg1;

@end

