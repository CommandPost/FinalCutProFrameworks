//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZChanEnumController.h"

@class LKButton, LKSegmentedControl, LKTextField;

@interface OZChannelEnumWithListController : OZChanEnumController
{
    LKSegmentedControl *_pSegmentedControl;
    LKButton *_pEditButton;
    LKTextField *_pRenameTF;
    struct OZRigWidget *_pRigWidget;
}

- (void)renameEntry:(id)arg1;
- (void)setEntryName:(id)arg1;
- (void)addRemoveEntry:(id)arg1;
- (struct OZChannelEnumWithList *)enumChannel;
- (void)disable;
- (void)enable;
- (void)update;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

