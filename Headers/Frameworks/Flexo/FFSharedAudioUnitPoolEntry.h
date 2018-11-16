//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface FFSharedAudioUnitPoolEntry : NSObject
{
    NSString *_effectID;
    NSMapTable *_defaultPresetMap;
    NSMapTable *_freeList;
    struct set<FFSharedAudioUnit *, std::__1::less<FFSharedAudioUnit *>, std::__1::allocator<FFSharedAudioUnit *>> *_reservedList;
    struct map<void *, unsigned int, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, unsigned int>>> *_allocationRegistry;
    double _lastReturnTime;
}

@property(readonly, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
- (id)_demandFreeListForFormatKey:(id)arg1;
- (unsigned int)_hasAvailableNonPlaybackUnits;
- (unsigned int)_reservedAllocation;
- (unsigned int)_freeListAllocation;
- (unsigned int)_requestedAllocation;
- (BOOL)canDispose;
- (BOOL)updateAudioUnitAllocationWithTimeLimit:(double)arg1;
- (void)setAllocation:(unsigned int)arg1 forObject:(id)arg2;
- (void)purgeAudioUnit:(id)arg1;
- (void)returnAudioUnit:(id)arg1;
- (id)reserveAudioUnitWithSampleRate:(double)arg1 andNumChannels:(unsigned int)arg2 forPlayback:(BOOL)arg3 defaultPreset:(id *)arg4 isFreeListUnit:(char *)arg5;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end
