//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

#import "OZListController.h"
#import "OZOutlineVarRowHeightDelegate.h"

@class LKSearchField, LKSegmentedControl, LKSlider, NSImage, NSImageView, NSLayoutConstraint, NSMenuItem, NSMutableArray, NSString, NSView, OZFootageListOutlineView, OZTimecodeFormatter;

@interface OZFootageListModule : OZProViewModule <OZListController, OZOutlineVarRowHeightDelegate>
{
    OZFootageListOutlineView *_outlineView;
    id _previewColumn;
    id _typeColumn;
    id _durationColumn;
    id _inUseColumn;
    id _frameSizeColumn;
    id _compressorColumn;
    id _depthColumn;
    id _frameRateColumn;
    id _dataRateColumn;
    id _audioRateColumn;
    id _audioFormatColumn;
    id _fileSizeColumn;
    id _fileCreatedColumn;
    id _fileModifiedColumn;
    LKSearchField *_searchField;
    LKSlider *_zoomSlider;
    NSImageView *_smallZoomImage;
    NSImageView *_largeZoomImage;
    NSMenuItem *_keyEquivalentMenuItem;
    NSView *_slideUpSearchView;
    LKSegmentedControl *_contentsControl;
    OZTimecodeFormatter *_formatter;
    struct OZProjectPanelState *_mediaState;
    struct map<unsigned int, OZFootageNodeWrapper *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZFootageNodeWrapper *>>> *_wrapperMap;
    NSMutableArray *_footageArray;
    NSMutableArray *_sortedFootageArray;
    NSString *_sortColumn;
    BOOL _sortIsDescending;
    double _zoomFactor;
    BOOL _listenToNotification;
    BOOL _previewOn;
    BOOL _typeOn;
    BOOL _durationOn;
    BOOL _inUseOn;
    BOOL _frameSizeOn;
    BOOL _compressorOn;
    BOOL _depthOn;
    BOOL _frameRateOn;
    BOOL _dataRateOn;
    BOOL _audioRateOn;
    BOOL _audioFormatOn;
    BOOL _fileSizeOn;
    BOOL _fileCreatedOn;
    BOOL _fileModifiedOn;
    NSImage *_speakerImage;
    NSImage *_missingImage;
    NSLayoutConstraint *_scrollViewBottomToBorderedViewTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *scrollViewBottomToBorderedViewTopConstraint; // @synthesize scrollViewBottomToBorderedViewTopConstraint=_scrollViewBottomToBorderedViewTopConstraint;
- (void)magnifyWithEvent:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contentsControlAction:(id)arg1;
- (void)setZoom:(id)arg1;
- (void)setZoomMax:(id)arg1;
- (void)setZoomMin:(id)arg1;
- (void)sortBy:(id)arg1;
- (void)toggleFileModifiedVisibility:(id)arg1;
- (void)toggleFileCreatedVisibility:(id)arg1;
- (void)toggleFileSizeVisibility:(id)arg1;
- (void)toggleAudioFormatVisibility:(id)arg1;
- (void)toggleAudioRateVisibility:(id)arg1;
- (void)toggleDataRateVisibility:(id)arg1;
- (void)toggleFrameRateVisibility:(id)arg1;
- (void)toggleDepthVisibility:(id)arg1;
- (void)toggleCompressorVisibility:(id)arg1;
- (void)toggleFrameSizeVisibility:(id)arg1;
- (void)toggleInUseVisibility:(id)arg1;
- (void)toggleDurationVisibility:(id)arg1;
- (void)toggleTypeVisibility:(id)arg1;
- (void)toggleMediaPreviewVisibility:(id)arg1;
- (void)setFileModifiedVisibility:(BOOL)arg1;
- (void)setFileCreatedVisibility:(BOOL)arg1;
- (void)setFileSizeVisibility:(BOOL)arg1;
- (void)setAudioFormatVisibility:(BOOL)arg1;
- (void)setAudioRateVisibility:(BOOL)arg1;
- (void)setDataRateVisibility:(BOOL)arg1;
- (void)setFrameRateVisibility:(BOOL)arg1;
- (void)setDepthVisibility:(BOOL)arg1;
- (void)setCompressorVisibility:(BOOL)arg1;
- (void)setFrameSizeVisibility:(BOOL)arg1;
- (void)setInUseVisibility:(BOOL)arg1;
- (void)setDurationVisibility:(BOOL)arg1;
- (void)setTypeVisibility:(BOOL)arg1;
- (void)setPreviewVisibility:(BOOL)arg1;
- (void)openColumnMenu:(id)arg1;
- (void)importFiles:(id)arg1;
- (void)search:(id)arg1;
- (void)outlineView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)updateTableHeaderToMatchCurrentSort:(id)arg1;
- (void)imageReady:(unsigned int)arg1;
- (struct CGRect)imageRect;
- (double)imageSize;
- (void)updatePreviewBackground;
- (void)updatePreviews;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)_createDropInfo:(struct OZDropTargetInfo *)arg1 sender:(id)arg2 afterNode:(struct OZSceneNode *)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 changedHeightOfItem:(id)arg2 to:(double)arg3;
- (void)outlineView:(id)arg1 changingHeightOfItem:(id)arg2 to:(double)arg3;
- (double)outlineView:(id)arg1 checkChangeToHeightOfItem:(id)arg2 to:(double)arg3;
- (BOOL)outlineView:(id)arg1 canChangeHeightOfItem:(id)arg2;
- (double)outlineView:(id)arg1 heightForItem:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)truncatedString:(id)arg1;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)updateFootageArray;
- (void)updateSelection;
- (void)updateFootageList;
- (id)wrapObject:(struct OZSceneNodeFile *)arg1;
- (id)wrapObjectID:(unsigned int)arg1;
- (id)newNodeWrapper:(struct OZSceneNodeFile *)arg1;
- (id)columnKeyFromTag:(unsigned long long)arg1;
- (void)setSortColumn:(id)arg1;
- (id)sortColumn;
- (void)setSortIsDescending:(BOOL)arg1;
- (BOOL)sortIsDescending;
- (id)_formatter;
- (id)missingImage;
- (id)speakerImage;
- (id)searchString;
- (unsigned long long)keyEquivalentModifierMask;
- (id)keyEquivalent;
- (id)label;
- (void)update;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)initOutlineView;
- (void)dealloc;
- (id)init;
- (struct OZDocument *)currentOZDocument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

