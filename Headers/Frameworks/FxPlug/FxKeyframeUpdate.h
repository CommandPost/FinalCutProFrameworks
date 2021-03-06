//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FxPlug/NSCopying-Protocol.h>
#import <FxPlug/NSSecureCoding-Protocol.h>

@interface FxKeyframeUpdate : NSObject <NSSecureCoding, NSCopying>
{
    CDStruct_1b6d18a9 time;
    unsigned int parameterID;
    unsigned int channel;
    unsigned long long operation;
    struct FxKeyframe keyframe;
    unsigned long long keyframeIndex;
}

+ (id)keyframeUpdateRemoveAllWithParameterID:(unsigned int)arg1 channel:(unsigned int)arg2;
+ (id)keyframeUpdateRemove:(unsigned long long)arg1 parameterID:(unsigned int)arg2 channel:(unsigned int)arg3;
+ (id)keyframeUpdateAdd:(struct FxKeyframe)arg1 parameterID:(unsigned int)arg2 channel:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;
- (unsigned long long)getKeyframeIndex;
- (struct FxKeyframe)getKeyframe;
- (unsigned long long)getOperation;
- (unsigned int)getChannelIndex;
- (unsigned int)getParameterID;
- (CDStruct_1b6d18a9)getTime;
- (void)setKeyframeIndex:(unsigned long long)arg1;
- (void)setKeyframe:(struct FxKeyframe)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAtTime:(CDStruct_1b6d18a9)arg1 parameterID:(unsigned int)arg2 channel:(unsigned int)arg3 operation:(unsigned long long)arg4;

@end

