//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FFLibraryMediaLocationChooserDelegate.h"

@class FFLibrary, FFLibraryMediaLocationChooserController, NSButton, NSImageView, NSMutableDictionary, NSOperationQueue, NSPopUpButton, NSString, NSTextField, NSURL;

__attribute__((visibility("hidden")))
@interface FFConsolidateOptionsWindowController : NSWindowController <FFLibraryMediaLocationChooserDelegate>
{
    NSImageView *_appIconImageView;
    NSTextField *_title;
    NSPopUpButton *_mediaDestinationPopupButton;
    NSImageView *_warningImageView;
    NSButton *_originalMediaCheckbox;
    NSButton *_optimizedMediaCheckbox;
    NSButton *_proxyMediaCheckbox;
    NSTextField *_description;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSString *_titleString;
    FFLibrary *_library;
    NSString *_originalMediaLocationName;
    FFLibraryMediaLocationChooserController *_mediaLocationChooserController;
    BOOL _finishedModal;
    NSURL *_currentExternalMediaLocation;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _requiredSpaceOperationFactoryBlock;
    NSMutableDictionary *_requiredSpaceCache;
}

+ (BOOL)runConsolidateDialogWithTitle:(id)arg1 library:(id)arg2 options:(int *)arg3 requiredSpaceOperationFactoryBlock:(CDUnknownBlockType)arg4 externalMediaLocation:(id *)arg5;
@property BOOL finishedModal; // @synthesize finishedModal=_finishedModal;
@property(retain) NSMutableDictionary *requiredSpaceCache; // @synthesize requiredSpaceCache=_requiredSpaceCache;
@property(copy) CDUnknownBlockType requiredSpaceOperationFactoryBlock; // @synthesize requiredSpaceOperationFactoryBlock=_requiredSpaceOperationFactoryBlock;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSURL *currentExternalMediaLocation; // @synthesize currentExternalMediaLocation=_currentExternalMediaLocation;
- (id)cacheKeyForMediaLocation:(id)arg1 mediaRepOptions:(int)arg2;
- (void)requiedSpaceCalculationDidCompleteMainThread:(id)arg1;
- (void)requiedSpaceCalculationDidComplete:(id)arg1;
- (void)startNewRequiredSpaceOperation;
- (void)locationChooser:(id)arg1 didChangeValidationState:(BOOL)arg2;
- (void)locationChooser:(id)arg1 didChangeMediaLocation:(id)arg2;
- (void)updateDescription;
- (void)updateOKButton;
- (void)optionDidChange:(id)arg1;
- (void)stopModal:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 library:(id)arg2 requiredSpaceOperationFactoryBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
