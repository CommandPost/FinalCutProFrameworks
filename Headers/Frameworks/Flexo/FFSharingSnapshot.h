//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFAnchoredSequence, FFMediaEventDocument, FFProjectDocument;

__attribute__((visibility("hidden")))
@interface FFSharingSnapshot : NSObject
{
    FFAnchoredSequence *_sequence;
    FFProjectDocument *_sequenceDocument;
    FFMediaEventDocument *_tempEventDocument;
}

+ (id)sharingSnapshotWithSequence:(id)arg1 useTimelinePlaybackInShare:(BOOL)arg2;
+ (void)closeTemporaryDocument:(id)arg1;
@property(readonly) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
- (void)dealloc;
- (id)initWithSequence:(id)arg1 useTimelinePlaybackInShare:(BOOL)arg2;
- (void)copyReferencedClips;
- (void)copyReferencedClips:(id)arg1 targetEvent:(id)arg2;

@end

