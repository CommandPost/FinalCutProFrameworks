//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLibraryItem.h>

@class FFEventInfo, FFMediaEventProject, NSSet, NSURL;

@interface FFEventRecord : FFLibraryItem
{
    NSURL *_cacheFolder;
    int _isHiddenEvent;
}

+ (int)readHiddenDirectoryStatus:(id)arg1 error:(id *)arg2;
+ (BOOL)setHiddenDirectoryStatus:(BOOL)arg1 URL:(id)arg2 error:(id *)arg3;
+ (id)documentType;
+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property(retain) NSURL *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
- (void)determineLegacyMediaStatus;
- (id)legacyMedia;
- (long long)legacyMediaStatus;
- (BOOL)update_resetHiddenEvents_43585635:(id *)arg1;
- (BOOL)update_resetHiddenEvents:(id *)arg1;
- (BOOL)getKeyThumbnailMD5:(id *)arg1 offset:(long long *)arg2;
- (id)displayOwnedClips;
- (id)findCacheFolder:(id)arg1;
- (id)syncCacheFolder;
- (void)sync;
- (void)willSetDocumentURL:(id)arg1;
- (id)defaultLibraryItem;
@property(readonly, nonatomic) unsigned long long countOfSequenceRecords;
@property(readonly, nonatomic) NSSet *sequenceRecords;
@property(readonly, nonatomic) BOOL hasSequenceRecords;
@property(readonly, nonatomic) FFEventInfo *eventInfo;
@property(readonly, nonatomic) BOOL isHiddenEvent;
- (BOOL)resetHiddenEventStatus:(BOOL)arg1 error:(id *)arg2;
- (BOOL)isEvent;
- (void)documentWillClose;
@property(readonly, nonatomic) FFMediaEventProject *project;
- (void)dealloc;
- (id)initWithParent:(id)arg1 name:(id)arg2 hidden:(BOOL)arg3 error:(id *)arg4;
- (id)initWithParent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)sequences;
- (id)projects;
- (id)containerPropertyName;
- (id)containerObject;

@end

