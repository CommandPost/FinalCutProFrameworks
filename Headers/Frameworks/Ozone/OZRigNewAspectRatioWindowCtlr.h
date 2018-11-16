//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class LKPopUpButton, LKTextField, OZRigAspectRatioListCtlr;

@interface OZRigNewAspectRatioWindowCtlr : NSWindowController
{
    LKTextField *_pDisplayAspectRatioTF;
    LKPopUpButton *_pPixelAspectPopUp;
    LKTextField *_pPixelAspectTF;
    LKTextField *_pSampleWidthTF;
    LKTextField *_pSampleHeightTF;
    struct OZRigWidget *_pWidget;
    OZRigAspectRatioListCtlr *_pDARListCtlr;
    CDStruct_1b6d18a9 _currTime;
    BOOL _hasUserSpecifiedName;
    double _selectedDAR;
}

+ (void)runModalForWidget:(struct OZRigWidget *)arg1 listCtlr:(id)arg2 time:(const CDStruct_1b6d18a9 *)arg3;
- (void)updateCustomDisplayAspect;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)setSampleHeight:(id)arg1;
- (void)setSampleWidth:(id)arg1;
- (void)setPixelARFromTF:(id)arg1;
- (void)setPixelARFromPopUp:(id)arg1;
- (void)setAspectRatio:(id)arg1;
- (void)setDARPreset:(id)arg1;
- (void)setWidget:(struct OZRigWidget *)arg1 listCtlr:(id)arg2 time:(const CDStruct_1b6d18a9 *)arg3;
- (void)windowDidLoad;

@end

