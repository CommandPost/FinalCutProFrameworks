//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFAnchoredSequence, FFShareHelper, NSWindow;

@protocol FFSharableContent
- (FFShareHelper *)shareHelper;
- (BOOL)useTimelinePlaybackInShareOfSequence:(FFAnchoredSequence *)arg1;
- (NSWindow *)window;
- (id)shareSelection:(id)arg1;

@optional
- (CDStruct_1b6d18a9)currentSequenceTime;
@end

