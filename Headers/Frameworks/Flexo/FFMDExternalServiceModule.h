//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDModule.h>

@class NSString, NSView, PXPluginViewController, PXProServiceBase, _FFExternalServiceHostingWindow;

@interface FFMDExternalServiceModule : FFMDModule
{
    NSView *_placeholderView;
    _FFExternalServiceHostingWindow *_remoteViewHostingWindow;
    PXPluginViewController *_plugInHostViewController;
    NSString *_serviceBundleIdentifier;
    NSString *_serviceClassName;
    PXProServiceBase *_plugIn;
    BOOL _plugInActive;
}

- (void)hostInfo:(CDUnknownBlockType)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)setContents:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (BOOL)detachPlugInViewController;
- (void)attachPlugInViewController:(id)arg1;
- (void)_noteViewFrameChanged:(id)arg1;
- (void)_updateHostingWindowFrame;
- (id)_hostingWindowCreateIfNecessary:(BOOL)arg1;
- (void)setupExternalMediaService;
- (void)teardownExternalMediaService;
- (void)dealloc;
- (void)viewDidLoad;

@end

