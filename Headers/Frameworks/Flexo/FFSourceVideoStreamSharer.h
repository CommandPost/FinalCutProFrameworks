//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFSourceDelegatingVideo.h>

__attribute__((visibility("hidden")))
@interface FFSourceVideoStreamSharer : FFSourceDelegatingVideo
{
    CDStruct_bdcb2b0d _baseMD5ForStream;
    BOOL _cacheTokens;
    long long _lastChannelChangeNumber;
    struct FFSynchronizable _openStreamsLock;
    struct vector<FFStreamVideoStreamSharer *, std::__1::allocator<FFStreamVideoStreamSharer *>> _openStreams;
}

+ (Class)streamClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property BOOL cacheTokens; // @synthesize cacheTokens=_cacheTokens;
- (void)_removeOpenStream:(id)arg1;
- (id)newStream:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (void)delegateVideoRangeInvalidated:(id)arg1;
- (id)initWithProvider:(id)arg1 delegatingTo:(id)arg2;

@end

