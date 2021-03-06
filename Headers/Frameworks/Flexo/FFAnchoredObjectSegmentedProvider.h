//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import <Flexo/FFModelLocking-Protocol.h>

@class FFAnchoredObject, FFAnchoredSequence, NSDictionary, NSSet, NSString;
@protocol FFSegmentedSourceProtocol;

__attribute__((visibility("hidden")))
@interface FFAnchoredObjectSegmentedProvider : FFProvider <FFModelLocking>
{
    FFAnchoredObject<FFSegmentedSourceProtocol> *_anchoredObject;
    long long _effectCount;
    NSSet *_audioAngles;
    NSString *_videoAngle;
    long long _toLane;
    long long _angleOffset;
    long long _angleCount;
    FFAnchoredSequence *_retainedSequence;
    NSSet *_showOnlyObjects;
    NSSet *_roles;
    NSDictionary *_audioComponentsPlaybackInfo;
}

+ (id)extensions;
+ (id)utis;
@property(readonly, retain, nonatomic) NSSet *roles; // @synthesize roles=_roles;
@property(readonly, retain, nonatomic) NSSet *showOnlyObjects; // @synthesize showOnlyObjects=_showOnlyObjects;
- (id)anchoredObject;
- (id)modelLockingObject;
- (id)displayName;
- (void)_setupSources;
- (void)dealloc;
@property(readonly, nonatomic) long long angleCount;
@property(readonly, nonatomic) long long angleOffset;
- (long long)toLane;
- (id)audioAngles;
- (id)videoAngle;
- (long long)effectCount;
- (id)object;
- (id)initWithAnchoredObject:(id)arg1 effectCount:(long long)arg2 audioAngles:(id)arg3 videoAngle:(id)arg4 toLane:(long long)arg5 showOnlyObjects:(id)arg6 roles:(id)arg7 angleOffset:(long long)arg8 angleCount:(long long)arg9 audioComponentsPlaybackInfo:(id)arg10;

@end

