//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFConsumerSharePopoverDelegate.h"
#import "NSWindowDelegate.h"

@class FFCSDestinationPopoverViewController, LKPopOverWindow;

@interface FFConsumerShareDestinationPopover : NSObject <FFConsumerSharePopoverDelegate, NSWindowDelegate>
{
    FFCSDestinationPopoverViewController *_destinationsViewController;
    LKPopOverWindow *_sharePopoverWindow;
    id _currentEditorModule;
    id _sender;
    SEL _senderAction;
}

+ (id)shareDestinationPopover;
- (void)shareDestination:(id)arg1;
- (void)popOverWindowDidCancel:(id)arg1;
- (id)shareDestinationPopoverWindowWithDestiantions:(id)arg1 withTarget:(id)arg2 withSender:(id)arg3;
- (void)_restoreSenderAction:(id)arg1;
- (void)sharePopoverDidResignKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

