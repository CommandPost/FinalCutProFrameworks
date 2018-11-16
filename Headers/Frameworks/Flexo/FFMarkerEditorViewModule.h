//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFAnchoredTimeMarker, LKButton, LKTextField;

@interface FFMarkerEditorViewModule : LKViewModule
{
    LKTextField *displayNameField;
    LKTextField *timecodeField;
    LKButton *deleteButton;
    LKButton *todoButton;
    FFAnchoredTimeMarker *_marker;
    id <FFMarkerEditorDelegate> _markerEditorDelegate;
}

- (id)initWithMarker:(id)arg1 delegate:(id)arg2;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)windowDidShow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_reflectMarkerPropertiesInGUIWithChangedKey:(id)arg1;
- (void)_updateTodoButton;
- (void)_setupNameFieldSelection;
- (id)identifier;
- (void)close:(id)arg1;
- (void)save:(id)arg1;
- (void)delete:(id)arg1;
- (void)makeToDo:(id)arg1;
- (void)toggleCompleted:(id)arg1;
@property(retain, nonatomic) FFAnchoredTimeMarker *marker; // @synthesize marker=_marker;
- (void)_addObserverForMarkerProperties;
- (void)_removeObserverForMarkerProperties;
- (void)dealloc;
@property(nonatomic) id <FFMarkerEditorDelegate> markerEditorDelegate; // @synthesize markerEditorDelegate=_markerEditorDelegate;

@end
