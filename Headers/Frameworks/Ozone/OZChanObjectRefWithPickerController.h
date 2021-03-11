//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

#import <Ozone/NSMenuDelegate-Protocol.h>

@class LKPopUpButton, NSImage, NSString, NSTextField, OZObjectDragTarget;

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

- (id)attributedStringForNodeName:(id)arg1;
- (struct OZDocument *)document;
- (void)menuNeedsUpdate:(id)arg1;
- (void)buildDummyMenu;
- (void)buildMenu:(struct OZChannelBase *)arg1;
- (id)buildObjectMenu:(id)arg1 ignoreObjID:(unsigned int)arg2;
- (id)addMenuItem:(struct OZObjectManipulator *)arg1 ignoreObjID:(unsigned int)arg2 inputMenu:(id)arg3;
- (void)setChannelValue:(id)arg1;
- (BOOL)areAllChannelsEqual;
- (BOOL)doesAllowDelete;
- (BOOL)linkSceneNode:(struct OZObjectManipulator *)arg1;
- (BOOL)doesAllowLink:(struct OZObjectManipulator *)arg1;
- (BOOL)doesAllowSelfReference;
- (void)allowSelfReference:(BOOL)arg1;
- (void)disable;
- (void)enable;
- (void)notify:(unsigned int)arg1;
- (void)update;
- (id)menu;
- (struct OZScene *)thisScene;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

