//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import <Flexo/NSControlTextEditingDelegate-Protocol.h>

@class FFAnchoredTimeMarker, LKButton, LKSegmentedCell, LKSegmentedControl, LKTextField, NSString;
@protocol FFMarkerEditorDelegate;

@interface FFMarkerEditorViewModule : LKViewModule <NSControlTextEditingDelegate>
{
    LKSegmentedControl *typeControl;
    LKSegmentedCell *typeCell;
    LKTextField *displayNameField;
    LKTextField *timecodeField;
    LKButton *deleteButton;
    LKButton *todoButton;
    FFAnchoredTimeMarker *_marker;
    id <FFMarkerEditorDelegate> _markerEditorDelegate;
}

+ (void)initialize;
@property(nonatomic) id <FFMarkerEditorDelegate> markerEditorDelegate; // @synthesize markerEditorDelegate=_markerEditorDelegate;
@property(retain, nonatomic) FFAnchoredTimeMarker *marker; // @synthesize marker=_marker;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)dealloc;
- (void)_removeObserverForMarkerProperties;
- (void)_addObserverForMarkerProperties;
- (void)chapterPosterOffsetUpdated:(id)arg1;
- (void)toggleCompleted:(id)arg1;
- (void)changeType:(id)arg1;
- (void)delete:(id)arg1;
- (void)save:(id)arg1;
- (void)close:(id)arg1;
- (id)identifier;
- (void)_setupNameFieldSelection;
- (void)_updateTodoButton;
- (void)_selectMarkerTypeCell;
- (void)_reflectMarkerPropertiesInGUIWithChangedKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowDidShow;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)_updateTypeCellSegmentsWithActive:(unsigned long long)arg1;
- (id)initWithMarker:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

