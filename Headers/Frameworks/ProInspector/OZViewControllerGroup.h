//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class NSMutableArray;

@interface OZViewControllerGroup : OZViewController
{
    NSMutableArray *_pControllers;
    BOOL _isIndented;
    BOOL _isCollapsed;
    BOOL _ignoreChanCollapsedState;
    BOOL _isBrick;
    BOOL _drawsBrick;
    BOOL _isEnclosedGroup;
    BOOL _isTargetingSubctlrChans;
    BOOL _isUserEffectsContainer;
    BOOL _isTextMaterialContainer;
    int _dragInsertionIndex;
    double _totalInsertionHeight;
    unsigned long long _cachedSourceOperationMask;
    unsigned int _resetType;
    BOOL _viewExpandedVerticalPaddingApplied;
    id <OZUISupervisor> _pSupervisor;
}

+ (double)viewExpandedVerticalPadding;
+ (id)parameterControllerForChan:(struct OZChannelBase *)arg1 context:(id)arg2;
+ (id)labelControllerForChan:(struct OZChannelBase *)arg1 context:(id)arg2;
@property(nonatomic) BOOL ignoreChanCollapsedState; // @synthesize ignoreChanCollapsedState=_ignoreChanCollapsedState;
@property(nonatomic) BOOL isTargetingSubctlrChans; // @synthesize isTargetingSubctlrChans=_isTargetingSubctlrChans;
@property(nonatomic) unsigned int resetType; // @synthesize resetType=_resetType;
@property(nonatomic) BOOL viewExpandedVerticalPaddingApplied; // @synthesize viewExpandedVerticalPaddingApplied=_viewExpandedVerticalPaddingApplied;
- (void)draggingShowSubcontroller:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)draggingHideSubcontroller:(id)arg1;
- (void)cancelDragInsertionHeight:(double)arg1;
- (void)setDragInsertionAbove:(id)arg1 insertionHeight:(double)arg2;
- (id)connectKeyViewsRec:(id)arg1;
- (void)connectKeyViews;
- (BOOL)hasControls;
- (id)subcontrollers;
- (id)getSubgroup;
- (void)resizedSubview:(id)arg1 byDeltaY:(float)arg2;
- (void)updateViewFinalFrame;
- (void)expandForChan:(struct OZChannelBase *)arg1;
- (void)collapseChildren;
- (void)toggleDisclosure:(id)arg1;
- (void)didTwiddle:(BOOL)arg1;
- (void)twiddle;
- (void)toggleCollapsed;
- (void)setIsCollapsed:(BOOL)arg1;
- (BOOL)isCollapsed;
- (void)expand;
- (void)collapse;
- (BOOL)viewIsAnimatingIn:(id)arg1;
- (BOOL)viewIsAnimatingOut:(id)arg1;
- (void)updateHideShowState;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (void)setSupervisor:(id)arg1;
- (void)addDependencyFrom:(struct OZChannelBase *)arg1 to:(struct OZChannelBase *)arg2 type:(int)arg3;
- (void)aboutToChangeController;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (BOOL)resetAssociatedChannel:(struct OZChannelBase *)arg1;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3 recursive:(BOOL)arg4;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)addAnimIndicatorAndPulldownMenu:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)controllerForLocation:(struct CGPoint)arg1 useFinalFrame:(BOOL)arg2;
- (id)getControllerForChan:(struct OZChannelBase *)arg1;
- (id)augmentUIWithFolder:(struct OZChannelFolder *)arg1 context:(id)arg2;
- (id)augmentUIWithChan:(struct OZChannelBase *)arg1 insertAtIndex:(unsigned long long)arg2 context:(id)arg3;
- (id)augmentUIWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)augmentUIWithFolder:(struct OZChannelFolder *)arg1;
- (id)augmentUIWithChan:(struct OZChannelBase *)arg1;
- (void)appendSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendSubview:(id)arg1;
- (double)yOffsetOfNextAppend;
- (void)clear;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1 appendSubview:(BOOL)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)doDrag:(list_e5c8e430 *)arg1 viewList:(id)arg2;
- (void)doDrag:(id)arg1;
- (void)getSelectedControllers:(id)arg1 doShallowSearch:(BOOL)arg2;
- (void)getTargetChannels:(set_759369c4 *)arg1;
- (void)setIsTargetingSubctlrChans:(BOOL)arg1 recurse:(BOOL)arg2;
- (void)reset;
- (void)setResetType:(unsigned int)arg1 recurse:(BOOL)arg2;
- (void)selectAll;
- (void)selectChildren;
- (id)findFirstSelectedController;
- (void)paste;
- (void)copyAction;
- (void)cut;
- (void)deleteThisHelper;
- (float)suggestedMaxParamWidth;
- (float)suggestedMinParamWidth;
- (float)suggestedMaxLabelWidth;
- (float)suggestedMinLabelWidth;
- (void)willTeardownUI;
- (void)didBuildUI;
- (void)setDisclosureTriangleIndentLevel:(id)arg1;
- (void)disclosureTriangleIndent;
- (void)indent;
- (int)indentLevel;
- (void)setIsTextMaterialContainer:(BOOL)arg1;
- (void)setIsUserEffectsContainer:(BOOL)arg1;
- (BOOL)isEnclosedGroup;
- (void)setIsEnclosedGroup:(BOOL)arg1;
- (BOOL)drawsBrick;
- (void)setDrawsBrick:(BOOL)arg1;
- (BOOL)isBrick;
- (void)setIsBrick:(BOOL)arg1;
- (double)brickVerticalGap;
- (void)highlightChannel:(struct OZChannelBase *)arg1;
- (void)updateBackgroundColor;
- (void)select:(BOOL)arg1 excludeChannel:(struct OZChannelBase *)arg2;
- (void)select:(BOOL)arg1;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)updateEnableState;
- (void)disable;
- (void)enable;
- (void)setIsEnabled:(BOOL)arg1 recurse:(BOOL)arg2;
- (void)setIgnoreChanEnableState:(BOOL)arg1 recurse:(BOOL)arg2;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)initWithView:(id)arg1 context:(id)arg2;

@end

