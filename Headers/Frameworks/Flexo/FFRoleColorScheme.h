//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSMapTable;

__attribute__((visibility("hidden")))
@interface FFRoleColorScheme : NSObject
{
    NSMapTable *_highlightedColorCache;
    NSColor *_baseColor;
    NSColor *_foregroundColor;
    NSColor *_backgroundColor;
    NSColor *_itemForegroundColor;
    NSColor *_itemBackgroundColor;
    NSColor *_itemBackgroundLighterColor;
    NSColor *_itemBackgroundT139Color;
    NSColor *_itemBackgroundDarkerColor;
    NSColor *_itemUnfocusedBackgroundColor;
    NSColor *_audioWaveformColor;
    NSColor *_referenceWaveformColor;
    NSColor *_referenceWaveformLighterColor;
    NSColor *_referenceWaveformDarkerColor;
    NSColor *_itemAnimationTitleColor;
    NSColor *_anchorBodyColor;
    NSColor *_anchorHeadColor;
    NSColor *_componentWebbingBackgroundColor;
    NSColor *_retinaComponentWebbingBackgroundColor;
    NSColor *_roleOnOffCheckboxColor;
    NSColor *_roleFocusActiveColor;
    NSColor *_roleDividerColor;
    NSColor *_retinaRoleDividerColor;
    NSColor *_curveEditorBackgroundSelected;
    NSColor *_curveEditorBackgroundDeselected;
    NSColor *_curveEditorBackgroundSelectedDisabled;
    NSColor *_curveEditorBackgroundDeselectedDisabled;
    NSColor *_curveEditorMajorGuideline;
    NSColor *_curveEditorMinorGuideline;
    NSColor *_curveEditorCollapsedLine;
}

