//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class LKButton, LKPopUpButton, NSWindow;

__attribute__((visibility("hidden")))
@interface FFTranscodeMediaWindowController : NSWindowController
{
    BOOL _sheetStateCreateOptimizeMedia;
    BOOL _sheetStateCreateProxyMedia;
    BOOL _sheetStateCreateH264ProxyMedia;
    NSWindow *_sheet;
    LKButton *_optimizeMediaCheckBox;
    LKButton *_createProxyMediaCheckBox;
    LKButton *_createProResProxyRadioButton;
    LKButton *_createH264ProxyRadioButton;
    LKPopUpButton *_proxySizingPopup;
    LKButton *_okButton;
    long long _sheetStateProxySizingMode;
}

@property(nonatomic) long long sheetStateProxySizingMode; // @synthesize sheetStateProxySizingMode=_sheetStateProxySizingMode;
@property(nonatomic) BOOL sheetStateCreateH264ProxyMedia; // @synthesize sheetStateCreateH264ProxyMedia=_sheetStateCreateH264ProxyMedia;
@property(nonatomic) BOOL sheetStateCreateProxyMedia; // @synthesize sheetStateCreateProxyMedia=_sheetStateCreateProxyMedia;
@property(nonatomic) BOOL sheetStateCreateOptimizeMedia; // @synthesize sheetStateCreateOptimizeMedia=_sheetStateCreateOptimizeMedia;
@property(retain, nonatomic) LKButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) LKPopUpButton *proxySizingPopup; // @synthesize proxySizingPopup=_proxySizingPopup;
@property(retain, nonatomic) LKButton *createH264ProxyRadioButton; // @synthesize createH264ProxyRadioButton=_createH264ProxyRadioButton;
@property(retain, nonatomic) LKButton *createProResProxyRadioButton; // @synthesize createProResProxyRadioButton=_createProResProxyRadioButton;
@property(retain, nonatomic) LKButton *createProxyMediaCheckBox; // @synthesize createProxyMediaCheckBox=_createProxyMediaCheckBox;
@property(retain, nonatomic) LKButton *optimizeMediaCheckBox; // @synthesize optimizeMediaCheckBox=_optimizeMediaCheckBox;
@property(retain, nonatomic) NSWindow *sheet; // @synthesize sheet=_sheet;
- (void)awakeFromNib;
- (void)dealloc;
- (void)optionsChanged:(id)arg1;
- (void)cancel:(id)arg1;
- (void)OK:(id)arg1;
- (void)showOptimizeSheetForClips:(id)arg1 modalForWindow:(id)arg2;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end

