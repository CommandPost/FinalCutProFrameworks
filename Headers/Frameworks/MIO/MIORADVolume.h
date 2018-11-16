//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class NSImage, NSMutableArray, NSMutableDictionary, NSString, NSUndoManager;

@interface MIORADVolume : MIOObject
{
    NSMutableArray *_clips;
    NSMutableDictionary *_metadata;
    int _radVolumeType;
    NSString *_defaultReelName;
    BOOL _isNameEditable;
    struct FSRef _fsRef;
    NSString *_path;
    NSString *_customName;
    NSUndoManager *_undoManager;
    NSImage *_icon;
    BOOL _isUnmounting;
    BOOL _useUnclaimedURLs;
    NSMutableArray *_unclaimedURLs;
    NSMutableArray *_pathPackClaimedURLs;
}

+ (short)volumeRefNumFromPath:(id)arg1;
+ (BOOL)pathIsValidVolume:(id)arg1;
+ (id)volumeWithPath:(id)arg1 undoManager:(id)arg2;
- (id).cxx_construct;
- (BOOL)isiOSDevice;
- (BOOL)isFolder;
- (BOOL)isArchive;
- (BOOL)isUnmounting;
- (BOOL)isLeaf;
- (id)consumerIcon;
- (id)icon;
- (void)addClaimedURLs:(id)arg1;
- (id)unclaimedURLs;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (double)targetDataSize;
- (double)dataSize;
- (id)metadataObjectforKey:(id)arg1;
- (BOOL)writeMetadataObject:(id)arg1 forKey:(id)arg2;
- (id)valueForClipProperty:(id)arg1 forClipID:(id)arg2;
- (void)setValue:(id)arg1 forClipProperty:(id)arg2 forClipID:(id)arg3;
- (id)metadataFromVolume;
- (BOOL)writeMetadataToVolume;
- (id)metadataFilePath;
- (void)deleteClip:(id)arg1;
- (id)clipAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfClip:(id)arg1;
- (unsigned long long)count;
- (id)clips;
- (void)didUnmount;
- (void)willUnmount;
- (void)updateSpannedClipsAfterMounting;
- (void)postMIOSpannedClipDidComplete;
- (id)cameraID;
- (unsigned int)volumeID;
- (BOOL)supportsSpannedClips;
- (BOOL)isWritable;
- (int)radVolumeType;
- (void)setRadVolumeType:(int)arg1;
- (void)setDefaultReelName:(id)arg1;
- (id)defaultReelName;
- (id)path;
- (id)customName;
- (void)setCustomName:(id)arg1;
- (id)name;
- (id)description;
- (void)removeFromFlatClipsArray;
- (void)replaceClip:(id)arg1 withClip:(id)arg2;
- (void)addClip:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 undoManager:(id)arg2;

@end

