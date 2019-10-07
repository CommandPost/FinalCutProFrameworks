//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CAAnimationDelegate.h"
#import "FFAutoexpandingTextFieldDelegate.h"
#import "FFShareExtraSettingsConfiguratorDelegate.h"
#import "NSOpenSavePanelDelegate.h"
#import "NSTextFieldDelegate.h"
#import "NSTokenFieldDelegate.h"

@class CALayer, CKBatch, CKSource, FFShareDataModel, FFShareDestination, FFShareDestinationController, FFShareExportPanelsHelper, FFShareSourceDestinationMapping, FFShareSourcesListViewController, FFShareVideoPreviewViewController, LKButton, LKScroller, NSArray, NSColor, NSDictionary, NSImage, NSImageView, NSMapTable, NSMutableDictionary, NSSet, NSString, NSURL, NSView;

__attribute__((visibility("hidden")))
@interface FFBaseSharePanel : NSWindowController <CAAnimationDelegate, NSOpenSavePanelDelegate, NSTextFieldDelegate, NSTokenFieldDelegate, FFAutoexpandingTextFieldDelegate, FFShareExtraSettingsConfiguratorDelegate>
{
    NSArray *_sources;
    FFShareDestination *_originalDestination;
    NSArray *_destinationControllers;
    NSArray *_batches;
    NSURL *_destinationURL;
    NSMutableDictionary *_reducedCollatedMetadata;
    FFShareVideoPreviewViewController *_videoPreviewViewController;
    FFShareSourcesListViewController *_sourcesListViewController;
    BOOL _sharingFromTheater;
    id <FFSharePanelDelegate> _delegate;
    unsigned long long _selectedDestinationIndex;
    CDUnknownBlockType _completionHandler;
    LKButton *_okButton;
    LKButton *_cancelButton;
    LKButton *_addToTheaterButton;
    NSImageView *_backgroundImageView;
    NSView *_infoView;
    LKScroller *_infoViewVerticalScroller;
    LKScroller *_infoViewHorizontalScroller;
    NSDictionary *_metadataFields;
    NSSet *_requiredMetadataKeys;
    NSImage *_previewImage;
    NSArray *_errors;
    BOOL _observingTargets;
    FFShareExportPanelsHelper *_panelsHelper;
    BOOL _canExportSelectedLayersOnly;
    FFShareDataModel *_dataModel;
    double _previewTime;
    NSMapTable *_mapDestinationToMetadata;
    FFShareSourceDestinationMapping *_sourceDestinationMapping;
}

