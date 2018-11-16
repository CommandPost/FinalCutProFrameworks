//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class FFAnchoredObject, FFAssetRef, FFMediaEventProject, FFSequenceProject, LKImageView, LKTextField, NSProThemeFacet, NSProThemeImageView, NSSet;

__attribute__((visibility("hidden")))
@interface FFProjectEventPropertiesViewController : NSViewController
{
    FFMediaEventProject *_project;
    FFAssetRef *_ref;
    FFSequenceProject *_sequence;
    NSProThemeImageView *_eventImageView;
    LKTextField *_eventName;
    LKImageView *_driveImageView;
    LKTextField *_driveName;
    LKTextField *_clipsMissing;
    int _numOfflineClips;
    int _numOnlineClips;
    BOOL _mergeFoundClipsCountAndName;
    NSProThemeFacet *_okEventFacet;
    NSProThemeFacet *_notOkEventFacet;
    NSSet *_clipRefs;
    BOOL _isForProjectInspector;
    FFAnchoredObject *_inspectedItem;
}

@property(retain, nonatomic) FFAnchoredObject *inspectedItem; // @synthesize inspectedItem=_inspectedItem;
@property BOOL isForProjectInspector; // @synthesize isForProjectInspector=_isForProjectInspector;
@property(retain, nonatomic) NSSet *clipRefs; // @synthesize clipRefs=_clipRefs;
@property BOOL mergeFoundClipsCountAndName; // @synthesize mergeFoundClipsCountAndName=_mergeFoundClipsCountAndName;
@property int numberOfOnlineClips; // @synthesize numberOfOnlineClips=_numOnlineClips;
@property(readonly) int numberOfOfflineClips; // @synthesize numberOfOfflineClips=_numOfflineClips;
@property(retain, nonatomic) LKTextField *clipsMissing; // @synthesize clipsMissing=_clipsMissing;
@property(retain, nonatomic) FFMediaEventProject *project; // @synthesize project=_project;
@property(retain, nonatomic) LKTextField *driveName; // @synthesize driveName=_driveName;
@property(retain, nonatomic) LKImageView *driveImageView; // @synthesize driveImageView=_driveImageView;
@property(retain, nonatomic) LKTextField *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSProThemeImageView *eventImageView; // @synthesize eventImageView=_eventImageView;
- (void)moveDriveIconAndClipsFoundWithRightOffset:(int)arg1;
- (void)useLargeFacet;
- (void)setAssetRef:(id)arg1;
- (void)_intersect:(id)arg1 usingIdsIn:(id)arg2;
- (void)_add:(id)arg1 toUniqueSet:(id)arg2;
- (void)_createFacets;
- (void)setSequence:(id)arg1;
- (void)dealloc;

@end

