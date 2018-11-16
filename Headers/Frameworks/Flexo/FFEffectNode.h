//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

@class FFEffect, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FFEffectNode : FFProvider
{
    FFEffect *_effect;
    NSMutableDictionary *_inputInfos;
    CDStruct_1b6d18a9 _channelOffset;
    _Bool _inputsFrozen;
    NSObject<OS_dispatch_queue> *_cachedUnionedMutex;
    CDStruct_e83c9415 _cachedUnionedInputRange;
    CDStruct_e83c9415 _cachedUnionedInputRangeInLocalCoords;
}

- (id).cxx_construct;
- (CDStruct_1b6d18a9)latestInputEnd;
- (CDStruct_1b6d18a9)earliestInputStart;
- (CDStruct_e83c9415)unionedInputTimeRangeInLocalCoords;
- (CDStruct_e83c9415)unionedInputTimeRange;
- (void)_ensureCachedUnionedStuff;
- (void)setChannelOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)channelOffset;
- (id)allInputKeysEnumerator;
- (id)allInputKeys;
- (id)inputIdentifierForKey:(id)arg1;
- (id)inputForKey:(id)arg1 retOffset:(CDStruct_1b6d18a9 *)arg2;
- (CDStruct_1b6d18a9)inputOffsetForKey:(id)arg1;
- (id)inputForKey:(id)arg1;
- (void)setInput:(id)arg1 forKey:(id)arg2 withOffset:(CDStruct_1b6d18a9)arg3 identifier:(id)arg4;
- (void)clearCachedUnionStuff;
- (id)effect;
- (void)dealloc;
- (id)initWithEffect:(id)arg1;
- (id)object;

@end

