//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKDFRController.h"

@class NSButton;

__attribute__((visibility("hidden")))
@interface FFRoleEditorDFRController : LKDFRController
{
    NSButton *_showHideSubrolesButton;
}

- (void)updateShowHideSubrolesButton;
- (id)targetForIdentifier:(id)arg1;
- (SEL)selectorForIdentifier:(id)arg1;
- (id)accessibilityTitleForIdentifier:(id)arg1;
- (id)displayNameForIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)dealloc;
- (id)initWithModule:(id)arg1;

@end

