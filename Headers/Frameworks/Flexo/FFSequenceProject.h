//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProject.h>

#import "FFInspectableObject.h"
#import "FFInspectorTabDataSource.h"
#import "FFOrganizerMasterItem.h"
#import "NSCoding.h"

@class FFAnchoredSequence, FFSequenceInfo, NSArray, NSImage, NSString;

@interface FFSequenceProject : FFProject <NSCoding, FFOrganizerMasterItem, FFInspectableObject, FFInspectorTabDataSource>
{
    FFSequenceInfo *_sequenceInfo;
    NSString *_defaultMediaEventID;
}

+ (BOOL)classIsAbstract;
+ (id)copyClassDescription;
+ (BOOL)projectReferencesExistForMediaRef:(id)arg1;
- (id)initWithDisplayName:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)project;
- (BOOL)isDetailedProjectDataLoaded;
@property(readonly, nonatomic) FFSequenceInfo *sequenceInfo;
@property(retain, nonatomic) FFAnchoredSequence *activeSequence;
- (id)defaultMediaEventID;
- (void)setDefaultMediaEventID:(id)arg1;
- (id)defaultMediaEvent;
- (void)setDefaultMediaEvent:(id)arg1;
- (id)description;
- (id)debugDescriptionWithIndentLevel:(unsigned int)arg1;
- (id)debugDescription;
- (id)contentType;
- (int)projectShareStatus;
@property(readonly, nonatomic) NSString *itemDisplayName;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) NSArray *masterSubitems;
@property(readonly, nonatomic) NSArray *detailSubitems;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
- (id)effectReferences;
- (id)assetReferences;
- (id)clipReferences;
- (int)mediaStatus;
- (BOOL)projectReferencesExistForMediaRef:(id)arg1;
- (void)_offlineMediaChanged;
- (id)inspectorClassName;
- (id)inspectorIdentifier;
- (id)inspectorTabClassNames;
- (id)inspectorTabIdentifiers;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (void)compressVerticalLaneIndexes:(BOOL)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) double itemRowHeight;

@end

