//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSServiceViewController.h"

#import "FxServiceViewProtocol.h"

@class NSWindow;

@interface FxServiceViewController : NSServiceViewController <FxServiceViewProtocol>
{
    NSWindow *_window;
}

@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)attachViewControllerForSessionID:(unsigned long long)arg1 andParameter:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerInterface;
- (id)exportedInterface;
- (id)exportedObject;
- (id)remoteViewControllerInterface;
- (void)viewDidLoad;
- (id)nibName;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

