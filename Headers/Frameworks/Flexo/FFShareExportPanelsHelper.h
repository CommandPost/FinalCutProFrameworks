//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFShareProgressDelegate.h"

@class FFCancelablePromise, FFShareDataModel, FFShareExtraSettingsConfigurator, NSArray, NSDictionary, NSMapTable, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface FFShareExportPanelsHelper : NSObject <FFShareProgressDelegate>
{
    NSWindow *_window;
    FFShareExtraSettingsConfigurator *_extraSettingsConfigurator;
    NSArray *_destinationControllers;
    FFShareDataModel *_dataModel;
    NSMapTable *_mapDestinationToMetadata;
    NSDictionary *_reducedCollatedMetadata;
    CDUnknownBlockType _numberOfOutputFilesForDestination;
    CDUnknownBlockType _captionSidecarFilesForDestination;
    FFCancelablePromise *_progressPromise;
}

@property(retain) FFCancelablePromise *progressPromise; // @synthesize progressPromise=_progressPromise;
@property(copy, nonatomic) CDUnknownBlockType captionSidecarFilesForDestination; // @synthesize captionSidecarFilesForDestination=_captionSidecarFilesForDestination;
@property(copy, nonatomic) CDUnknownBlockType numberOfOutputFilesForDestination; // @synthesize numberOfOutputFilesForDestination=_numberOfOutputFilesForDestination;
@property(copy, nonatomic) NSDictionary *reducedCollatedMetadata; // @synthesize reducedCollatedMetadata=_reducedCollatedMetadata;
@property(copy, nonatomic) NSMapTable *mapDestinationToMetadata; // @synthesize mapDestinationToMetadata=_mapDestinationToMetadata;
@property(retain, nonatomic) FFShareDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) NSArray *destinationControllers; // @synthesize destinationControllers=_destinationControllers;
@property(retain, nonatomic) FFShareExtraSettingsConfigurator *extraSettingsConfigurator; // @synthesize extraSettingsConfigurator=_extraSettingsConfigurator;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)doSavePanelForDestinations:(id)arg1 promise:(id)arg2;
- (void)stripXMLFromDestination:(id)arg1;
- (id)determineDestinationsNeedingSavePanel;
- (long long)panelsForSavePanel;
- (void)progressCanceled:(id)arg1;
- (long long)helperApplicationDidAddAssetWithDataOptions:(id)arg1 destination:(id)arg2 libraryInfo:(id)arg3 locationInfo:(id)arg4 metadata:(id)arg5;
- (long long)helperApplicationOutputLocationForDestinations:(id)arg1 withHelperApp:(id)arg2;
- (id)helperAppPathWithDestination:(id)arg1;
- (long long)panelsForThirdPartyShareIntegration;
- (long long)showUserAgreementPanels;
- (long long)showPanelsBackground;
- (void)showPanelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

