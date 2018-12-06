//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHChannel.h>

@interface CHChannelEnum : CHChannel
{
}

+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
- (struct OZChannelEnum *)ozChannel;
- (int)intValueAtTime:(CDStruct_1b6d18a9)arg1;
- (int)intValue;
- (id)stringValueAtTime:(CDStruct_1b6d18a9)arg1;
- (id)stringValue;
- (void)setCurveIntValue:(int)arg1 atTime:(CDStruct_1b6d18a9)arg2 options:(unsigned int)arg3;
- (void)setIntValue:(int)arg1;
- (void)setCurveStringValue:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 options:(unsigned int)arg3;
- (void)setStringValue:(id)arg1;
- (int)defaultIntValue;
- (void)setDefaultIntValue:(int)arg1;
- (unsigned long long)stringCount;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)strings;
- (void)setStrings:(id)arg1;
- (BOOL)stringValuesRemapped;
- (id)intValuesForStrings;
- (void)setIntValuesForStrings:(id)arg1;

@end

