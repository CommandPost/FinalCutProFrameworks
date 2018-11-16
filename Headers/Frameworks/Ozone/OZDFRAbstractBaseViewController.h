//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "OZDFRDocumentOwnerControllerDelegate.h"

@class NSPopoverTouchBarItem, NSString, OZDFRDocumentOwnerController;

@interface OZDFRAbstractBaseViewController : NSViewController <OZDFRDocumentOwnerControllerDelegate>
{
    OZDFRDocumentOwnerController *_documentOwnerController;
    NSPopoverTouchBarItem *_popoverItem;
}

+ (id)nibBundle;
+ (id)nibName;
+ (id)viewControllerWithDocumentOwner:(id)arg1;
@property(nonatomic) NSPopoverTouchBarItem *popoverItem; // @synthesize popoverItem=_popoverItem;
@property(readonly, nonatomic) OZDFRDocumentOwnerController *documentOwnerController; // @synthesize documentOwnerController=_documentOwnerController;
- (void)updateWithNotificationFlags:(unsigned int)arg1;
- (id)localizedUndoString;
- (unsigned int)didChangeChannelAdditionalNotificationFlags;
- (void)didChangeChannel:(struct OZSceneNode *)arg1;
- (void)willChangeChannel:(struct OZSceneNode *)arg1;
- (void)callSelectorWithShortIdentifier:(id)arg1;
- (void)dismiss;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDocumentOwner:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
