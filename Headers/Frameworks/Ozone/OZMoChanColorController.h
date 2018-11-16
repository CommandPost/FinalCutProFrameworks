//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChanColorController.h"

#import "OZEyeDropperToolProtocol.h"

@class LKButton, OZEyeDropperTool;

@interface OZMoChanColorController : OZChanColorController <OZEyeDropperToolProtocol>
{
    LKButton *_pEyeDropper;
    OZEyeDropperTool *_pTool;
}

- (void)eyeDropperPickColor:(id)arg1;
- (void)willDeleteEyeDropperTool:(id)arg1;
- (void)setPickedColor:(struct PCColor *)arg1;
- (void)endSettingPickedColor;
- (void)startSettingPickedColor;
- (void)setChannelValue:(id)arg1;
- (void)dealloc;
- (id)canvasModule;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

