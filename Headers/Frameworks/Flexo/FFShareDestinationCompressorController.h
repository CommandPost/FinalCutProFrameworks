//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFShareDestinationController.h>

@class LKButton, LKTextField;

@interface FFShareDestinationCompressorController : FFShareDestinationController
{
    LKButton *_changeBtn;
    LKTextField *_summaryText;
}

@property(nonatomic) LKTextField *summaryText; // @synthesize summaryText=_summaryText;
@property(nonatomic) LKButton *changeBtn; // @synthesize changeBtn=_changeBtn;
- (void)compressorRequiredlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showCompressorSettingsPanel:(id)arg1;
- (id)initWithDestination:(id)arg1 withSources:(id)arg2;
- (void)awakeFromNib;
- (BOOL)supportsEmbeddingCaptions;
- (id)settingDecription;
- (id)settingName;

@end

