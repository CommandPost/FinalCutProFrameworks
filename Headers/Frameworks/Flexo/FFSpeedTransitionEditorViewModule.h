//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSpeedEditorViewModule.h>

@class LKButton, LKTextField;

@interface FFSpeedTransitionEditorViewModule : FFSpeedEditorViewModule
{
    LKButton *smoothButton;
    LKButton *editSourceFrameButton;
    LKTextField *editSourceFrameLabel;
    LKTextField *smoothLabel;
}

- (void)editSourceFrame:(id)arg1;
- (void)toggleSmooth:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;

@end
