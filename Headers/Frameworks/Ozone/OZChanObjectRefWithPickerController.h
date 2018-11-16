//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

#import "NSMenuDelegate.h"

@class LKPopUpButton, NSImage, NSTextField, OZObjectDragTarget;

@interface OZChanObjectRefWithPickerController : OZViewControllerGroup <NSMenuDelegate>
{
    OZObjectDragTarget *_pTarget;
    NSTextField *_pName;
    LKPopUpButton *_pPopUp;
    NSImage *_speakerImage;
    NSImage *_effectImage;
    NSImage *_behaviorImage;
    BOOL _allowsSelfReference;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (struct OZScene *)thisScene;
- (id)menu;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (void)enable;
- (void)disable;
- (void)allowSelfReference:(BOOL)arg1;
- (BOOL)doesAllowSelfReference;
- (BOOL)doesAllowLink:(struct OZObjectManipulator *)arg1;
- (BOOL)linkSceneNode:(struct OZObjectManipulator *)arg1;
- (BOOL)doesAllowDelete;
- (BOOL)areAllChannelsEqual;
- (void)setChannelValue:(id)arg1;
- (id)addMenuItem:(struct OZObjectManipulator *)arg1 ignoreObjID:(unsigned int)arg2 inputMenu:(id)arg3;
- (id)buildObjectMenu:(id)arg1 ignoreObjID:(unsigned int)arg2;
- (void)buildMenu:(struct OZChannelBase *)arg1;
- (void)buildDummyMenu;
- (void)menuNeedsUpdate:(id)arg1;
- (struct OZDocument *)document;

@end

