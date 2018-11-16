//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

#import "NSCoding.h"

@class NSMutableArray, NSUndoManager;

@interface MIOAudioChannelMap : MIOObject <NSCoding>
{
    NSMutableArray *_channels;
    NSMutableArray *_groups;
    NSUndoManager *_undoManager;
    BOOL _stereoMixDown;
}

+ (id)audioChannelMapWithChannelCount:(unsigned long long)arg1;
- (id)initWithChannelCount:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setChannels:(id)arg1;
- (void)setGroups:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setChannelCount:(unsigned long long)arg1;
- (unsigned int)channelCount;
- (id)channels;
- (void)setEnabled:(BOOL)arg1 forChannel:(unsigned int)arg2;
- (void)setAllChannelsEnabled:(BOOL)arg1;
- (BOOL)isChannelEnabled:(unsigned int)arg1;
- (void)setLevel:(double)arg1 forChannel:(unsigned int)arg2;
- (void)setPeakLevel:(double)arg1 forChannel:(unsigned int)arg2;
- (void)setLevelsForAllChannels:(double *)arg1 count:(unsigned int)arg2;
- (unsigned int)adjacentChannelToChannel:(unsigned int)arg1;
- (void)createStereoGroupWithAdjacentChannelForChannel:(unsigned int)arg1;
- (void)removeGroupForChannel:(unsigned int)arg1;
- (id)groupForChannel:(unsigned int)arg1;
- (unsigned int)qtMovieTrackCount;
- (void)setupToMatchChannelMap:(id)arg1;
- (void)setStereoMixDown:(BOOL)arg1;
- (BOOL)stereoMixDown;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;

@end
