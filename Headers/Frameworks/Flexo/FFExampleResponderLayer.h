//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

@class CALayer, CHChannelDouble, FFChannelChangeController, FFResponderLayerCheckbox, FFResponderLayerDisclosureButton, FFResponderLayerPopupButton, FFResponderLayerPushButton, FFResponderLayerStaticText, NSString;

__attribute__((visibility("hidden")))
@interface FFExampleResponderLayer : FFResponderLayer
{
    BOOL _isModelLayer;
    CHChannelDouble *_channel;
    NSString *_actionName;
    id _item;
    CALayer *_thumbLayer;
    FFResponderLayerPushButton *_increaseSizeButton;
    FFResponderLayerPushButton *_decreaseSizeButton;
    FFResponderLayerCheckbox *_checkbox;
    FFResponderLayerDisclosureButton *_disclosureButton;
    FFResponderLayerStaticText *_staticText;
    FFResponderLayerPopupButton *_popupButton;
    FFChannelChangeController *_changeController;
}

- (id)initWithChannel:(id)arg1 actionName:(id)arg2 forItem:(id)arg3;
- (void)dealloc;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)delete:(id)arg1;
- (void)up:(id)arg1;
- (void)down:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)layoutSublayers;
- (void)becomeFocusOwner;
- (void)resignFocusOwner;
- (void)_incrementHeight:(double)arg1;
- (void)_decrementHeightBy10:(id)arg1;
- (void)_incrementChannel:(double)arg1;
- (void)_contextMenuAction:(id)arg1;
- (void)_channelChanged:(id)arg1;
- (void)_beginChanges;
- (void)_endChanges;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 event:(id)arg2;
- (id)contextMenuForPart:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragCanceled:(id)arg1;
- (BOOL)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)_thumbUIElement;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (void)syntheticUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;

@end
