//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceDelegatingVideo.h>

__attribute__((visibility("hidden")))
@interface FFSourceVideoStreamSharer : FFSourceDelegatingVideo
{
    CDStruct_bdcb2b0d _baseMD5ForStream;
    BOOL _cacheTokens;
    long long _lastChannelChangeNumber;
}

+ (Class)streamClass;
@property BOOL cacheTokens; // @synthesize cacheTokens=_cacheTokens;
- (id).cxx_construct;
- (id)newStream:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (void)delegateVideoRangeInvalidated:(id)arg1;
- (id)initWithProvider:(id)arg1 delegatingTo:(id)arg2;

@end
