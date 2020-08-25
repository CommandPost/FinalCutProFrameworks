//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZImportMediaDelegate.h>

@class NSPopUpButton, NSTextField;

@interface OZImportMediaAsDocumentDelegate : OZImportMediaDelegate
{
    NSTextField *_pFrameRateTitle;
    NSPopUpButton *_pFrameRatePopUp;
    NSTextField *_pAspectRatioTitle;
    NSPopUpButton *_pAspectRatioPopUp;
    NSTextField *_pFieldOrderTitle;
    NSPopUpButton *_pFieldOrderPopUp;
}

+ (id)instanceWithOpenPanel:(id)arg1 flags:(unsigned int)arg2;
- (void)panelSelectionDidChange:(id)arg1;
- (id)sequenceSettings;
- (double)getPARFromPopup;
- (void)getFrameRate:(double *)arg1 andNTSC:(char *)arg2;
- (BOOL)allows3DScenes;
- (id)view;
- (id)initWithOpenPanel:(id)arg1 flags:(unsigned int)arg2;

@end

