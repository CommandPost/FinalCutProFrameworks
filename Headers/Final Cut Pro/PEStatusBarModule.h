//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class LKProgressIndicator, LKTextField;

@interface PEStatusBarModule : LKViewModule
{
    LKProgressIndicator *_backgroundTaskSpinner;
    LKTextField *_backgroundTaskLabel;
}

- (void)mouseDown:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;

@end

