//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPasteboard, NSTimer, NSWindowController, OZDropMenuWindow;

@interface OZDropMenuManager : NSObject
{
    NSWindowController *_windowController;
    OZDropMenuWindow *_dropMenuWindow;
    NSTimer *_destructionTimer;
    struct CGPoint _savedDropPoint;
    struct UnsignedWide _startTime;
    unsigned int _dropMenuPaletteDelay;
    id _dropTarget;
    NSPasteboard *_delayedPasteboard;
    id _delayedTarget;
    SEL _delayedSelector;
    NSTimer *_delayedTimer;
}

+ (id)manager;
- (id)init;
- (float)_determineWellWidth:(id)arg1 iconArray:(id)arg2 subTextArray:(id)arg3;
- (void)showDropMenuWindowWithLocation:(struct CGPoint)arg1 dropTarget:(id)arg2 numTargets:(int)arg3 selectorArray:(id)arg4 selectorTargetArray:(id)arg5 mainTextArray:(id)arg6 subTextArray:(id)arg7 iconArray:(id)arg8 indentArray:(id)arg9 dragInfo:(id)arg10;
- (void)destroyTargetWindow;
- (BOOL)windowIsShowing;
- (struct CGRect)dropMenuWindowFrame;
- (void)draggingEntered:(id)arg1 operation:(unsigned long long)arg2;
- (BOOL)draggingUpdated:(id)arg1 operation:(unsigned long long)arg2 view:(id)arg3;
- (void)draggingExited:(id)arg1 view:(id)arg2;
- (void)fireDelayedDrop:(id)arg1;
- (void)setupDelayedDrop:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (struct CGPoint)dropPoint;
- (void)destroyTargetWindowIfNotDragging:(id)arg1;
- (void)invalidateDestructionTimer;

@end

