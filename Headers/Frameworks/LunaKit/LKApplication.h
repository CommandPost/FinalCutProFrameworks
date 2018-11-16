//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

@class LKDynamicUpdateMenuDelegate;

@interface LKApplication : NSApplication
{
    LKDynamicUpdateMenuDelegate *_helpMenuDynamicUpdateAdapter;
}

+ (void)_setActionDelegate:(id)arg1;
- (void)finishLaunching;
- (void)dealloc;
- (void)_setupAppDiagnosticsMenu;
- (void)_gatherAppDiagnosticsFromMenuItem:(id)arg1;
- (void)installModuleLayoutMenuItems;
- (void)terminate:(id)arg1;
- (BOOL)_shouldTerminate;
- (id)targetForAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (BOOL)_handleKeyEquivalent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (id)paneInactiveBackgroundColor;
- (id)paneBackgroundColor;
- (id)copyrightYearString;
- (void)orderFrontStandardAboutPanel:(id)arg1;

@end

