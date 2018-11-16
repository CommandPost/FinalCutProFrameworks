//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class FFRolesMenuContext, NSMenu, NSString;

@interface FFRolesMenuController : NSObject <NSMenuDelegate>
{
    id <FFRolesMenuDelegate> _delegate;
    unsigned long long _options;
    BOOL _createdMenu;
    NSMenu *_menu;
    FFRolesMenuContext *_context;
    BOOL _inActionScope;
}

+ (void)configureAssignRolesSubmenusInContextMenu:(id)arg1 withDelegate:(id)arg2;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <FFRolesMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
- (void)editRoles:(id)arg1;
- (void)changeRole:(id)arg1;
- (void)_endActionScope;
- (void)_beginActionScope;
- (void)_populateMenu:(id)arg1 usingContext:(id)arg2;
- (int)_tagForRole:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_setupMenu;
- (void)dealloc;
- (id)initWithRolesMenuDelegate:(id)arg1 menu:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)initWithRolesMenuDelegate:(id)arg1 withOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

