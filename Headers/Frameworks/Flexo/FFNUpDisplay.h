//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject, FFAnchoredTimelineModule, FFContext, NSString;

__attribute__((visibility("hidden")))
@interface FFNUpDisplay : NSObject
{
    FFAnchoredTimelineModule *_editorModule;
    id <FFNUpDisplayDelegate> _delegate;
    NSString *_identifier;
    BOOL _inProgress;
    BOOL _showAlternate;
    BOOL _usedForTrimming;
    BOOL _reverse2UpOrder;
    BOOL _force2UpDisplay;
    int _primaryFrame;
    FFAnchoredObject *_primaryClip;
    FFAnchoredObject *_primaryFrameClip;
    struct NSObject *_primaryMedia;
    FFContext *_primaryContext;
    int _alternateFrame;
    FFAnchoredObject *_alternateClip;
    FFAnchoredObject *_alternateFrameClip;
    struct NSObject *_alternateMedia;
    FFContext *_alternateContext;
    CDStruct_1b6d18a9 _nUpDisplayTime;
    BOOL _forcePrimaryPlayerNoUpdate;
}

@property BOOL force2UpDisplay; // @synthesize force2UpDisplay=_force2UpDisplay;
@property BOOL reverse2UpOrder; // @synthesize reverse2UpOrder=_reverse2UpOrder;
@property(nonatomic) BOOL usedForTrimming; // @synthesize usedForTrimming=_usedForTrimming;
@property(readonly) FFAnchoredObject *alternateClip; // @synthesize alternateClip=_alternateClip;
@property(readonly) FFAnchoredObject *primaryClip; // @synthesize primaryClip=_primaryClip;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property id <FFNUpDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) FFAnchoredTimelineModule *editorModule; // @synthesize editorModule=_editorModule;
- (CDStruct_1b6d18a9)_timeInContainer:(id)arg1 withFrame:(int)arg2 ofClip:(id)arg3;
- (CDStruct_1b6d18a9)_timeForClip:(id)arg1 withFrame:(int)arg2 ofClip:(id)arg3;
- (void)_updateActiveClip;
- (void)_updateAlternateClip;
- (void)_updatePrimaryClip;
- (void)_replaceMedia:(struct NSObject *)arg1 context:(id)arg2 withMedia:(struct NSObject *)arg3 context:(id)arg4;
- (id)_soloedObjectForClip:(id)arg1 withFrame:(int)arg2;
- (struct NSObject *)_mediaForClip:(id)arg1 withFrame:(int)arg2;
- (BOOL)_shouldShow2Up;
- (void)forcePrimaryPlayerNoUpdate:(BOOL)arg1;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)setShowsAlternateClip:(BOOL)arg1;
- (void)end;
- (void)begin;
- (void)setAlternateClip:(id)arg1 withFrame:(int)arg2 ofClip:(id)arg3;
- (void)setAlternateClip:(id)arg1 withFrame:(int)arg2;
- (void)setPrimaryClip:(id)arg1 withFrame:(int)arg2 ofClip:(id)arg3;
- (void)setPrimaryClip:(id)arg1 withFrame:(int)arg2;
- (id)initWithEditorModule:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

