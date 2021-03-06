//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FFPasteEffectsMoveKeyframesInfo : NSObject <NSCopying>
{
    long long m_keyframeMode;
    CDStruct_1b6d18a9 m_frameDuration;
    CDStruct_e83c9415 m_sourceClippedRange;
    CDStruct_1b6d18a9 m_sourceUnclippedStart;
    CDStruct_e83c9415 m_destClippedRange;
    CDStruct_e83c9415 m_destUnclippedRange;
}

@property(readonly, nonatomic) CDStruct_e83c9415 destUnclippedRange; // @synthesize destUnclippedRange=m_destUnclippedRange;
@property(readonly, nonatomic) CDStruct_e83c9415 destClippedRange; // @synthesize destClippedRange=m_destClippedRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 sourceUnclippedStart; // @synthesize sourceUnclippedStart=m_sourceUnclippedStart;
@property(readonly, nonatomic) CDStruct_e83c9415 sourceClippedRange; // @synthesize sourceClippedRange=m_sourceClippedRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=m_frameDuration;
@property(readonly, nonatomic) long long keyframeMode; // @synthesize keyframeMode=m_keyframeMode;
- (void)updateWithDestObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyframeMode:(long long)arg1 sourceObject:(id)arg2 destObject:(id)arg3;
- (id)initWithKeyframeMode:(long long)arg1 sourceObject:(id)arg2;
- (id)initWithKeyframeMode:(long long)arg1 sourceClippedRange:(CDStruct_e83c9415)arg2 sourceUnclippedStart:(CDStruct_1b6d18a9)arg3;

@end

