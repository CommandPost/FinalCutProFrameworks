//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorBaseController.h>

#import "FFInspectorContainerHeaderController.h"

@class LKButton, LKTextField, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorHeaderController : FFInspectorBaseController <FFInspectorContainerHeaderController>
{
    NSView *_headerView;
    LKTextField *_label;
    LKButton *_button;
}

+ (Class)classForBackgroundView;
+ (id)labelColor;
+ (id)labelFont;
+ (double)defaultBottomSpacingValue;
+ (double)defaultHeight;
- (void)container:(id)arg1 didCollapse:(BOOL)arg2;
- (void)container:(id)arg1 didChangeTitle:(id)arg2;
- (id)view;
- (void)toggleDisclosure:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)_isCollapsed;
- (BOOL)_isCollapsable;
- (id)buttonMenu;
- (void)setPropertiesForHeaderView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

