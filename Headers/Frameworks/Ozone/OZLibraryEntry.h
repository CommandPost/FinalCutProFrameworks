//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSImage, NSMutableArray, NSString, OZLibraryModuleBase;

@interface OZLibraryEntry : NSObject <NSCoding, NSCopying>
{
    OZLibraryEntry *_parent;
    NSString *_name;
    NSImage *_icon;
    NSImage *_smallIcon;
    NSImage *_smallFinderIcon;
    NSMutableArray *_descendants;
    unsigned int _flags;
    NSDate *_modifiedDate;
    unsigned long long _fileSize;
    OZLibraryModuleBase *_owner;
    unsigned int _objectType[4];
    NSString *_description;
    NSString *_hiddenExtension;
    double _selectedTime;
    NSString *_displayName;
    NSString *_lastPathComponent;
    struct OZFactory *_factory;
    OZLibraryEntry *_cloneOfEntry;
    NSString *_theme;
}

+ (struct PCMutex *)getThumbnailCacheLock;
+ (id)getThumbnailInfoCache;
+ (id)getThumbnailCache;
+ (id)getGenericXMLIcon;
+ (id)getDefaultFolderSmallIcon;
+ (id)getDefaultFolderIcon;
+ (void)maybeInitThumbnailCache;
+ (void)loadIcons;
- (BOOL)checkForModifiedFolders;
- (void)reReadSubDirectoryContents;
- (void)reReadDirectoryContents;
- (void)sortByKindDescending;
- (void)sortByKind;
- (void)sortByAlbumDescending;
- (void)sortByAlbum;
- (void)sortByArtistDescending;
- (void)sortByArtist;
- (void)sortByIconsFoldersLast;
- (void)sortByIcons;
- (void)sortByDurationDescending;
- (void)sortByDuration;
- (void)sortBySizeDescending;
- (void)sortBySize;
- (void)sortByDateDescending;
- (void)sortByDate;
- (void)sortByNameDescendingFoldersLast;
- (void)sortByNameDescending;
- (void)sortByNameFoldersLast;
- (void)sortByName;
- (long long)compareAlbumDescending:(id)arg1;
- (long long)compareAlbum:(id)arg1;
- (long long)compareArtistDescending:(id)arg1;
- (long long)compareArtist:(id)arg1;
- (long long)compareSelectedTime:(id)arg1;
- (long long)compareDurationDescending:(id)arg1;
- (long long)compareDuration:(id)arg1;
- (long long)compareFileSizeDescending:(id)arg1;
- (long long)compareFileSize:(id)arg1;
- (long long)compareModifiedDateDescending:(id)arg1;
- (long long)compareModifiedDate:(id)arg1;
- (long long)compareDisplayNameDescending:(id)arg1;
- (long long)compareDisplayNameDescendingFoldersLast:(id)arg1;
- (long long)compareDisplayNameFoldersLast:(id)arg1;
- (long long)compareDisplayName:(id)arg1;
- (id)getDescriptionLine5;
- (id)getDescriptionLine4;
- (id)getDescriptionLine3;
- (id)getDescriptionLine2;
- (id)getDescriptionLine1;
- (id)getPreviewController;
- (unsigned int)getPreviewOptions;
- (int)getPreviewType;
- (id)getPreviewPath;
- (id)getPreviewName;
- (id)fullPreviewMovie;
- (id)getPreviewMovie;
- (id)getPreviewImage;
- (id)getSmallPreviewIconForEntry:(BOOL)arg1;
- (id)getIconForEntry:(struct CGSize)arg1 retainIt:(char *)arg2 forController:(id)arg3;
- (id)getMovie;
- (BOOL)getPasteEntries:(struct OZPasteList *)arg1;
- (void)setParent:(id)arg1;
- (id)getParent;
- (BOOL)createDirectoryStructure;
- (id)getThumbnailPath;
- (id)getDisplayPath;
- (id)getAbsolutePath:(BOOL)arg1;
- (BOOL)path:(id)arg1 isOfType:(id)arg2;
- (id)stringByResolvingAliasInPath:(id)arg1;
- (id)getAbsolutePath:(BOOL)arg1 rootFlags:(unsigned int)arg2;
- (void)delete;
- (BOOL)deleteSelected;
- (BOOL)canBeDeleted;
- (void)checkForFileEntries;
- (void)setInUserDirFlagForFolders;
- (void)setIsInAppBundle:(BOOL)arg1;
- (BOOL)isInAppBundle;
- (void)setIsInGlobalDir:(BOOL)arg1;
- (BOOL)isInGlobalDir;
- (void)setIsInPreSmacksUserDir:(BOOL)arg1;
- (BOOL)isInPreSmacksUserDir;
- (void)setIsInUserDir:(BOOL)arg1;
- (BOOL)isInUserDir;
- (void)restoreCollapsedEntries:(id)arg1;
- (id)backupCollapsedEntries;
- (void)backupCollapsedEntries:(id)arg1;
- (void)collapse:(BOOL)arg1;
- (BOOL)isCollapsed;
- (void)deselectAll;
- (void)deselect;
- (void)select;
- (BOOL)isSelected;
- (unsigned int)getFlags;
- (void)clearFlags:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (id)getDescendants;
- (void)addDescendant:(id)arg1;
- (id)getDescendant:(unsigned int)arg1 withFilter:(id)arg2;
- (id)getDescendant:(unsigned int)arg1;
- (void)rescaleIcon:(id)arg1 desiredSize:(struct CGSize)arg2;
- (void)resetIcons;
- (id)getSmallPreviewIcon:(struct CGSize)arg1 useFinderIcons:(BOOL)arg2;
- (id)getIcon:(struct CGSize)arg1 forController:(id)arg2;
- (id)findDescendant:(id)arg1 useDisplayName:(BOOL)arg2 range:(struct _NSRange *)arg3 locFlags:(unsigned int)arg4;
- (id)findDescendant:(id)arg1 useDisplayName:(BOOL)arg2 locFlags:(unsigned int)arg3;
- (void)setGetDescendants:(BOOL)arg1;
- (BOOL)isSequence;
- (BOOL)isTypeOfObject:(const struct PCUUID *)arg1;
- (struct OZFactory *)getFactory;
- (struct PCUUID)getFactoryID;
- (void)setFactoryID:(const struct PCUUID *)arg1;
- (void)setTheme:(id)arg1 modifyFile:(BOOL)arg2;
- (id)getTheme;
- (id)getAlbum;
- (id)getArtist;
- (double)getDurationInSeconds;
- (id)getDurationAsString;
- (double)getFrameRate;
- (unsigned int)getDuration;
- (void)setFileSize:(unsigned long long)arg1;
- (id)getFileSizeAsString;
- (unsigned long long)getFileSize;
- (void)setModifiedDate:(id)arg1;
- (id)getModifiedDate;
- (void)setHiddenExtension:(id)arg1;
- (id)getHiddenExtension;
- (void)setDescription:(id)arg1 modifyFile:(BOOL)arg2;
- (id)getDescription;
- (void)setLastPathComponent:(id)arg1;
- (id)getLastPathComponent;
- (void)setDisplayName:(id)arg1;
- (BOOL)isPathExtensionXML:(id)arg1;
- (id)getDisplayName;
- (void)setName:(id)arg1;
- (id)getName;
- (void)setCloneOf:(id)arg1;
- (void)dirty;
- (void)forceReadOfContents:(unsigned int)arg1;
- (void)forceReadOfContents;
- (BOOL)isReadable;
- (BOOL)isReadOnly;
- (BOOL)isSeparator;
- (BOOL)isLeaf;
- (unsigned int)numberOfDescendants:(id)arg1;
- (unsigned int)numberOfDescendants;
- (BOOL)hasDescendants:(id)arg1;
- (BOOL)hasDescendants;
- (void)setOwner:(id)arg1;
- (id)getOwner;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldBeArchived;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 name:(id)arg2;

@end

