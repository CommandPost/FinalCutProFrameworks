//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class NSButton;

@interface OZCreateWidgetCtlr : OZViewController
{
    NSButton *_pCreateSliderButton;
    NSButton *_pCreatePopUpButton;
    NSButton *_pCreateCheckboxButton;
    struct OZRig *_pRig;
}

- (void)createWidget:(unsigned int)arg1;
- (void)createCheckboxWidget:(id)arg1;
- (void)createPopUpWidget:(id)arg1;
- (void)createSliderWidget:(id)arg1;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)disable;
- (void)enable;
- (void)update;
- (id)initWithRig:(struct OZRig *)arg1 context:(id)arg2;

@end

