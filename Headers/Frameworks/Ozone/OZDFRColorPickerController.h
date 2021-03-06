//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/OZDFRDocumentOwnerControllerDelegate-Protocol.h>

@class NSColorPickerTouchBarItem, NSString, OZDFRDocumentOwnerController;

@interface OZDFRColorPickerController : NSObject <OZDFRDocumentOwnerControllerDelegate>
{
    OZDFRDocumentOwnerController *_documentOwnerController;
    struct PCColor _color;
    long long _pickerPhase;
    BOOL _isRegisteredForNotifications;
    NSColorPickerTouchBarItem *_colorPickerBarItem;
    NSString *_shortIdentifier;
}

+ (id)controllerWithShortIdentifier:(id)arg1 documentOwner:(id)arg2 colorPickerBarItem:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shortIdentifier; // @synthesize shortIdentifier=_shortIdentifier;
@property(readonly, nonatomic) NSColorPickerTouchBarItem *colorPickerBarItem; // @synthesize colorPickerBarItem=_colorPickerBarItem;
@property(readonly, nonatomic) OZDFRDocumentOwnerController *documentOwnerController; // @synthesize documentOwnerController=_documentOwnerController;
- (id)localizedUndoString;
- (void)didChangeChannel:(struct OZSceneNode *)arg1;
- (void)willChangeChannel:(struct OZSceneNode *)arg1;
- (unsigned int)didChangeChannelAdditionalNotificationFlags;
- (void)updateDocumentIsStarting:(BOOL)arg1 isDone:(BOOL)arg2;
- (void)updateToCurrentDocumentState;
- (void)updateWithNotificationFlags:(unsigned int)arg1;
- (void)onPickerDone:(id)arg1;
- (void)onChangedColor:(id)arg1;
- (void)onDidCancelContinuousTrackingNotification:(id)arg1;
- (void)onDidEndContinuousTrackingNotification:(id)arg1;
- (void)onWillBeginContinuousTrackingNotification:(id)arg1;
- (void)removeContinuousTrackingObserversFromItem:(id)arg1;
- (void)addContinuousTrackingObserversToItem:(id)arg1;
- (id)init;
- (id)initWithShortIdentifier:(id)arg1 documentOwner:(id)arg2 colorPickerBarItem:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

