//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFQCEffect.h>

#import "FFTitleDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFQCIMEffect : FFQCEffect <FFTitleDelegate>
{
    NSMutableArray *_textGroups;
}

+ (id)attributesForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)colorForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)fontForTitle:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)registerEffects;
+ (void)loadQCPlugins;
- (BOOL)setLightGrayBackgroundForField:(unsigned long long)arg1;
- (BOOL)shrinkToFit;
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
- (id)textForField:(unsigned long long)arg1;
- (unsigned long long)textFieldCount;
- (BOOL)wantsGammaCompositing;
- (id)inputKeys;
- (BOOL)hasBackgroundInput;
- (BOOL)needsClamping;
- (BOOL)handlesCompositing;
@property(nonatomic) unsigned long long backgroundIndex2;
@property(nonatomic) unsigned long long backgroundIndex;
- (id)backgroundIndex2Channel;
- (id)backgroundIndexChannel;
- (void)createChannelsInFolder:(id)arg1;
- (void)setCompositionParameterValuesAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)usesBackgroundComposition;
- (BOOL)_splitMultipleLines;
- (id)defaultSecondTextStringForEffectID:(id)arg1;
- (BOOL)hasSecondTitleForEffectID:(id)arg1;
- (id)defaultTextStringForEffectID:(id)arg1;
- (id)title2InputKey;
- (id)title1InputKey;
- (BOOL)hasTitles;
- (id)compositionName;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end
