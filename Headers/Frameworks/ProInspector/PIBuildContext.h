//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProInspector/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSValue, NSView;

@interface PIBuildContext : NSObject <NSCopying>
{
    BOOL _isHUD;
    BOOL _shouldDiscloseCompoundChans;
    BOOL _shouldDisplayParameterMenu;
    BOOL _shouldCenterSliders;
    BOOL _lightBackgroundSliders;
    unsigned int _buildContextVisibilityFlags;
    NSValue *_topSelectableChannel;
    struct __CFString *_bundleID;
    NSMutableDictionary *_pValues;
    NSView *_customContainerView;
    NSArray *_ozChannelDontBuildList;
    BOOL isRoot;
    BOOL shouldDisplayAnimIndicator;
}

+ (id)audioComponentsMessageTextColor;
+ (id)audioComponentsMessageBackgroundColor;
+ (double)audioSuffixLeadingEdgeRightOffset;
+ (double)audioValueTrailingEdgeRightOffset;
+ (double)audioRoleLabelOffset;
+ (double)audioAnalysisControlsOffset;
+ (double)audioAnalysisHalfGutterWidth;
+ (double)audioAnalysisGutterWidth;
+ (double)audioAnalysisGlyphHeight;
+ (double)audioAnalysisGlyphWidth;
+ (double)audioValueControlGutterWidth;
+ (double)audioTextViewHeight;
+ (double)audioLabelLeadingOffset;
+ (double)audioLabelBadgeLeadingOffset;
+ (double)audioControlEnumPopUpOffset;
+ (double)audioControlSpinnerHeight;
+ (double)audioControlSpinnerWidth;
+ (double)audioControlHeight;
+ (double)audioControlWidth;
+ (double)labelTextFieldLeadingOffset;
+ (double)enableButtonLeadingOffset;
+ (double)disclosureMaxWidth;
+ (double)disclosureTriangleIndent;
+ (double)popupAlignmentAdjustment;
+ (double)levelZeroBrickDelta;
+ (double)BrickVerticalGap;
+ (double)BrickHorizontalMarginRight;
+ (double)BrickHorizontalMarginLeft;
+ (double)BrickVerticalMargin;
+ (double)scrollViewBottomMargin;
+ (double)scrollViewTopMargin;
+ (struct CGRect)labelTextViewFrame:(double)arg1 isHUD:(BOOL)arg2;
+ (struct CGRect)labelViewFrame;
+ (id)inspectorFont11Light;
+ (id)inspectorFont11Regular;
+ (id)inspectorFont10Medium;
+ (id)inspectorFont10Regular;
+ (id)inspectorTabIconSelectedColor;
+ (id)inspectorTabIconNormalColor;
+ (id)inspectorMissingTextColorRed;
+ (id)inspectorTextColorGrey215;
+ (id)inspectorTextColorGrey193;
+ (id)inspectorTextColorGrey179;
+ (id)inspectorTextColorGrey153;
+ (id)inspectorTextColorGrey178;
+ (id)inspectorTextColorGrey83;
+ (id)inspectorBackgroundColorGrey51;
+ (id)inspectorBackgroundColorGrey45;
+ (id)inspectorBackgroundColorGrey31;
+ (id)inspectorBackgroundColorGrey22;
+ (id)inspectorSelectionColorNonFocus;
+ (id)inspectorSelectionColor;
+ (double)showHideMaxXRightOffset;
+ (double)valueMaxXRightOffset:(BOOL)arg1;
+ (double)rowHeight;
+ (BOOL)isMotion;
@property(retain, nonatomic) NSArray *ozChannelDontBuildList; // @synthesize ozChannelDontBuildList=_ozChannelDontBuildList;
@property(retain, nonatomic) NSValue *topSelectableChannel; // @synthesize topSelectableChannel=_topSelectableChannel;
@property(nonatomic) unsigned int buildContextVisibilityFlags; // @synthesize buildContextVisibilityFlags=_buildContextVisibilityFlags;
@property(retain, nonatomic) NSView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(nonatomic) BOOL lightBackgroundSliders; // @synthesize lightBackgroundSliders=_lightBackgroundSliders;
@property(nonatomic) BOOL shouldCenterSliders; // @synthesize shouldCenterSliders=_shouldCenterSliders;
@property(nonatomic) BOOL shouldDisplayParameterMenu; // @synthesize shouldDisplayParameterMenu=_shouldDisplayParameterMenu;
@property(nonatomic) BOOL shouldDiscloseCompoundChans; // @synthesize shouldDiscloseCompoundChans=_shouldDiscloseCompoundChans;
@property(nonatomic) BOOL shouldDisplayAnimIndicator; // @synthesize shouldDisplayAnimIndicator;
@property(nonatomic) BOOL isRoot; // @synthesize isRoot;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)configureSizeAndThemeVariantForControl:(id)arg1;
- (id)newSecondardLabelWithFrame:(struct CGRect)arg1;
- (struct CGRect)xScrubberFrameInSuperframe:(struct CGRect)arg1;
- (struct CGRect)xSuffixFrameInSuperframe:(struct CGRect)arg1;
- (struct CGRect)xPrefixFrameInSuperframe:(struct CGRect)arg1;
- (struct CGRect)scrubberFrameInSuperframe:(struct CGRect)arg1;
- (struct CGRect)suffixFrameInSuperframe:(struct CGRect)arg1;
- (struct CGRect)prefixFrameInSuperframe:(struct CGRect)arg1;
- (double)valueMaxXRightOffset;
- (double)valueLabelLeftEdge;
- (double)controlMaxXRightOffset;
- (double)controlHeight;
- (struct CGSize)headingFrameSize;
- (double)headingRowHeight;
- (struct CGSize)frameSize;
- (double)rowHeight;
- (BOOL)isRigDisplay;
- (struct __CFString *)bundleID;
- (BOOL)isHUD;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIsHUD:(BOOL)arg1 bundleID:(struct __CFString *)arg2;

@end

