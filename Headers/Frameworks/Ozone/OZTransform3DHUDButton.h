//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKButton.h"

@class NSImage, OZTransform3DHUDController;

@interface OZTransform3DHUDButton : LKButton
{
    PCVector2_79efa81a *_startPoint;
    BOOL _isSettingTransform;
    BOOL _setCoarse;
    BOOL _setFine;
    BOOL _setConstrain;
    BOOL _useAlt;
    OZTransform3DHUDController *_controller;
    unsigned int _constrainAxis;
    NSImage *_defaultImage;
    NSImage *_pressedImage;
    NSImage *_altImage;
    NSImage *_altPressedImage;
}

- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)setPressedImage:(id)arg1;
- (void)setAltActionImage:(id)arg1;
- (void)setAltPressedImage:(id)arg1;
- (void)checkModifiers:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)setController:(id)arg1;
- (id)controller;
- (void)swapImages;

@end
