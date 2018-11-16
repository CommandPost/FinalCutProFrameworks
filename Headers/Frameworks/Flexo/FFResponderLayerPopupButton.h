//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerControl.h>

#import "NSMenuDelegate.h"

@class NSMenu, NSMenuItem;

__attribute__((visibility("hidden")))
@interface FFResponderLayerPopupButton : FFResponderLayerControl <NSMenuDelegate>
{
    NSMenu *_menu;
    NSMenuItem *_selectedItem;
    BOOL _pullsDown;
    BOOL _isPopped;
    CDUnknownBlockType _itemSelectedHandler;
    CDUnknownBlockType _menuWillOpenHandler;
    CDUnknownBlockType _menuDidCloseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType menuDidCloseHandler; // @synthesize menuDidCloseHandler=_menuDidCloseHandler;
@property(copy, nonatomic) CDUnknownBlockType menuWillOpenHandler; // @synthesize menuWillOpenHandler=_menuWillOpenHandler;
@property(copy, nonatomic) CDUnknownBlockType itemSelectedHandler; // @synthesize itemSelectedHandler=_itemSelectedHandler;
@property(nonatomic) BOOL pullsDown; // @synthesize pullsDown=_pullsDown;
@property(nonatomic) NSMenuItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)menuDidClose:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (BOOL)mouseDown:(id)arg1;
- (void)setMenuDidCloseHandlerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setMenuWillOpenHandlerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setItemSelectedHandlerWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)popupPoint;
- (void)dealloc;

@end

