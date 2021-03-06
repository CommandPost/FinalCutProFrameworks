//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import <Flexo/FFAnchoredSequenceDSObservedObject-Protocol.h>
#import <Flexo/NSCopying-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class FFAnchoredGeneratorComponent, FFAnchoredObject;

@interface FFCollectionFades : FFBaseDSObject <NSSecureCoding, NSCopying, FFAnchoredSequenceDSObservedObject>
{
    CDStruct_1b6d18a9 _fadeInStartTime;
    CDStruct_1b6d18a9 _fadeInDuration;
    CDStruct_1b6d18a9 _fadeOutStartTime;
    CDStruct_1b6d18a9 _fadeOutDuration;
    FFAnchoredGeneratorComponent *_fadeInObject;
    FFAnchoredGeneratorComponent *_fadeOutObject;
    FFAnchoredObject *_parentItem;
}

+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property(nonatomic) CDStruct_1b6d18a9 fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) CDStruct_1b6d18a9 fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) CDStruct_1b6d18a9 fadeOutStartTime; // @synthesize fadeOutStartTime=_fadeOutStartTime;
@property(nonatomic) CDStruct_1b6d18a9 fadeInStartTime; // @synthesize fadeInStartTime=_fadeInStartTime;
- (id)anchoredObjectForSequenceDSObserving;
- (void)_updateAudioFades;
- (BOOL)isFadeInOrOutObject:(id)arg1;
- (id)fadeOutObject;
- (id)fadeInObject;
- (id)description;
@property(readonly, nonatomic) FFAnchoredObject *parentItem;
- (void)setParentItem:(id)arg1;
- (void)setFadeOutStart:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (void)setFadeInStart:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (CDStruct_e83c9415)fadeOutTimeRange;
- (CDStruct_e83c9415)fadeInTimeRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)setFadeValue:(BOOL)arg1 startTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3;

@end

