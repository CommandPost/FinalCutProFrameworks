//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class LKButton;

@interface OZFreezeInvalidController : NSWindowController
{
    LKButton *_pUnfreezeButton;
    LKButton *_pUpdateButton;
    LKButton *_pAlwaysDoThisButton;
    struct OZScene *_pScene;
    int _operation;
}

- (id)init;
- (void)dealloc;
- (void)setScene:(struct OZScene *)arg1;
- (int)_open;
- (int)askForOperation:(struct OZScene *)arg1;
- (void)unfreezeNotify:(id)arg1;
- (void)updateNotify:(id)arg1;
- (void)cancelNotify:(id)arg1;

@end
