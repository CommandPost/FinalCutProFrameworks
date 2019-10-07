//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChanFolderController.h"

@class FFEffectStack, LKButton, OZLabelText;

__attribute__((visibility("hidden")))
@interface FFInspectorUserEffectsController : OZChanFolderController
{
    LKButton *_addCorrectionButton;
    LKButton *_addGroupButton;
    LKButton *_addShapeMaskButton;
    LKButton *_addKeyerButton;
    LKButton *_addBalanceButton;
    LKButton *_addFavoriteEffectsVideo;
    OZLabelText *_labelText;
    FFEffectStack *_observedEffects;
}

- (void)autoBalanceChanged:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addColorEffects:(id)arg1;
- (id)newMenuUseImagesForColor:(BOOL)arg1;
- (void)addColorEffect:(id)arg1;
- (void)addFavoriteVideoEffect:(id)arg1;
- (id)newMenuUseImages:(BOOL)arg1;
- (void)addFavoriteEffect:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)_effectSelectionStateChanged:(id)arg1;
- (id)selectedUserEffectsFromEffectStack:(id)arg1;
- (id)effectStack;
- (void)didBuildUI;
- (void)update;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)stringForBalanceLabel;

@end

