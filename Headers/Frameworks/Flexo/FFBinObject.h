//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFInspectableObject.h"
#import "FFMetadataProtocol.h"
#import "FFOrganizerItem.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSImage, NSMutableDictionary, NSString;

@interface FFBinObject : FFBaseDSObject <FFOrganizerItem, NSCoding, NSCopying, FFMetadataProtocol, FFInspectableObject>
{
    NSString *_displayName;
    NSMutableDictionary *_metadata;
}

+ (id)objectFromUniqueIdentifier:(id)arg1;
+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingItemDisplayName;
- (id)inspectorClassName;
- (void)setUserDefaultFigTime:(CDStruct_1b6d18a9)arg1 forKey:(id)arg2;
- (CDStruct_1b6d18a9)userDefaultFigTimeForKey:(id)arg1;
- (void)setUserDefaultInteger:(long long)arg1 forKey:(id)arg2;
- (long long)userDefaultIntegerForKey:(id)arg1;
- (void)clearUserDefaultValueForKey:(id)arg1;
- (BOOL)hasUserDefaultValueForKey:(id)arg1;
- (id)mdLocalValueForKey:(id)arg1;
- (id)mdValueForKey:(id)arg1;
- (void)mdSetLocalValue:(id)arg1 forKey:(id)arg2;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdTargetForKey:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)invalidateStreamRange:(CDStruct_e83c9415)arg1;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) NSString *contentType;
- (void)clearComponentAncestors;
@property(copy, nonatomic) NSString *displayName;
- (id)identifier;
- (id)uniqueBinObjectIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)debugDescriptionWithIndentLevel:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
- (BOOL)hasMasterSubitems;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (id)itemIconSelected:(BOOL)arg1;
@property(readonly, nonatomic) NSImage *itemIcon;
- (id)itemParent;
- (BOOL)actionEndSetMetadataValueWithError:(id *)arg1;
- (void)actionBeginSetMetadataValue;
- (BOOL)actionRenameBinObject:(id)arg1 error:(id *)arg2;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2 deferUpdates:(BOOL)arg3;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2;
- (void)actionBegin:(id)arg1;
- (BOOL)_actionEndEditing:(BOOL)arg1 error:(id *)arg2;
- (void)_actionBeginEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;
@property(readonly) Class superclass;

@end

