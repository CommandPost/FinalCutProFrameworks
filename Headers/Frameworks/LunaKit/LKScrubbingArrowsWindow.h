//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSTimer;

@interface LKScrubbingArrowsWindow : NSWindow
{
    NSTimer *selfDestructTimer;
    struct CGRect referenceFrame;
}

- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)finalize;
- (void)dealloc;
- (void)selfDestructIfNecessaryWithTimer:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)startSelfDestructTimer;
- (void)setReferenceFrame:(struct CGRect)arg1;
- (struct CGRect)referenceFrame;

@end

