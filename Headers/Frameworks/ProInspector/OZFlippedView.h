//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTrackingArea, OZViewController;

@interface OZFlippedView : NSView
{
    BOOL _isBrick;
    BOOL _isBrickWithinBrick;
    BOOL _isCollapsed;
    BOOL _isOuterGroup;
    BOOL _isInnerGroup;
    BOOL _isSelected;
    BOOL _isSelectable;
    BOOL _isRow;
    BOOL _isBrickHeading;
    BOOL _didDrag;
    BOOL _isMouseDown;
    BOOL _isInFocusedPane;
    BOOL _isIgnoringMouseEvents;
    BOOL _isPrimarySeparatorEnabled;
    BOOL _isSecondarySeparatorEnabled;
    BOOL _recursiveSecondarySeparatorDisabled;
    BOOL _isAlternatingGroupContainer;
    BOOL _isAlternatingBlock;
    BOOL _noDividerLine;
    BOOL _forceDrawSelectionHighlight;
    BOOL _drawsGroupBox;
    unsigned int _containerFlags;
    BOOL _isMaterialLayer;
    BOOL _isLevelOneBrick;
    BOOL _isMaterialLayerBackground;
    BOOL _acceptsDrag;
    BOOL _drawsDragAcceptOutline;
    struct CGPoint _downLocation;
    SEL _doubleClickAction;
    id _pTarget;
    id _pResizeDelegate;
    OZViewController *_pController;
    NSTrackingArea *_trackingArea;
    OZViewController *_trackingAreaOwner;
    NSView *_customContainerView;
    BOOL _drawsBrick;
    BOOL _forceNonUserEffectsDrawing;
}

@property(nonatomic) BOOL forceNonUserEffectsDrawing; // @synthesize forceNonUserEffectsDrawing=_forceNonUserEffectsDrawing;
@property(nonatomic) BOOL drawsBrick; // @synthesize drawsBrick=_drawsBrick;
@property(retain, nonatomic) NSView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(nonatomic) BOOL noDividerLine; // @synthesize noDividerLine=_noDividerLine;
@property(nonatomic) BOOL isAlternatingBlock; // @synthesize isAlternatingBlock=_isAlternatingBlock;
@property(nonatomic) BOOL isAlternatingGroupContainer; // @synthesize isAlternatingGroupContainer=_isAlternatingGroupContainer;
@property(nonatomic) BOOL recursiveSecondarySeparatorDisabled; // @synthesize recursiveSecondarySeparatorDisabled=_recursiveSecondarySeparatorDisabled;
@property(nonatomic) BOOL isMaterialLayerBackground; // @synthesize isMaterialLayerBackground=_isMaterialLayerBackground;
@property(nonatomic) BOOL isLevelOneBrick; // @synthesize isLevelOneBrick=_isLevelOneBrick;
@property(nonatomic) BOOL isMaterialLayer; // @synthesize isMaterialLayer=_isMaterialLayer;
@property(nonatomic) BOOL drawsGroupBox; // @synthesize drawsGroupBox=_drawsGroupBox;
@property(nonatomic) OZViewController *viewController; // @synthesize viewController=_pController;
@property(nonatomic) id resizeDelegate; // @synthesize resizeDelegate=_pResizeDelegate;
@property(nonatomic) id target; // @synthesize target=_pTarget;
@property(nonatomic) SEL doubleClickAction; // @synthesize doubleClickAction=_doubleClickAction;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL forceDrawSelectionHighlight; // @synthesize forceDrawSelectionHighlight=_forceDrawSelectionHighlight;
@property(nonatomic) BOOL isBrickHeading; // @synthesize isBrickHeading=_isBrickHeading;
@property(nonatomic) BOOL isRow; // @synthesize isRow=_isRow;
@property(nonatomic) BOOL isInnerGroup; // @synthesize isInnerGroup=_isInnerGroup;
@property(nonatomic) BOOL isOuterGroup; // @synthesize isOuterGroup=_isOuterGroup;
@property(nonatomic) BOOL isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(nonatomic) BOOL isBrickWithinBrick; // @synthesize isBrickWithinBrick=_isBrickWithinBrick;
@property(nonatomic) BOOL isBrick; // @synthesize isBrick=_isBrick;
- (BOOL)lockFocusIfCanDraw;
- (BOOL)isAnyParentSelected;
- (BOOL)isTextMaterialContainerSubview;
- (void)subViewOfOneOfContainerFlags:(char *)arg1 colorEffectsSubview:(char *)arg2 maskEffectsSubview:(char *)arg3 colorHeaderSubview:(char *)arg4;
- (BOOL)isColorHeaderSubview;
- (BOOL)isMaskEffectsSubview;
- (BOOL)isColorEffectsSubview;
- (BOOL)isUserEffectsSubview;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)isRecursiveSecondarySeparatorDisabled;
- (void)setIsSecondarySeparatorEnabled:(_Bool)arg1;
- (void)setIsPrimarySeparatorEnabled:(_Bool)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_installTrackingArea:(id)arg1;
- (void)enableViewTrackingArea:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(nonatomic) BOOL drawsDragAcceptOutline;
@property(nonatomic) BOOL acceptsDrag;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)drawRect:(struct CGRect)arg1;
- (void)makeRectAdjustmentsForMaskPosition:(struct CGRect *)arg1;
- (BOOL)isUserEffectsColorEffectsColorMaskColorEffectHeaderContainer:(char *)arg1 colorEffectsSubview:(char *)arg2 maskEffectsSubview:(char *)arg3 colorHeaderSubview:(char *)arg4;
- (BOOL)isColorEffectsHeaderContainer;
- (BOOL)isTextMaterialContainer;
- (BOOL)isColorMaskEffectsContainer;
- (BOOL)isColorEffectsContainer;
- (BOOL)isUserEffectsContainer;
- (void)setIsTextMaterialContainer:(BOOL)arg1;
- (void)setIsColorEffectsHeaderContainer:(BOOL)arg1;
- (void)setIsColorMaskEffectsContainer:(BOOL)arg1;
- (void)setIsColorEffectsContainer:(BOOL)arg1;
- (void)setIsUserEffectsContainer:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

