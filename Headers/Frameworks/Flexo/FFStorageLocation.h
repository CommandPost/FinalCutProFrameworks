//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFStorageManager, NSAttributedString, NSLock, NSMutableArray, NSString, NSThread, NSURL;

__attribute__((visibility("hidden")))
@interface FFStorageLocation : NSObject
{
    NSString *_locationName;
    NSString *_diskUUID;
    double _capacity;
    double _availableSpace;
    BOOL _isBootVolume;
    BOOL _isMoviesVolume;
    BOOL _use;
    BOOL _isNetworkVolume;
    NSURL *_volumeURL;
    NSURL *_storageRootURL;
    FFStorageManager *_storageManager;
    short _volumeRefNum;
    unsigned long long _minimumAvailableSpace;
    NSMutableArray *_outOfDiskSpaceObservers;
    NSLock *_outOfDiskSpaceObserversLock;
    NSThread *_checkAvailableDiskSpaceThread;
    BOOL _isLocked;
    int _fileLock;
    NSString *_hostName;
}

+ (id)createPath:(id)arg1;
+ (id)valueStringWithUnitFromByteValue:(double)arg1;
+ (id)actualDevicePathIfPathIsDiskImage:(id)arg1;
+ (long long)sizeInBytesOfFileAtURL:(id)arg1;
+ (id)sharedPrefsDirectory;
@property(readonly) short volumeRefNum; // @synthesize volumeRefNum=_volumeRefNum;
@property(readonly) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly) BOOL isNetworkVolume; // @synthesize isNetworkVolume=_isNetworkVolume;
@property(readonly) BOOL isMoviesVolume; // @synthesize isMoviesVolume=_isMoviesVolume;
@property(readonly) BOOL isBootVolume; // @synthesize isBootVolume=_isBootVolume;
@property(readonly) NSURL *storageRootURL; // @synthesize storageRootURL=_storageRootURL;
@property(readonly) NSURL *volumeURL; // @synthesize volumeURL=_volumeURL;
@property(readonly) NSString *locationName; // @synthesize locationName=_locationName;
@property(readonly) NSString *diskUUID; // @synthesize diskUUID=_diskUUID;
- (BOOL)unlock;
- (BOOL)lock;
- (void)renameVolume:(id)arg1;
- (id)locationNameWithAvailableSize;
@property BOOL use;
- (id)volumePath;
@property(readonly) NSAttributedString *usableSpaceString;
@property(readonly) NSAttributedString *availableSpaceString;
@property(readonly) NSAttributedString *capacityString;
- (unsigned int)usedPercentage;
- (BOOL)removeOutOfDiskSpaceObserver:(id)arg1;
- (BOOL)addOutOfDiskSpaceObserver:(id)arg1;
- (void)_checkAvailableDiskSpace;
- (void)_dealWithOutOfDiskSpace;
- (BOOL)_isOutOfDiskSpace;
- (long long)availableSpaceInBytes;
- (BOOL)isCaseSensitive;
- (BOOL)isTimeMachineVolume;
- (void)updateName;
- (id)description;
- (void)dealloc;
- (id)initWithVolumeRefNum:(short)arg1 storageManager:(id)arg2 networkPath:(id)arg3 inUse:(char *)arg4;
- (BOOL)stringIsIPAddress:(id)arg1;

@end

