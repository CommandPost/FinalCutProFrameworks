//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFQCEffect.h>

#import <Flexo/FFEffectAdjustmentDelegate-Protocol.h>
#import <Flexo/FFTitleDelegate-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFQCIMEffect : FFQCEffect <FFTitleDelegate, FFEffectAdjustmentDelegate>
{
    NSMutableArray *_textGroups;
}

+ (id)attributesForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)paragraphStyleForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)colorForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)fontForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)registerEffects;
+ (void)loadQCPlugins;
- (Class)defaultAdjustmentToolForEffect;
- (id)designatedChannelsForXMLExport;
- (BOOL)hasDesignatedChannelsForXMLExport;
- (void)adjustImportedTextForAutoShrink:(BOOL)arg1;
- (void)adjustImportedTextForField:(unsigned long long)arg1;
- (id)defaultTextForField:(unsigned long long)arg1;
- (BOOL)setLightGrayBackgroundForField:(unsigned long long)arg1;
- (BOOL)shrinkToFit;
- (BOOL)wantsXMLStyledText;
- (BOOL)allowsFontEditing;
- (BOOL)scaleFieldHeightToTextHeight;
- (int)verticalAlignmentModeForField:(unsigned long long)arg1;
- (id)channelForField:(unsigned long long)arg1;
- (void)setEditingText:(BOOL)arg1;
- (BOOL)isEditingText;
- (struct CGRect)documentBounds;
- (struct CGRect)boundingBoxForField:(unsigned long long)arg1;
- (void)setTextString:(id)arg1 forField:(unsigned long long)arg2;
- (void)setText:(id)arg1 forField:(unsigned long long)arg2;
- (id)stringForField:(unsigned long long)arg1;
- (id)textForField:(unsigned long long)arg1;
- (unsigned long long)textFieldCount;
- (BOOL)wantsGammaCompositing;
- (id)inputKeys;
- (BOOL)hasBackgroundInput;
- (BOOL)needsClamping;
- (BOOL)handlesCompositing;
- (void)willReplace:(id)arg1;
@property(nonatomic) unsigned long long backgroundIndex2;
@property(nonatomic) unsigned long long backgroundIndex;
- (id)backgroundIndex2Channel;
- (id)backgroundIndexChannel;
- (void)createChannelsInFolder:(id)arg1;
- (void)setCompositionParameterValuesAtTime:(CDStruct_1b6d18a9)arg1 use4K:(BOOL)arg2;
- (BOOL)usesBackgroundComposition;
- (id)_ensureSomeNonwhitespace:(id)arg1;
- (BOOL)_splitMultipleLines;
- (BOOL)hasSecondTitleForEffectID:(id)arg1;
- (id)title2InputKey;
- (id)title1InputKey;
- (BOOL)hasTitles;
- (id)compositionName;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

