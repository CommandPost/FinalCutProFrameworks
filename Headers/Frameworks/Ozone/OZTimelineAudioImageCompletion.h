//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBitmapImageRep, OZTimelineViewMulti;

@interface OZTimelineAudioImageCompletion : NSObject
{
    OZTimelineViewMulti *_timelineView;
    unsigned int _audioTrackID;
    unsigned int _channels;
    NSBitmapImageRep *_bitmap;
    CDStruct_1b6d18a9 _time;
    float _horizontalScale;
}

- (id)init;
- (void)dealloc;
- (id)timelineView;
- (void)setTimelineView:(id)arg1;
- (unsigned int)audioTrackID;
- (void)setAudioTrackID:(unsigned int)arg1;
- (unsigned int)channels;
- (void)setChannels:(unsigned int)arg1;
- (id)bitmap;
- (void)setBitmap:(id)arg1;
- (CDStruct_1b6d18a9)time;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (double)horizontalScale;
- (void)setHorizontalScale:(double)arg1;

@end
