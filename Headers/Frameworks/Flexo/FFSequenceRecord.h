//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLibraryItem.h>

#import "FFMetadataProtocol.h"
#import "FFOrganizerClassTypeProtocol.h"

@interface FFSequenceRecord : FFLibraryItem <FFOrganizerClassTypeProtocol, FFMetadataProtocol>
{
}

- (id)organizerDataItem;
- (id)mdLocalValueForKey:(id)arg1;
- (id)mdValueForKey:(id)arg1;
- (void)mdSetLocalValue:(id)arg1 forKey:(id)arg2;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdTargetForKey:(id)arg1;
- (CDStruct_d55ca1ec)findCachedMDValueForKey:(id)arg1;
- (BOOL)isSequenceLoaded;
- (id)sequenceInfo;
- (id)sequence;
- (id)project;
- (id)documentType;

@end

