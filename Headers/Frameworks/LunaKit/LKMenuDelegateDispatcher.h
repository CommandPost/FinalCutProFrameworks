//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class LKCommandsController, NSMapTable, NSString;

@interface LKMenuDelegateDispatcher : NSObject <NSMenuDelegate>
{
    LKCommandsController *_controller;
    NSMapTable *_delegateTable;
}

@property(retain, nonatomic) NSMapTable *delegateTable; // @synthesize delegateTable=_delegateTable;
@property(retain, nonatomic) LKCommandsController *controller; // @synthesize controller=_controller;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
