//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageBrowserCell.h>

@class CALayer, FFResponderLayerCheckbox, FFResponderLayerPushButton, FFTheaterDateFormatter, FFTheaterProgressLayer, FFThemeFacetLayer, NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFTheaterBrowserCell : FFImageBrowserCell
{
    NSError *_displayedError;
    NSMutableArray *_runningOperations;
    NSString *_lastUpdatedOperation;
    BOOL _isEditingTheaterTitle;
    FFTheaterDateFormatter *_dateFormatter;
    BOOL _displayedErrorPreventsPlayback;
    FFThemeFacetLayer *_strokeLayer;
    FFResponderLayerPushButton *_localOnlyBadgeIconLayer;
    FFResponderLayerPushButton *_errorBadgeIconLayer;
    FFResponderLayerPushButton *_ineligibleBadgeIconLayer;
    FFThemeFacetLayer *_badgeBackgroundLayer;
    CALayer *_badgeLayer;
    FFResponderLayerCheckbox *_menuButtonLayer;
    FFTheaterProgressLayer *_progressLayer;
    CALayer *_disabledOverlayLayer;
    FFThemeFacetLayer *_selectionRingLayer;
    FFResponderLayerPushButton *_playButtonLayer;
    BOOL _mouseIsOverCell;
    BOOL _isUploadingAfterInitialTranscode;
}

+ (void)initialize;
@property(nonatomic) BOOL isUploadingAfterInitialTranscode; // @synthesize isUploadingAfterInitialTranscode=_isUploadingAfterInitialTranscode;
@property(nonatomic) BOOL mouseIsOverCell; // @synthesize mouseIsOverCell=_mouseIsOverCell;
@property(nonatomic) BOOL isEditingTheaterTitle; // @synthesize isEditingTheaterTitle=_isEditingTheaterTitle;
@property(retain, nonatomic) FFTheaterDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSString *lastUpdatedOperation; // @synthesize lastUpdatedOperation=_lastUpdatedOperation;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(readonly, nonatomic) NSError *displayedError; // @synthesize displayedError=_displayedError;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_subtitleUIElement;
- (id)_titleUIElement;
- (id)_imageUIElement;
- (id)accessibilityAttributeNames;
- (void)_updateDisabledState;
- (BOOL)_isPlayable;
- (void)_updatePlayButton;
- (void)_updateMenuButton;
- (void)_menuPopoverDidHide:(id)arg1;
- (void)showMenuPopover;
- (void)_updateBadge;
- (void)updateIneligibleTooltip:(BOOL)arg1;
- (void)updateLocalOnlyTooltip:(BOOL)arg1;
- (void)_updateSubtitle;
- (id)_subtitleForOperation:(id)arg1;
- (id)_subtitleForSelection;
- (BOOL)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)mouseEntered:(id)arg1;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (void)_updateProgress:(double)arg1 forOperation:(id)arg2 animate:(BOOL)arg3;
- (void)updateProgress:(double)arg1 forOperation:(id)arg2;
- (void)endProgressUpdatesForOperation:(id)arg1 didSucceed:(BOOL)arg2;
- (void)startProgressUpdatesForOperation:(id)arg1 initialProgress:(double)arg2;
- (void)startProgressUpdatesForOperation:(id)arg1;
- (BOOL)isWatchingProgressUpdatesForOperation:(id)arg1;
- (struct CGRect)maximumTitleFrameForHeight:(double)arg1;
- (void)layoutSublayers;
- (void)reloadData;
- (void)_databaseDidFinishInitialLoad:(id)arg1;
- (void)setDisplayedError:(id)arg1;
- (void)clearErrorDomain:(id)arg1;
- (void)clearErrorCode:(long long)arg1;
- (void)setDisplayedError:(id)arg1 preventsPlayback:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (id)subtitleLayer;
- (id)_playButtonLayer;
- (id)_selectionRingLayer;
- (id)_disabledOverlayLayer;
- (id)_progressLayer;
- (id)_menuButtonLayer;
- (id)_badgeLayer;
- (id)_badgeBackgroundLayer;
- (id)_ineligibleBadgeIconLayer;
- (id)_errorBadgeIconLayer;
- (id)_localOnlyBadgeIconLayer;
- (id)_strokeLayer;
- (void)dealloc;
- (id)init;

@end

