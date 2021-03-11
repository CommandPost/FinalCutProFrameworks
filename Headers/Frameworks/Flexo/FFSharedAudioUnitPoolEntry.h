//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface FFSharedAudioUnitPoolEntry : NSObject
{
    NSString *_effectID;
    NSMapTable *_defaultPresetMap;
    NSMapTable *_freeListMap;
    NSMapTable *_reservedListMap;
    NSMapTable *_allocationMap;
    NSMapTable *_allocationRegistry;
    double _lastReturnTime;
}

@property(readonly, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
- (id)_demandAllocationListForFormatKey:(id)arg1;
- (id)_demandReservedListForFormatKey:(id)arg1;
- (id)_demandFreeListForFormatKey:(id)arg1;
- (unsigned int)_hasAvailableNonPlaybackUnitsForFormatKey:(id)arg1;
- (unsigned int)_reservedAllocationForFormatKey:(id)arg1;
- (unsigned int)_freeListAllocationForFormatKey:(id)arg1;
- (unsigned int)_requestedAllocationForFormatKey:(id)arg1;
- (BOOL)canDispose;
- (BOOL)updateAudioUnitAllocationWithTimeLimit:(double)arg1;
- (BOOL)updateAudioUnitAllocationForFormatKey:(id)arg1 timeLimit:(double)arg2;
- (void)clearAllocationForObject:(id)arg1;
- (void)setAllocation:(unsigned int)arg1 sampleRate:(double)arg2 numChannels:(unsigned int)arg3 forObject:(id)arg4;
- (void)purgeAudioUnit:(id)arg1;
- (void)returnAudioUnit:(id)arg1;
- (void)reserveAudioUnitWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2 allowAllocatedUnit:(BOOL)arg3 wantsDefaultPreset:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

