//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamAudio.h>

#import "FFStreamAudioScopingWindowProtocol.h"

__attribute__((visibility("hidden")))
@interface FFCommonSequenceAudioStream : FFStreamAudio <FFStreamAudioScopingWindowProtocol>
{
    unsigned int _sampleRate;
    struct FFAudioDynamicScopingWindow *_dynamicScopingWindow;
}

- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 options:(id)arg3 rootItem:(id)arg4;
- (CDStruct_e83c9415)calculateScopingWindowTimeRange:(CDStruct_e83c9415)arg1 prerollRange:(CDStruct_e83c9415)arg2;
- (void)findAssociatedMixBussScopingWindows:(id)arg1;
- (void)advanceScopingWindow:(CDStruct_1b6d18a9)arg1 sync:(id)arg2;
- (void)setRate:(double)arg1;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 prerollDuration:(CDStruct_1b6d18a9)arg2 maxDuration:(CDStruct_1b6d18a9)arg3 rate:(double)arg4 sync:(id)arg5;
- (void)_prerollBeginFinish:(CDStruct_1b6d18a9)arg1 prerollDuration:(CDStruct_1b6d18a9)arg2 maxDuration:(CDStruct_1b6d18a9)arg3 rate:(double)arg4 sync:(id)arg5;
- (void)_prerollBeginSetup;
- (id)anchoredObject;
- (id)anchoredSequenceSource;

@end

