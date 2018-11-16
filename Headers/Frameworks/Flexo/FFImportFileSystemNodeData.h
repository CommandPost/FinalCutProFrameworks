//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredSequence, NSColor, NSDate, NSImage, NSMutableDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFImportFileSystemNodeData : NSObject
{
    NSURL *_url;
    NSURL *_volumeURL;
    NSString *_displayName;
    NSImage *_icon;
    NSNumber *_isDirectory;
    NSNumber *_isPackage;
    NSNumber *_isCameraArchive;
    NSNumber *_isAlias;
    NSNumber *_isValid;
    NSNumber *_canPreview;
    NSColor *_labelColor;
    NSDate *_dateModified;
    NSDate *_dateAdded;
    BOOL _didGenerateDateCreated;
    NSDate *_dateCreated;
    NSDate *_dateLastOpened;
    NSString *_kind;
    NSNumber *_size;
    NSString *_label;
    NSMutableDictionary *_metadata;
    struct __MDItem *_mdItem;
    FFAnchoredSequence *_sequence;
}

@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
- (void)_readUnlock:(const char *)arg1;
- (void)_readLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (void)_readUnlock;
- (void)_readLock;
- (id)mdValueForKey:(id)arg1;
- (id)label;
- (id)size;
- (id)kind;
- (id)dateLastOpened;
- (id)dateCreated;
- (void)_checkCreationDate;
- (id)dateAdded;
- (id)dateModified;
- (id)labelColor;
- (id)itemIcon;
- (id)icon;
- (id)itemDisplayName;
- (id)displayName;
- (BOOL)canPreview;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (BOOL)isAlias;
- (BOOL)isCameraArchive;
- (BOOL)isPackage;
- (BOOL)isDirectory;
- (id)volumeURL;
- (id)url;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

