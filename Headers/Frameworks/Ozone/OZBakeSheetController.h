//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSString;

@interface OZBakeSheetController : NSWindowController <NSWindowDelegate>
{
    struct OZDocument *_pDoc;
}

- (void)cancelBake:(id)arg1;
- (void)okBake:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)doBake:(struct OZDocument *)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

