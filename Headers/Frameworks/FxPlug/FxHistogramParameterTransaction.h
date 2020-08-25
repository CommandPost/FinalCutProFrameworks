//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

#import "NSSecureCoding.h"

@interface FxHistogramParameterTransaction : FxParameterTransaction <NSSecureCoding>
{
    unsigned long long whichChannel;
    struct FxAllLevels allLevels;
}

+ (BOOL)supportsSecureCoding;
+ (id)histogramTransactionWithParameterID:(unsigned int)arg1 transactionID:(unsigned long long)arg2 pluginUUID:(id)arg3 pluginSessionID:(unsigned long long)arg4;
@property unsigned long long whichChannel; // @synthesize whichChannel;
@property struct FxAllLevels allLevels; // @synthesize allLevels;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (void)setValueToHost:(id)arg1 levels:(struct FxLevels)arg2 channel:(unsigned long long)arg3 atTime:(CDUnion_2516e51e)arg4;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)setLevelsFromHost:(id)arg1 forLevels:(struct FxLevels *)arg2 channel:(unsigned long long)arg3 atTime:(CDUnion_2516e51e)arg4;
- (void)getPluginValue:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 parameterFlags:(unsigned int)arg3 transactionType:(int)arg4 transactionID:(unsigned long long)arg5 pluginUUID:(id)arg6 pluginSessionID:(unsigned long long)arg7;

@end

