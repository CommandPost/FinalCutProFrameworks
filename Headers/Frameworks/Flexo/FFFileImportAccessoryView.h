//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FFEventNameFormatter, FFStorageLocation, NSArrayController, NSBox, NSButton, NSOpenPanel;

__attribute__((visibility("hidden")))
@interface FFFileImportAccessoryView : NSView
{
    id _saveToMenu;
    id _eventRadioButtonMatrix;
    id _existingEventMenu;
    id _newEventName;
    NSArrayController *_eventArrayController;
    id _selectedEvent;
    FFStorageLocation *_selectedLocation;
    NSOpenPanel *_panel;
    BOOL _shouldCreateNewEvent;
    NSArrayController *_saveToMenuArrayController;
    NSButton *_copyFilesCheckBox;
    NSButton *_keywordCollectionsCheckBox;
    NSButton *_optimizeMediaCheckBox;
    NSButton *_createProxyMediaCheckBox;
    NSButton *_colorAutoCorrectCheckBox;
    NSButton *_imageStabilizationCheckBox;
    NSButton *_faceDetectionCheckBox;
    NSButton *_findPeopleConsolidateResultsCheckBox;
    NSButton *_createSmartCollectionsCheckBox;
    NSButton *_relatedAudioTracksCheckBox;
    NSButton *_cleanAudioCheckBox;
    NSButton *_removeSilentChannelsBox;
    NSBox *_postProcessingBox;
    FFEventNameFormatter *_eventNameFormatter;
}

- (void)setPanel:(id)arg1;
- (void)selectTargetEvent:(id)arg1;
- (void)selectTargetLocation:(id)arg1;
- (void)findPeopleAction:(id)arg1;
- (void)smartCollectionAction:(id)arg1;
- (id)eventName;
- (void)setDefaultNewEventString;
- (void)awakeFromNib;
- (void)cleanup;
- (void)eventRadioButtonMatrixAction:(id)arg1;
- (id)currentLocation;
- (id)currentEvent;
@property BOOL shouldCreateNewEvent; // @synthesize shouldCreateNewEvent=_shouldCreateNewEvent;
@property id selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property id selectedEvent; // @synthesize selectedEvent=_selectedEvent;

@end
