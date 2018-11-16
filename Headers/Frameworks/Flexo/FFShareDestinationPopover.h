//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFSharePopoverDelegate.h"
#import "NSWindowDelegate.h"

@class FFShareDestinationViewController, LKPopOverWindow;

__attribute__((visibility("hidden")))
@interface FFShareDestinationPopover : NSObject <FFSharePopoverDelegate, NSWindowDelegate>
{
    FFShareDestinationViewController *_sharePopoverViewController;
    LKPopOverWindow *_sharePopoverWindow;
    id _currentEditorModule;
    id _sender;
    SEL _senderAction;
    BOOL _closingWindow;
}

+ (id)sharedInstance;
- (void)shareDestination:(id)arg1;
- (void)sharePopoverShouldClose:(id)arg1;
- (BOOL)sharePopoverIsShown;
- (void)popOverWindowDidCancel:(id)arg1;
- (void)hideSharePopover;
- (void)hideSharePopoverWithoutCleanup;
- (void)showPopover:(id)arg1 withTitle:(id)arg2 withSender:(id)arg3;
- (void)sharePopOverDidResignKey:(id)arg1;
- (void)_restoreSenderAction:(id)arg1;
- (void)cleanup;
- (struct CGSize)viewMinSize;
- (id)init;

@end
