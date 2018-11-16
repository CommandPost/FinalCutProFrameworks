//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OZDFRDocumentOwnerControllerDelegate.h"
#import "OZDFRSliderControllerDelegate.h"

@class NSString, OZDFRDocumentOwnerController, OZDFRSliderController;

@interface OZDFRSliderBarItemBaseController : NSObject <OZDFRSliderControllerDelegate, OZDFRDocumentOwnerControllerDelegate>
{
    OZDFRDocumentOwnerController *_documentOwnerController;
    OZDFRSliderController *_sliderController;
    BOOL _isRegisteredForNotifications;
    NSString *_shortIdentifier;
}

+ (id)controllerWithShortIdentifier:(id)arg1 documentOwner:(id)arg2 sliderBarItem:(id)arg3;
@property(copy, nonatomic) NSString *shortIdentifier; // @synthesize shortIdentifier=_shortIdentifier;
@property(readonly, nonatomic) OZDFRSliderController *sliderController; // @synthesize sliderController=_sliderController;
@property(readonly, nonatomic) OZDFRDocumentOwnerController *documentOwnerController; // @synthesize documentOwnerController=_documentOwnerController;
- (id)localizedUndoString;
- (unsigned int)didChangeChannelAdditionalNotificationFlags;
- (void)didChangeChannel:(struct OZSceneNode *)arg1;
- (void)willChangeChannel:(struct OZSceneNode *)arg1;
- (void)updateDocumentIsStarting:(BOOL)arg1 isDone:(BOOL)arg2;
- (void)updateToCurrentDocumentState;
- (void)updateWithNotificationFlags:(unsigned int)arg1;
- (id)sliderMaximumValueAccessory;
- (id)sliderMinimumValueAccessory;
- (id)sliderAccessibilityTitle;
- (double)sliderIncrementValue;
- (double)sliderMaxValue;
- (double)sliderMinValue;
- (unsigned long long)sliderWidth;
- (id)keyPathForSliderValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onDFRSliderBarItem:(id)arg1 isStarting:(BOOL)arg2 isDone:(BOOL)arg3;
- (id)init;
- (id)initWithShortIdentifier:(id)arg1 documentOwner:(id)arg2 sliderBarItem:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

