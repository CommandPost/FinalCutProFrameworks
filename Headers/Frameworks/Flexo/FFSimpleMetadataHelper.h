//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFMetadataProtocol.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FFSimpleMetadataHelper : NSObject <FFMetadataProtocol>
{
    CDStruct_e83c9415 _range;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    long long _timecodeDisplayDropFrame;
    BOOL _hasVideo;
    BOOL _hasAudio;
    BOOL _hasDefinedVideoRate;
    NSMutableDictionary *_metadata;
}

@property BOOL hasDefinedVideoRate; // @synthesize hasDefinedVideoRate=_hasDefinedVideoRate;
@property BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (void)_writeUnlock:(const char *)arg1;
- (void)_writeLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (void)_readUnlock:(const char *)arg1;
- (void)_readLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (BOOL)writerIsWaiting;
- (void)_writeUnlock;
- (void)_writeLock;
- (void)_readUnlock;
- (void)_readLock;
- (void)mdSetLocalValue:(id)arg1 forKey:(id)arg2;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdTargetForKey:(id)arg1;
- (id)mdLocalValueForKey:(id)arg1;
- (id)mdValueForKey:(id)arg1;
- (void)dealloc;
- (id)initWithAnchoredSequence:(id)arg1;

@end
