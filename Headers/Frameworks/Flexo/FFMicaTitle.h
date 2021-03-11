//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMicaEffect.h>

#import <Flexo/FFEffectAdjustmentDelegate-Protocol.h>
#import <Flexo/FFIMTitleWithLocation-Protocol.h>
#import <Flexo/FFTitleDelegate-Protocol.h>

@class MicaTitleAnimator;

__attribute__((visibility("hidden")))
@interface FFMicaTitle : FFMicaEffect <FFTitleDelegate, FFIMTitleWithLocation, FFEffectAdjustmentDelegate>
{
    BOOL m_creditsNeedUpdating;
    BOOL m_disableStartAnimations;
    BOOL m_disableEndAnimations;
    BOOL m_editMode;
    double m_editFieldHeight;
    BOOL m_haveFlattenedStartEndAnimations;
}

+ (long long)alignmentFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
+ (Class)animatorClass;
@property(nonatomic) BOOL disableEndAnimations; // @synthesize disableEndAnimations=m_disableEndAnimations;
@property(nonatomic) BOOL disableStartAnimations; // @synthesize disableStartAnimations=m_disableStartAnimations;
@property(nonatomic) double editFieldHeight; // @synthesize editFieldHeight=m_editFieldHeight;
@property(nonatomic) BOOL editMode; // @synthesize editMode=m_editMode;
- (Class)defaultAdjustmentToolForEffect;
- (id)locationChannel;
- (void)setLocation:(id)arg1;
- (id)location;
- (BOOL)hasLocation;
- (void)setBuildOutEnabled:(BOOL)arg1;
- (BOOL)buildOutEnabled;
- (BOOL)supportsOptionalBuildOut;
- (void)setBuildInEnabled:(BOOL)arg1;
- (BOOL)buildInEnabled;
- (BOOL)supportsOptionalBuildIn;
- (id)shrinkToFit:(id)arg1 forField:(unsigned long long)arg2;
- (BOOL)shrinkToFit;
- (BOOL)wrapLines;
- (double)originalFontSizeForField:(unsigned long long)arg1;
- (unsigned long long)characterCaseModeForField:(unsigned long long)arg1;
- (BOOL)scaleFieldHeightToTextHeight;
- (int)verticalAlignmentModeForField:(unsigned long long)arg1;
- (id)channelForField:(unsigned long long)arg1;
- (void)setEditingText:(BOOL)arg1;
- (BOOL)isEditingText;
- (struct CGRect)documentBounds;
- (struct CGRect)boundingBoxForField:(unsigned long long)arg1;
- (BOOL)textModifiedForField:(unsigned long long)arg1;
- (struct CGRect)rawBoundingBoxFromDocumentForField:(unsigned long long)arg1;
- (void)setTextString:(id)arg1 forField:(unsigned long long)arg2;
- (void)setText:(id)arg1 forField:(unsigned long long)arg2;
- (id)textForField:(unsigned long long)arg1;
- (id)stringForField:(unsigned long long)arg1;
- (unsigned long long)textFieldCount;
- (id)adjustAttributedString:(id)arg1 withInfo:(id)arg2;
- (void)adjustImportedTextForField:(unsigned long long)arg1;
- (BOOL)isMultiline;
- (BOOL)wantsXMLStyledText;
- (BOOL)allowsFontEditing;
- (id)attributesForTextGroup:(id)arg1 withScale:(double)arg2;
- (id)inputKeys;
- (void)setMapLocation:(id)arg1;
- (id)mapLocation;
- (id)creditsPropertiesChannel;
- (void)setCreditsProperties:(id)arg1;
- (id)creditsProperties;
- (void)effectiveRangeDidChange;
- (void)wasAnchoredTo:(id)arg1;
- (BOOL)wantsGammaCompositing;
- (void)willReplace:(id)arg1;
- (CDStruct_bdcb2b0d)md5;
- (void)channelParameterChanged:(id)arg1;
- (void)createChannelsInFolder:(id)arg1;
- (void)configureLayersAtTime:(CDStruct_1b6d18a9)arg1;
- (void)setRasterizingForOutRect:(struct CGRect)arg1;
- (void)disableTextRasterizationInTitleAnimator:(id)arg1;
- (void)configureAfterMicaLoad;
- (id)animaticLayer;
- (id)videoLayer;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) MicaTitleAnimator *titleAnimator;

@end

