//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FFAssetCopyQueueDelegateProtocol.h"
#import "FFStorageLocationOutOfDiskSpaceProtocol.h"

@class FFStorageLocation, NSArrayController, NSButton, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSProgressIndicator, NSString, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface FFCameraArchiveController : NSWindowController <FFAssetCopyQueueDelegateProtocol, FFStorageLocationOutOfDiskSpaceProtocol>
{
    NSTextField *_archiveNameTextField;
    NSTextField *_archiveSizeLabelTextField;
    NSTextField *_archiveSizeTextField;
    NSPopUpButton *_storageLocationsPopupMenu;
    NSArrayController *_storageLocationsArrayController;
    NSButton *_okButton;
    NSWindow *_archiveMountProgressWindow;
    NSTextField *_archiveMountLabel;
    NSProgressIndicator *_archiveMountProgressIndicator;
    NSString *_archiveMountLabelFormatString;
    NSMutableArray *_archiveVolumesToMount;
    FFStorageLocation *_selectedStorageLocation;
    NSString *_archiveName;
    NSString *_lastStorageLocationDiskUUID;
    unsigned long long _archiveSize;
    NSMutableArray *_archives;
    NSMutableDictionary *_archivesDict;
    NSMutableDictionary *_archiveCopyQueueDict;
    NSMutableDictionary *_archiveSourceVolumesDict;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (BOOL)isValidCameraArchive:(id)arg1;
+ (id)pluginUUIDForRADVolume:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)bind;
- (void)unbind;
- (void)beginOptionsSheetForWindow:(id)arg1 tapeDevice:(id)arg2;
- (void)beginOptionsSheetForWindow:(id)arg1 volume:(id)arg2 initialStorageLocation:(id)arg3;
- (void)beginOptionsSheetForWindow:(id)arg1 source:(id)arg2 initialStorageLocation:(id)arg3;
- (void)endSheet:(id)arg1;
- (void)archiveOptionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)writeMetadataDictionary:(id)arg1 atArchivePath:(id)arg2 clipIDs:(id)arg3 isTape:(BOOL)arg4 isPrimary:(BOOL)arg5;
- (void)startTapeArchiveAtPath:(id)arg1 tapeDevice:(id)arg2;
- (void)tapeArchiveEndedForDevice:(id)arg1;
- (BOOL)startRADArchiveAtPath:(id)arg1 volume:(id)arg2 error:(id *)arg3;
- (id)clipIDDictionaryForClip:(id)arg1;
- (BOOL)writeMetadataDictionaryForRADVolume:(id)arg1 atArchivePath:(id)arg2 isPrimary:(BOOL)arg3;
- (void)copyCompleted:(id)arg1;
- (void)refreshSidebarOnArchiveCompletionForVolume:(id)arg1;
- (void)finalizeCopyQueueForCopyRequest:(id)arg1 canceled:(BOOL)arg2;
- (void)taskWasCancelled:(id)arg1;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)refreshArchivesList;
- (void)refreshArchivesListForArchiveRootPath:(id)arg1;
- (void)addArchiveVolume:(id)arg1;
- (void)removeArchiveVolume:(id)arg1;
- (id)archiveVolumeForPath:(id)arg1;
- (id)sourceVolumeForPath:(id)arg1;
- (void)updateArchiveSourceVolume:(id)arg1;
- (void)mountArchiveVolume:(id)arg1;
- (id)clipIDDictionaryForMemberClipID:(id)arg1 inArchive:(id)arg2;
- (BOOL)findMemberClipsStartingClipID:(id)arg1 inArchive:(id)arg2 searchingForward:(BOOL)arg3;
- (void)mountCameraArchivesForClipID:(id)arg1;
- (void)cancelArchiveMount:(id)arg1;
- (void)archiveVolumeDidMount:(id)arg1;
- (void)archiveVolumeFailedToMount:(id)arg1;
@property(retain) NSMutableDictionary *archiveSourceVolumesDict; // @synthesize archiveSourceVolumesDict=_archiveSourceVolumesDict;
@property(retain) NSMutableDictionary *archiveCopyQueueDict; // @synthesize archiveCopyQueueDict=_archiveCopyQueueDict;
@property(retain) NSMutableDictionary *archivesDict; // @synthesize archivesDict=_archivesDict;
@property(retain) NSMutableArray *archives; // @synthesize archives=_archives;
@property(copy) NSString *lastStorageLocationDiskUUID; // @synthesize lastStorageLocationDiskUUID=_lastStorageLocationDiskUUID;
@property(copy) NSString *archiveName; // @synthesize archiveName=_archiveName;
@property(retain) FFStorageLocation *selectedStorageLocation; // @synthesize selectedStorageLocation=_selectedStorageLocation;

@end
