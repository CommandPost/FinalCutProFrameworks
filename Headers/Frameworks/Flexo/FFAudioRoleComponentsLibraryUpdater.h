//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFLibrary, NSMapTable, NSMutableSet, NSString;
@protocol FFModalDocumentSession;

__attribute__((visibility("hidden")))
@interface FFAudioRoleComponentsLibraryUpdater : NSObject
{
    FFLibrary *_library;
    NSString *_libraryName;
    NSMapTable *_logTable;
    NSObject<FFModalDocumentSession> *_session;
    NSString *_sessionMessage;
    NSString *_sessionItemName;
    unsigned long long _sessionTotalNumObjects;
    NSMapTable *_originalLayoutMaps;
    NSMutableSet *_objectsHandled;
    NSMapTable *_referenceLayoutObjectMap;
}

- (void)_updateProgress:(id)arg1 count:(unsigned long long)arg2 max:(unsigned long long)arg3;
- (void)_updateProgress:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (void)_transferAudioComponentsChannelBasedDataToRoleBasedData:(id)arg1;
- (void)_transferAudioComponentsChannelBasedDataToRoleBasedDataForObjects:(id)arg1 referencing:(id)arg2;
- (void)_uniquifyLayoutObjectsUsingLayout:(id)arg1 forObject:(id)arg2 andKey:(id)arg3 disabledAudioComponentSources:(id)arg4;
- (BOOL)_generateTemplateLayoutMap:(id)arg1 uniquifyAcrossAllLayouts:(BOOL)arg2 templateLayoutMap:(id *)arg3 sortedKeys:(id *)arg4;
- (BOOL)_uniquifyCompoundClip:(id)arg1 anchoredClips:(id)arg2;
- (void)_uniquifyMulticamClip:(id)arg1 anchoredAngles:(id)arg2;
- (void)_uniquifySynchronizedClip:(id)arg1;
- (void)_convertToRoleBasedLayoutMap:(id)arg1 objectList:(id)arg2;
- (void)_generateOriginalLayoutMaps:(id)arg1;
- (void)_convertToRoleBasedLayoutMap:(id)arg1;
- (void)_updateAudioEnhancements:(id)arg1;
- (void)_enableMixdownToRoleGroup:(id)arg1;
- (void)_convertToSynchronizedClip:(id)arg1;
- (void)_updateNoLayoutMapObject:(id)arg1;
- (void)runWithModalDocumentSession:(id)arg1;
- (void)saveUpdatedItemsCheckpoint;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

@end

