//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class NSMutableArray;

@interface MIOMediaMap : MIOObject
{
    NSMutableArray *_segments;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
}

- (id)initWithRADClip:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)addSegment:(id)arg1;
- (id)segments;
- (int)condensedState;
- (id)segmentArchive;

@end
