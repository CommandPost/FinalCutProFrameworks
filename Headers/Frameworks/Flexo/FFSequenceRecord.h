//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLibraryItem.h>

#import "FFImageBrowserRepresentedItem.h"
#import "FFMetadataProtocol.h"
#import "FFOrganizerClassTypeProtocol.h"

@class NSString;

@interface FFSequenceRecord : FFLibraryItem <FFImageBrowserRepresentedItem, FFOrganizerClassTypeProtocol, FFMetadataProtocol>
{
}

+ (id)documentType;
- (id)organizerDataItem;
- (id)mdLocalValueForKey:(id)arg1;
- (id)mdValueForKey:(id)arg1;
- (void)mdSetLocalValue:(id)arg1 forKey:(id)arg2;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdTargetForKey:(id)arg1;
- (CDStruct_d55ca1ec)findCachedMDValueForKey:(id)arg1;
- (id)displayName;
- (BOOL)isProject;
- (BOOL)isSequenceLoaded;
- (id)sequenceInfo;
- (id)sequence;
- (id)project;
- (id)essentialProperties;
- (id)uniqueIdentifier;
- (id)containerPropertyName;
- (id)containerObject;
- (id)ffImageBrowserSubtitle;
- (id)ffImageBrowserTitle;
- (struct CGImage *)ffImageBrowserRepresentation;
- (id)ffImageBrowserUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

