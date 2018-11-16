//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class LKTextField, WebView;

@interface PEWelcomeWindowController : NSWindowController
{
    WebView *_webView;
    LKTextField *_titleString;
    BOOL _closing;
    BOOL _requestPending;
}

+ (void)closeIfLoaded;
+ (void)delayedSharedInstanceRelease;
+ (void)displayImmediately:(BOOL)arg1;
- (void)dealloc;
- (id)initAndDisplayImmediately:(BOOL)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)showOfflinePage;
- (void)a_moreDetails:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)close:(id)arg1;
- (BOOL)isClosing;
- (void)showBlankPage;
- (id)windowNibName;

@end