+ (id)sharePanelWithSources:(id)arg1 destination:(id)arg2 error:(id *)arg3;
+ (id)sharePanelWithSource:(id)arg1 destination:(id)arg2 error:(id *)arg3;
+ (id)keyPathsForValuesAffectingCanSelectPrevious;
+ (id)keyPathsForValuesAffectingCanSelectNext;
+ (id)keyPathsForValuesAffectingErrorDescriptionColor;
+ (id)keyPathsForValuesAffectingErrorIcon;
+ (id)keyPathsForValuesAffectingErrorDescription;
+ (id)keyPathsForValuesAffectingHasErrors;
+ (id)keyPathsForValuesAffectingBatch;
+ (id)keyPathsForValuesAffectingSelectedDestinationController;
+ (id)keyPathsForValuesAffectingDestination;
+ (id)keyPathsForValuesAffectingHasMultipleDestinations;
+ (void)initialize;
@property(retain, nonatomic) FFShareSourceDestinationMapping *sourceDestinationMapping; // @synthesize sourceDestinationMapping=_sourceDestinationMapping;
@property(retain, nonatomic) FFShareExportPanelsHelper *panelsHelper; // @synthesize panelsHelper=_panelsHelper;
@property(readonly, nonatomic) NSMapTable *mapDestinationToMetadata; // @synthesize mapDestinationToMetadata=_mapDestinationToMetadata;
@property(nonatomic) BOOL canExportSelectedLayersOnly; // @synthesize canExportSelectedLayersOnly=_canExportSelectedLayersOnly;
@property(nonatomic) double previewTime; // @synthesize previewTime=_previewTime;
@property(retain, nonatomic) FFShareSourcesListViewController *sourcesListViewController; // @synthesize sourcesListViewController=_sourcesListViewController;
@property(retain, nonatomic) FFShareVideoPreviewViewController *videoPreviewViewController; // @synthesize videoPreviewViewController=_videoPreviewViewController;
@property(retain, nonatomic) FFShareDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSDictionary *metadataFields; // @synthesize metadataFields=_metadataFields;
@property(nonatomic) LKScroller *infoViewHorizontalScroller; // @synthesize infoViewHorizontalScroller=_infoViewHorizontalScroller;
@property(nonatomic) LKScroller *infoViewVerticalScroller; // @synthesize infoViewVerticalScroller=_infoViewVerticalScroller;
@property(nonatomic) NSView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) LKButton *addToTheaterButton; // @synthesize addToTheaterButton=_addToTheaterButton;
@property(nonatomic) LKButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) LKButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) unsigned long long selectedDestinationIndex; // @synthesize selectedDestinationIndex=_selectedDestinationIndex;
@property(nonatomic) id <FFSharePanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL sharingFromTheater; // @synthesize sharingFromTheater=_sharingFromTheater;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) NSArray *destinationControllers; // @synthesize destinationControllers=_destinationControllers;
@property(retain, nonatomic) FFShareDestination *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (id)sourceForDestination:(id)arg1;
- (void)didConfigureExtraSettings:(id)arg1;
- (void)willConfigureExtraSettings:(id)arg1;
- (id)helperAppPathWithDestination:(id)arg1;
- (void)updateUI;
- (void)postProcessErrors:(id)arg1;
- (void)updateErrors;
- (id)reconcileValues:(id)arg1 withFallback:(id)arg2;
- (id)reduceCollatedMetadata:(id)arg1;
- (id)collateMetadataDictionaries:(id)arg1;
- (id)requiredMetadataKeys;
- (double)autoexpandingControl:(id)arg1 adjustHeight:(double)arg2 toFitSize:(struct CGSize)arg3;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbindMetadataFields;
- (void)bindMetadataFields;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)doSubmitAnimation:(id)arg1 toDestination:(struct CGRect)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)newPreviewImageRep;
- (void)postProcessSource:(id)arg1 withDestinationController:(id)arg2 andDestination:(id)arg3;
- (id)batchNameWithBatch:(id)arg1 andDestination:(id)arg2;
- (BOOL)sourceIsProject:(id)arg1;
- (BOOL)areAllSourcesProjects;
- (id)stringTypeDescriptionOfItemsSelectedForExport;
- (id)outputURLWithDestination:(id)arg1;
- (id)fileNamesToRevealInUserNotificationWithDestinationController:(id)arg1;
- (id)newUserNotificationGroup:(id)arg1;
- (void)assignDestination:(id)arg1 toUserNotificationGroup:(id)arg2;
- (void)assignDestinationsToUserNotificationGroupsWithDestinationController:(id)arg1;
- (void)assignDestinationsToUserNotificationGroups;
- (void)closeWithCode:(long long)arg1;
- (void)prepareForShareWithBatches:(id)arg1;
- (BOOL)isSheet;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)selectPreviousNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)cancel:(id)arg1;
- (id)captionSidecarFilesForDestination:(id)arg1;
- (unsigned long long)numberOfOutputFilesForDestination:(id)arg1;
- (void)ok:(id)arg1;
- (void)okButtonFinalize;
@property(readonly, nonatomic) NSColor *errorDescriptionColor;
@property(readonly, nonatomic) NSString *errorDescription;
@property(readonly, nonatomic) NSImage *errorIcon;
@property(readonly, nonatomic) BOOL hasErrors;
- (BOOL)hasUserVisibleMajorError;
- (id)userVisibleErrors;
@property(readonly, nonatomic) BOOL canSelectPrevious;
@property(readonly, nonatomic) BOOL canSelectNext;
@property(readonly, nonatomic) NSString *okButtonTitle;
@property(readonly, nonatomic) FFShareDestinationController *selectedDestinationController;
@property(readonly, nonatomic) CKBatch *batch;
@property(readonly, nonatomic) FFShareDestination *destination;
@property(readonly, nonatomic) BOOL hasMultipleDestinations;
- (void)setReducedCollatedMetadata:(id)arg1;
@property(readonly, nonatomic) NSDictionary *reducedCollatedMetadata;
@property(readonly, nonatomic) NSArray *targets;
@property(readonly, nonatomic) NSArray *batches;
@property(readonly, retain, nonatomic) NSArray *destinations;
@property(readonly, nonatomic) CKSource *source; // @dynamic source;
@property(readonly, nonatomic) CALayer *previewLayer;
@property(readonly, nonatomic) NSView *previewView;
- (void)setupVideoPreviewViewController;
- (void)setupShareSourcesListViewController;
@property(readonly, nonatomic) BOOL isBatchExport;
- (void)setupVideoPreviewOrSourcesList;
- (void)windowDidLoad;
- (void)stopObservingValidationErrors;
- (void)startObservingValidationErrors;
- (void)dealloc;
- (id)errorForDisabledBatchExportToThirdPartyAppWithPath:(id)arg1;
- (BOOL)isBatchExportToThirdPartyAppWithPath:(id)arg1 sources:(id)arg2;
- (id)appNameWithPath:(id)arg1;
- (id)errorForDisabledBatchExportToThirdPartyApp:(id)arg1;
- (id)initWithSources:(id)arg1 destination:(id)arg2 nibName:(id)arg3 error:(id *)arg4;
- (id)initWithSource:(id)arg1 destination:(id)arg2 nibName:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

