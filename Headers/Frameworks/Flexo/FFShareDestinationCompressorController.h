//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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
- (id)initWithDestination:(id)arg1 withSource:(id)arg2;
- (void)awakeFromNib;

@end
