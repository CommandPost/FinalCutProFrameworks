//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextField;

@interface OZConvertSceneTo3DController : NSWindowController
{
    NSButton *_pCancelButton;
    NSButton *_pKeepButton;
    NSButton *_pSwitchButton;
    NSTextField *_pQuestion;
    NSTextField *_pMessage;
    unsigned int _answer;
    unsigned int _type;
    struct OZScene *_pScene;
}

- (void)switchTo3D:(id)arg1;
- (void)keep2D:(id)arg1;
- (void)cancel:(id)arg1;
- (int)getAnswer;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithScene:(struct OZScene *)arg1 type:(unsigned int)arg2;

@end

