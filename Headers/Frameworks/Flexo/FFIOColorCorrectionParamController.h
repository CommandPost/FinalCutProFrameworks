//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMaskedEffectBaseParamController.h>

@class LKButton;

__attribute__((visibility("hidden")))
@interface FFIOColorCorrectionParamController : FFMaskedEffectBaseParamController
{
    LKButton *_showColorBoardButton;
    LKButton *_addShapeMaskButton;
    LKButton *_addKeyerButton;
}

- (void)showColorBoard:(id)arg1;
- (id)_maskedGroupEffect;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

