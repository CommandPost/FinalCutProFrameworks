//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKWindow.h>

@class PETitleBarAccessoryViewController;

@interface PEWindow : LKWindow
{
    PETitleBarAccessoryViewController *titleBarController;
}

- (id)_collectionBehaviourDescription;
- (id)_findDragTargetFrom:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

