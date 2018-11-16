//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FFAutoexpandingTextFieldDelegate.h"
#import "NSOpenSavePanelDelegate.h"
#import "NSTextFieldDelegate.h"
#import "NSTokenFieldDelegate.h"

@class CALayer, CKBatch, CKSource, FFShareDestination, FFShareDestinationController, LKButton, NSArray, NSDictionary, NSImage, NSImageView, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTrackingArea, NSURL, NSView;

__attribute__((visibility("hidden")))
@interface FFBaseSharePanel : NSWindowController <NSOpenSavePanelDelegate, NSTextFieldDelegate, NSTokenFieldDelegate, FFAutoexpandingTextFieldDelegate>
{
    CKSource *_source;
    FFShareDestination *_originalDestination;
    NSArray *_destinationControllers;
    NSArray *_batches;
    NSURL *_destinationURL;
    NSMutableDictionary *_metadata;
    NSView *_previewView;
    CALayer *_topLayer;
    CALayer *_previewLayer;
    CALayer *_glossLayer;
    CALayer *_skimmerLayer;
    double _previewTime;
    NSTrackingArea *_previewTrackingArea;
    id _normalTransform;
    id _skimmingTransform;
    double _glossLayerOpacity;
    struct CGPoint _glossLayerPosition;
    BOOL _sharingFromTheater;
    id <FFSharePanelDelegate> _delegate;
    unsigned long long _selectedDestinationIndex;
    CDUnknownBlockType _completionHandler;
    LKButton *_okButton;
    LKButton *_cancelButton;
    LKButton *_addToTheaterButton;
    NSImageView *_backgroundImageView;
    NSView *_infoView;
    NSDictionary *_metadataFields;
    NSSet *_requiredMetadataKeys;
    NSMutableSet *_validFileNames;
    NSArray *_errors;
}

+ (id)keyPathsForValuesAffectingCanSelectPrevious;
+ (id)keyPathsForValuesAffectingCanSelectNext;
+ (id)keyPathsForValuesAffectingErrorDescription;
+ (id)keyPathsForValuesAffectingHasErrors;
+ (id)keyPathsForValuesAffectingBatch;
+ (id)keyPathsForValuesAffectingSelectedDestinationController;
+ (id)keyPathsForValuesAffectingDestination;
+ (id)keyPathsForValuesAffectingHasMultipleDestinations;
+ (void)initialize;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSMutableSet *validFileNames; // @synthesize validFileNames=_validFileNames;
@property(retain, nonatomic) NSDictionary *metadataFields; // @synthesize metadataFields=_metadataFields;
@property(nonatomic) NSView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) LKButton *addToTheaterButton; // @synthesize addToTheaterButton=_addToTheaterButton;
@property(nonatomic) LKButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) LKButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) unsigned long long selectedDestinationIndex; // @synthesize selectedDestinationIndex=_selectedDestinationIndex;
@property(nonatomic) id <FFSharePanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint glossLayerPosition; // @synthesize glossLayerPosition=_glossLayerPosition;
@property(nonatomic) BOOL sharingFromTheater; // @synthesize sharingFromTheater=_sharingFromTheater;
@property(nonatomic) double glossLayerOpacity; // @synthesize glossLayerOpacity=_glossLayerOpacity;
@property(retain, nonatomic) id skimmingTransform; // @synthesize skimmingTransform=_skimmingTransform;
@property(retain, nonatomic) id normalTransform; // @synthesize normalTransform=_normalTransform;
@property(retain, nonatomic) NSTrackingArea *previewTrackingArea; // @synthesize previewTrackingArea=_previewTrackingArea;
@property(retain, nonatomic) CALayer *skimmerLayer; // @synthesize skimmerLayer=_skimmerLayer;
@property(retain, nonatomic) CALayer *glossLayer; // @synthesize glossLayer=_glossLayer;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) CALayer *topLayer; // @synthesize topLayer=_topLayer;
@property(nonatomic) NSView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) NSArray *batches; // @synthesize batches=_batches;
@property(retain, nonatomic) NSArray *destinationControllers; // @synthesize destinationControllers=_destinationControllers;
@property(retain, nonatomic) FFShareDestination *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(retain, nonatomic) CKSource *source; // @synthesize source=_source;
- (void)updateUI;
- (void)updateErrors;
- (id)requiredMetadataKeys;
- (double)autoexpandingControl:(id)arg1 adjustHeight:(double)arg2 toFitSize:(struct CGSize)arg3;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)targetValidationDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)sourceCurrentFrameTime;
- (void)unbindMetadataFields;
- (void)bindMetadataFields;
- (double)normalizedTimeFromPreviewTime:(double)arg1;
- (double)previewTimeFromNormalizedTime:(double)arg1;
- (BOOL)exportSelection;
- (struct CGRect)previewFrame;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)closeWithCode:(long long)arg1;
- (BOOL)isSheet;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)selectPreviousNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)cancel:(id)arg1;
- (void)showSavePanelForDestinationsAtIndexes:(id)arg1;
- (void)progressCanceled:(id)arg1;
- (void)getHelperApplicationOutputLocation:(id)arg1 withHelperApp:(id)arg2;
- (void)userAgreementPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showUserAgreementPanelForDestination:(id)arg1 contextInfo:(id)arg2;
- (void)showPanelsWithContextInfo:(id)arg1;
- (void)ok:(id)arg1;
@property(readonly, nonatomic) NSString *errorDescription;
@property(readonly, nonatomic) NSImage *errorIcon;
@property(readonly, nonatomic) BOOL hasErrors;
- (id)userVisibleErrors;
@property(readonly, nonatomic) BOOL canSelectPrevious;
@property(readonly, nonatomic) BOOL canSelectNext;
@property(nonatomic) double previewTime;
@property(readonly, nonatomic) NSString *okButtonTitle;
@property(readonly, nonatomic) FFShareDestinationController *selectedDestinationController;
@property(readonly, nonatomic) CKBatch *batch;
@property(readonly, nonatomic) FFShareDestination *destination;
@property(readonly, nonatomic) BOOL hasMultipleDestinations;
@property(copy, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) NSArray *targets;
@property(readonly, nonatomic) NSArray *destinations;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)invalidDestinationErrorWithFileName:(id)arg1;
- (id)fileExistsErrorWithFileName:(id)arg1;
- (void)windowDidLoad;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 destination:(id)arg2 nibName:(id)arg3 error:(id *)arg4;

@end
