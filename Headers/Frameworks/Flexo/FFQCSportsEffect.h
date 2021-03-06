//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFQCIMEffect.h>

__attribute__((visibility("hidden")))
@interface FFQCSportsEffect : FFQCIMEffect
{
    int _type;
}

+ (void)registerEffects;
- (id)designatedChannelsForXMLExport;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (void)setCompositionParameterValuesAtTime:(CDStruct_1b6d18a9)arg1 use4K:(BOOL)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (struct CGPoint)team2Anchor16x9;
- (struct CGPoint)team1Anchor16x9;
- (BOOL)team2ControlsAboveAnchor;
- (BOOL)team1ControlsAboveAnchor;
- (BOOL)isTransition;
- (unsigned long long)teamCount;
- (BOOL)showPlayer;
- (BOOL)showTeam2;
- (BOOL)showTeam1;
- (id)player;
- (id)team2;
- (id)team1;
- (void)setPlayer:(id)arg1;
- (void)setTeam2:(id)arg1;
- (void)setTeam1:(id)arg1;
- (struct CGRect)boundingBoxForField:(unsigned long long)arg1;
- (unsigned long long)characterCaseModeForField:(unsigned long long)arg1;
- (BOOL)scaleFieldHeightToTextHeight;
- (BOOL)wantsXMLStyledText;
- (BOOL)allowsFontEditing;
- (BOOL)wrapLines;
- (BOOL)shrinkToFit;
- (struct CGRect)documentBounds;
- (unsigned long long)textFieldCount;
- (BOOL)hasSecondTitleForEffectID:(id)arg1;
- (id)defaultTextForField:(unsigned long long)arg1;
- (id)title2InputKey;
- (id)title1InputKey;
- (BOOL)hasTitles;
- (BOOL)renderInEditMode;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

