//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFStreamAudio.h>

__attribute__((visibility("hidden")))
@interface FFStreamAudioSubset : FFStreamAudio
{
    FFStreamAudio *m_parentStream;
    struct FFAudioNode *m_mixerNode;
}

- (void)preRenderEnd;
- (void)preRenderBegin:(CDStruct_1b6d18a9)arg1 sync:(id)arg2;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 prerollDuration:(CDStruct_1b6d18a9)arg2 maxDuration:(CDStruct_1b6d18a9)arg3 rate:(double)arg4 sync:(id)arg5;
- (void)dealloc;

@end

