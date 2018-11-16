//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSAnimationDelegate.h"
#import "NSOpenSavePanelDelegate.h"

@interface FFAXELImportDialogController : NSViewController <NSAnimationDelegate, NSOpenSavePanelDelegate>
{
    BOOL mImportAllMedia;
    BOOL mIncludeMarkers;
    BOOL mIncludeFX;
    BOOL mDebugExportAfterImport;
    id mPanel;
    id mAdvancedOptionsButton;
    id mCheckboxOptionsView;
    id mImportAllMediaButton;
    id mIncludeMarkersButton;
    id mIncludeFXButton;
    id mDebugExportAfterImportButton;
}

- (void)refreshCheckboxes;
- (void)resetDefaults:(BOOL)arg1;
- (id)initWithOpenPanel:(id)arg1 openProjects:(id)arg2;
- (id)optionsDict;
- (void)setImportMediaForXML:(id)arg1;
- (void)setIncludeMarkers:(id)arg1;
- (void)setIncludeFX:(id)arg1;
- (void)setDebugExportAfterImport:(id)arg1;
- (void)revealHide:(BOOL)arg1 optionsView:(id)arg2;
- (void)showCheckboxes:(BOOL)arg1;
- (void)toggleRevealAdvancedOptions:(id)arg1;

@end

