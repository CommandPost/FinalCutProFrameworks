//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Ozone/NSWindowDelegate-Protocol.h>

@class NSString;

@interface OZAddShapeBehaviorSheetController : NSWindowController <NSWindowDelegate>
{
    struct OZDocument *_pDoc;
}

- (void)cancelAdd:(id)arg1;
- (void)okAdd:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (long long)doAdd:(struct OZDocument *)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

