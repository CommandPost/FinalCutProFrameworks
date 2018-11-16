//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKTextFieldCell.h>

@class LKButtonCell;

@interface LKScrubberCell : LKTextFieldCell
{
    struct __LKSCFlags {
        unsigned int actionType:2;
        unsigned int autorepeat:1;
        unsigned int valueChanged:1;
        unsigned int targetNotified:1;
        unsigned int rolloverState:1;
        unsigned int tintIndex:3;
        unsigned int isScrubbing:1;
        unsigned int isMagnifiedFont:1;
        unsigned int reserved:21;
    } _pscFlags;
    LKButtonCell *_decrementButtonCell;
    LKButtonCell *_incrementButtonCell;
    double _previousValue;
    double _minValue;
    double _maxValue;
    double _fineIncrement;
    double _normalIncrement;
    double _coarseIncrement;
    float _dragTolerance;
}

+ (void)initialize;
- (BOOL)_targetNotified;
- (double)_previousValue;
- (void)_setActionType:(long long)arg1;
- (long long)_actionType;
- (BOOL)_isEditing;
- (void)_exitEditState;
- (void)_enterEditState;
- (void)_exitIntermediateState;
- (void)_enterIntermediateState;
- (void)_trackScrubforEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)setState:(long long)arg1;
- (void)_trackButton:(id)arg1 forEvent:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4;
- (void)_textScrubberIncrement:(id)arg1;
- (void)_textScrubberDecrement:(id)arg1;
- (void)_textDidEndEditing:(id)arg1;
- (void)setIsMagnifiedFont:(BOOL)arg1;
- (BOOL)isMagnifiedFont;
- (void)setTintIndex:(long long)arg1;
- (long long)tintIndex;
- (BOOL)_canTint;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_shouldDrawHighlight;
- (BOOL)drawFocusRing;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)trackingRectForCellFrame:(struct CGRect)arg1;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_allowTextEntry;
- (BOOL)isScrubbingDisabled;
- (BOOL)_controlView:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)endEditing:(id)arg1;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (void)_drawProThemeBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)_proScrubberTextWidthForValue:(double)arg1;
- (struct CGRect)incrementButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)decrementButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_buttonRectForBounds:(struct CGRect)arg1 buttonCell:(id)arg2 onRight:(BOOL)arg3;
- (double)_verticalMargin;
- (struct CGRect)_focusRingFrameForFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (struct CGRect)scrubberTextRectForBounds:(struct CGRect)arg1;
- (void)resetIncrementButtonCell;
- (void)resetDecrementButtonCell;
- (void)_configureStepperCell:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)_proScrubberSetEditable:(BOOL)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)rolloverCursor;
- (void)setRolloverState:(long long)arg1;
- (long long)rolloverState;
- (long long)actionType;
- (BOOL)autorepeat;
- (void)setAutorepeat:(BOOL)arg1;
- (double)fineIncrement;
- (void)setFineIncrement:(double)arg1;
- (double)normalIncrement;
- (void)setNormalIncrement:(double)arg1;
- (double)coarseIncrement;
- (void)setCoarseIncrement:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (id)incrementButtonCell;
- (void)setIncrementButtonCell:(id)arg1;
- (id)decrementButtonCell;
- (void)setDecrementButtonCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

