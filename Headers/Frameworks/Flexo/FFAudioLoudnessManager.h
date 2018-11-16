//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFLoudnessAnalyzerDelegate.h"

@class FFAnchoredSequence, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFAudioLoudnessManager : NSObject <FFLoudnessAnalyzerDelegate>
{
    FFAnchoredSequence *m_sequence;
    BOOL m_sequenceSupportsAutomaticDucking;
    NSMapTable *m_duckingMasterClips;
    struct Synchronizable m_duckingMasterClipsLock;
    BOOL m_pendingUpdateTask;
    struct FFLocklessQueue<NSSet *> m_updateObjectsQueue;
    NSMutableArray *m_loudnessAnalyzerTasks;
    struct Synchronizable m_loudnessAnalyzerTasksLock;
}

+ (BOOL)supportsAudioDucking:(id)arg1;
+ (BOOL)supportsObjectAsDuckingMaster:(id)arg1;
+ (id)_audioDuckingRootItemForObject:(id)arg1;
+ (BOOL)supportsSequence:(id)arg1;
+ (BOOL)_sequenceSupportsAudioDucking:(id)arg1;
@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=m_sequence;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)analysisFinishedForLoudnessAnalyzer:(id)arg1;
- (void)_updateAudioLoudnessDataOnMainThread:(id)arg1;
- (void)_updateLoudnessValuesForObject:(id)arg1;
- (void)_writeAudioDuckingChannelDataOnMainThread:(id)arg1;
- (void)_updateDuckingChannelMD5InfoMap:(map_27291466 *)arg1 withSlaveGroups:(id)arg2 clipInfoMap:(const map_b81d382e *)arg3 masterClipsMap:(id)arg4;
- (void)_updateClipInfoMap:(map_b81d382e *)arg1 withObjects:(id)arg2;
- (void)performAutomaticDuckingUpdate;
- (id)_newSlaveGroupUsingObject:(id)arg1;
- (void)_buildMasterRangeDataList:(vector_c9fb3138 *)arg1 forDuckingRootItem:(id)arg2 clipInfoMap:(const map_b81d382e *)arg3 masterClipsMap:(id)arg4;
- (void)_queueAudioDuckingUpdateForObjects:(id)arg1;
- (void)_updateAudioDuckingChannel:(struct FFAudioDuckingChannelData *)arg1 forSlaveGroup:(id)arg2 masterRangeDataList:(const vector_c9fb3138 *)arg3 clipInfoMap:(const map_b81d382e *)arg4;
- (void)notifyDuckingMasterClipLevelChanged:(id)arg1 toLevel:(float)arg2;
- (void)_updateObjectsForAutomaticDucking:(id)arg1;
- (void)_rebuildAndRecalculateDuckingMasterClips;
- (void)_rebuildDuckingMasterClips:(BOOL)arg1;
- (id)slaveClipsForMasterClip:(id)arg1;
- (id)_intersectingMasterClipsForObject:(id)arg1;
- (id)_intersectingObjectsForMasterClip:(id)arg1;
- (void)removeMasterClip:(id)arg1;
- (void)removeSlaveClip:(id)arg1 forMasterClip:(id)arg2;
- (void)addSlaveClip:(id)arg1 forMasterClip:(id)arg2;
- (void)setSlaveClips:(id)arg1 forMasterClip:(id)arg2;
- (float)duckLevelForMasterClip:(id)arg1;
- (void)setDuckLevel:(float)arg1 forMasterClip:(id)arg2;
- (id)_demandMasterClipInfo:(id)arg1;
- (void)_sequenceUpdated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeSequenceObserving;
- (void)_addSequenceObserving;
- (void)dealloc;
- (id)init;

@end
