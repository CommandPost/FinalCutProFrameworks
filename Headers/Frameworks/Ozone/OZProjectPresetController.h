//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Ozone/NSTextFieldDelegate-Protocol.h>
#import <Ozone/NSWindowDelegate-Protocol.h>

@class LKPopUpButton, LKTextField, NSArray, NSString, OZProjectPreset;

@interface OZProjectPresetController : NSWindowController <NSWindowDelegate, NSTextFieldDelegate>
{
    LKTextField *_pNameTF;
    LKTextField *_pDescTV;
    LKTextField *_pWidthTF;
    LKTextField *_pHeightTF;
    LKPopUpButton *_pPixelARPopUp;
    LKTextField *_pPixelARTF;
    LKPopUpButton *_pFieldDominancePopUp;
    LKPopUpButton *_pFrameRatePopUp;
    LKPopUpButton *_pProjectionModePopUp;
    LKPopUpButton *_pColorProcessingPopUp;
    OZProjectPreset *_pPreset;
    NSArray *_frameRates;
}

- (BOOL)control:(id)arg1 isValidObject:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (void)doneEdit:(id)arg1;
- (void)cancelEdit:(id)arg1;
- (void)selectProjectionModeFromPopUp:(id)arg1;
- (void)setPixelARFromTF:(id)arg1;
- (void)setPixelARFromPopUp:(id)arg1;
- (int)editPreset:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

