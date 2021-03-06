//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFSharePopoverDelegate-Protocol.h>
#import <Flexo/NSPopoverDelegate-Protocol.h>
#import <Flexo/NSWindowDelegate-Protocol.h>

@class FFShareDestinationViewController, NSPopover, NSString;

@interface FFShareDestinationPopover : NSObject <FFSharePopoverDelegate, NSWindowDelegate, NSPopoverDelegate>
{
    FFShareDestinationViewController *_sharePopoverViewController;
    NSPopover *_sharePopover;
    id _currentEditorModule;
    id _sender;
    SEL _senderAction;
    BOOL _closingWindow;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)shareDestination:(id)arg1;
- (void)sharePopoverShouldClose:(id)arg1;
- (BOOL)sharePopoverIsShown;
- (void)hideSharePopover;
- (void)popoverDidClose:(id)arg1;
- (void)showPopover:(id)arg1 withTitle:(id)arg2 withSender:(id)arg3;
- (void)sharePopOverDidResignKey:(id)arg1;
- (void)_restoreSenderAction:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

