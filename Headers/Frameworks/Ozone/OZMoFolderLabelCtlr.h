//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZFolderLabelController.h>

@class NSImageView;

@interface OZMoFolderLabelCtlr : OZFolderLabelController
{
    NSImageView *_pPrecompBadge;
}

- (BOOL)anyChannelSelected:(struct OZChannelFolder *)arg1;
- (void)paste;
- (void)copyAction;
- (void)cut;
- (void)deleteThis;
- (id)makeLabelTextWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)update;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)setName:(id)arg1 hasEnableButton:(BOOL)arg2 context:(id)arg3;

@end

