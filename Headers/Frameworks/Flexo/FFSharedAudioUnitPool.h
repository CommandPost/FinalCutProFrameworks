//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMapTable;

__attribute__((visibility("hidden")))
@interface FFSharedAudioUnitPool : NSObject
{
    NSMapTable *_effectsMap;
    BOOL _pendingAudioUnitAllocationUpdatedDispatch;
    BOOL _pendingAudioUnitReturnedDispatch;
    BOOL _pendingAudioUnitDeinstantiationDispatch;
    BOOL _enabled;
    int _suspended;
    BOOL _performAudioUnitAllocationUpdateOnResume;
    NSCountedSet *_lockedPoolEntries;
}

+ (void)cleanup;
+ (id)instance;
- (void)_notifyLibraryUpdateEnd:(id)arg1;
- (void)_notifyLibraryUpdateBegin:(id)arg1;
- (void)dispatchAudioUnitAllocationUpdateForDeinstantiation;
- (void)dispatchAudioUnitAllocationUpdate;
- (void)_updateAudioUnitAllocation;
- (void)_notifyAudioUnitReturned;
- (void)_notifyAudioUnitAllocationUpdated;
- (void)clearAudioUnitAllocationForEffectID:(id)arg1 object:(id)arg2;
- (void)setAudioUnitAllocation:(unsigned int)arg1 effectID:(id)arg2 sampleRate:(double)arg3 numChannels:(unsigned int)arg4 object:(id)arg5;
- (void)_purgeAudioUnit:(id)arg1;
- (void)returnAudioUnit:(id)arg1;
- (void)reserveAudioUnitForEffectID:(id)arg1 sampleRate:(double)arg2 numChannels:(unsigned int)arg3 effectState:(struct NSDictionary *)arg4 allowAllocatedUnit:(BOOL)arg5 wantsDefaultPreset:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_releasePoolEntry:(id)arg1;
- (id)_poolEntryForEffectID:(id)arg1 demand:(BOOL)arg2;
- (void)_disablePool;
- (void)dealloc;
- (id)init;

@end

