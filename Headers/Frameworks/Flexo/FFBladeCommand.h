//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject, FFAnchoredSequence, NSArray;

@interface FFBladeCommand : NSObject
{
    BOOL _shouldBladeSplitAudio;
    FFAnchoredSequence *_sequence;
    FFAnchoredObject *_clip;
    unsigned long long _timeInSeconds;
    NSArray *_clipsCreated;
    FFAnchoredObject *_firstClipCreated;
}

@property(nonatomic) BOOL shouldBladeSplitAudio; // @synthesize shouldBladeSplitAudio=_shouldBladeSplitAudio;
@property(retain, nonatomic) FFAnchoredObject *firstClipCreated; // @synthesize firstClipCreated=_firstClipCreated;
@property(retain, nonatomic) NSArray *clipsCreated; // @synthesize clipsCreated=_clipsCreated;
@property(nonatomic) unsigned long long timeInSeconds; // @synthesize timeInSeconds=_timeInSeconds;
@property(retain, nonatomic) FFAnchoredObject *clip; // @synthesize clip=_clip;
@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
- (void)execute;
- (void)dealloc;
- (id)init;

@end