@property(readonly, nonatomic) NSColor *curveEditorCollapsedLine; // @synthesize curveEditorCollapsedLine=_curveEditorCollapsedLine;
@property(readonly, nonatomic) NSColor *curveEditorMinorGuideline; // @synthesize curveEditorMinorGuideline=_curveEditorMinorGuideline;
@property(readonly, nonatomic) NSColor *curveEditorMajorGuideline; // @synthesize curveEditorMajorGuideline=_curveEditorMajorGuideline;
@property(readonly, nonatomic) NSColor *curveEditorBackgroundDeselectedDisabled; // @synthesize curveEditorBackgroundDeselectedDisabled=_curveEditorBackgroundDeselectedDisabled;
@property(readonly, nonatomic) NSColor *curveEditorBackgroundSelectedDisabled; // @synthesize curveEditorBackgroundSelectedDisabled=_curveEditorBackgroundSelectedDisabled;
@property(readonly, nonatomic) NSColor *curveEditorBackgroundDeselected; // @synthesize curveEditorBackgroundDeselected=_curveEditorBackgroundDeselected;
@property(readonly, nonatomic) NSColor *curveEditorBackgroundSelected; // @synthesize curveEditorBackgroundSelected=_curveEditorBackgroundSelected;
@property(readonly, nonatomic) NSColor *retinaRoleDividerColor; // @synthesize retinaRoleDividerColor=_retinaRoleDividerColor;
@property(readonly, nonatomic) NSColor *roleDividerColor; // @synthesize roleDividerColor=_roleDividerColor;
@property(readonly, nonatomic) NSColor *roleFocusActiveColor; // @synthesize roleFocusActiveColor=_roleFocusActiveColor;
@property(readonly, nonatomic) NSColor *roleOnOffCheckboxColor; // @synthesize roleOnOffCheckboxColor=_roleOnOffCheckboxColor;
@property(readonly, nonatomic) NSColor *retinaComponentWebbingBackgroundColor; // @synthesize retinaComponentWebbingBackgroundColor=_retinaComponentWebbingBackgroundColor;
@property(readonly, nonatomic) NSColor *componentWebbingBackgroundColor; // @synthesize componentWebbingBackgroundColor=_componentWebbingBackgroundColor;
@property(readonly, nonatomic) NSColor *anchorHeadColor; // @synthesize anchorHeadColor=_anchorHeadColor;
@property(readonly, nonatomic) NSColor *anchorBodyColor; // @synthesize anchorBodyColor=_anchorBodyColor;
@property(readonly, nonatomic) NSColor *itemAnimationTitleColor; // @synthesize itemAnimationTitleColor=_itemAnimationTitleColor;
@property(readonly, nonatomic) NSColor *referenceWaveformDarkerColor; // @synthesize referenceWaveformDarkerColor=_referenceWaveformDarkerColor;
@property(readonly, nonatomic) NSColor *referenceWaveformLighterColor; // @synthesize referenceWaveformLighterColor=_referenceWaveformLighterColor;
@property(readonly, nonatomic) NSColor *referenceWaveformColor; // @synthesize referenceWaveformColor=_referenceWaveformColor;
@property(readonly, nonatomic) NSColor *audioWaveformColor; // @synthesize audioWaveformColor=_audioWaveformColor;
@property(readonly, nonatomic) NSColor *itemUnfocusedBackgroundColor; // @synthesize itemUnfocusedBackgroundColor=_itemUnfocusedBackgroundColor;
@property(readonly, nonatomic) NSColor *itemBackgroundDarkerColor; // @synthesize itemBackgroundDarkerColor=_itemBackgroundDarkerColor;
@property(readonly, nonatomic) NSColor *itemBackgroundT139Color; // @synthesize itemBackgroundT139Color=_itemBackgroundT139Color;
@property(readonly, nonatomic) NSColor *itemBackgroundLighterColor; // @synthesize itemBackgroundLighterColor=_itemBackgroundLighterColor;
@property(readonly, nonatomic) NSColor *itemBackgroundColor; // @synthesize itemBackgroundColor=_itemBackgroundColor;
@property(readonly, nonatomic) NSColor *itemForegroundColor; // @synthesize itemForegroundColor=_itemForegroundColor;
@property(readonly, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) NSColor *baseColor; // @synthesize baseColor=_baseColor;
- (id)_curveEditorCollapsedLineForBaseColor:(id)arg1;
- (id)_curveEditorMinorGuidelineForBaseColor:(id)arg1;
- (id)_curveEditorMajorGuidelineForBaseColor:(id)arg1;
- (id)_curveEditorBackgroundDeselectedColorForBaseColor:(id)arg1;
- (id)_curveEditorBackgroundSelectedColorForBaseColor:(id)arg1;
- (id)_roleDividerColorForBaseColor:(id)arg1 forScalingFactor:(double)arg2;
- (id)_roleFocusActiveColorForBaseColor:(id)arg1;
- (id)_roleOnOffCheckboxColorForBaseColor:(id)arg1;
- (id)_componentWebbingBackgroundColorForBaseColor:(id)arg1 forScalingFactor:(double)arg2;
- (id)_anchorHeadColor:(id)arg1;
- (id)_anchorBodyColor:(id)arg1;
- (id)_referenceWaveformDarkerColorForBaseColor:(id)arg1;
- (id)_referenceWaveformLighterColorForBaseColor:(id)arg1;
- (id)_referenceWaveformColorForBaseColor:(id)arg1;
- (id)_itemAnimationTitleColor:(id)arg1;
- (id)_audioWaveformColorForBaseColor:(id)arg1;
- (id)_itemUnfocusedBackgroundColorForBaseColor:(id)arg1;
- (id)_itemForegroundColorForBaseColor:(id)arg1;
- (id)_itemBackgroundT139ColorForBaseColor:(id)arg1;
- (id)_itemBackgroundLighterColorForBaseColor:(id)arg1;
- (id)_itemBackgroundDarkerColorForBaseColor:(id)arg1;
- (id)_itemBackgroundColorForBaseColor:(id)arg1;
- (id)_laneForegroundColorForBaseColor:(id)arg1;
- (id)_laneBackgroundColorForBaseColor:(id)arg1;
- (id)highlightedColorForColor:(id)arg1;
- (id)_computeHighlightedColorForColor:(id)arg1;
- (void)dealloc;
- (id)initWithBaseColor:(id)arg1;
- (id)init;

@end
