//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFCommonSequenceAudioStream.h>

@class FFAnchoredSequence;

__attribute__((visibility("hidden")))
@interface FFAnchoredSequenceAudioStream : FFCommonSequenceAudioStream
{
    BOOL _installedFormatObservers;
    FFAnchoredSequence *_formatObservedSequence;
    BOOL _installedLiveUpdateObservers;
    FFAnchoredSequence *_liveUpdateObservedSequence;
}

- (void)sequenceAudioChannelCount:(id)arg1 didChange:(id)arg2;
- (void)sequenceSoloedClips:(id)arg1 didChange:(id)arg2;
- (void)_updateEditedSequenceForPlayback;
- (void)sequenceEditing:(id)arg1 didChange:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 prerollDuration:(CDStruct_1b6d18a9)arg2 maxDuration:(CDStruct_1b6d18a9)arg3 rate:(double)arg4 sync:(id)arg5;
- (void)setRate:(double)arg1;
- (id)initWithSource:(id)arg1 context:(id)arg2 options:(id)arg3;

@end
