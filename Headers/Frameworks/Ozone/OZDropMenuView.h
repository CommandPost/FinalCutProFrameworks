//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSMutableDictionary, NSString;

@interface OZDropMenuView : NSView
{
    SEL _selector;
    id _selectorTarget;
    id _dropTarget;
    BOOL _highlightState;
    BOOL _isDefault;
    NSString *_mainText;
    NSMutableDictionary *_mainTextAttributes;
    NSString *_subText;
    NSMutableDictionary *_subTextAttributes;
    NSImage *_icon;
}

- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setIsDefault:(BOOL)arg1;
- (id)selectorTarget;
- (SEL)selector;
- (void)setIcon:(id)arg1;
- (void)setSubText:(id)arg1;
- (void)setMainText:(id)arg1;
- (void)setDropTarget:(id)arg1;
- (void)setSelectorTarget:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

