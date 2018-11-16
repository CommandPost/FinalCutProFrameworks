//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

#import "NSSecureCoding.h"

@interface FxIntParameterTransaction : FxParameterTransaction <NSSecureCoding>
{
    int defaultValue;
    int parameterMin;
    int parameterMax;
    int sliderMin;
    int sliderMax;
    int sliderDelta;
    int value;
}

+ (BOOL)supportsSecureCoding;
+ (id)intTransactionWithParameterID:(unsigned int)arg1;
@property int value; // @synthesize value;
@property int sliderDelta; // @synthesize sliderDelta;
@property int sliderMax; // @synthesize sliderMax;
@property int sliderMin; // @synthesize sliderMin;
@property int parameterMax; // @synthesize parameterMax;
@property int parameterMin; // @synthesize parameterMin;
@property int defaultValue; // @synthesize defaultValue;
- (void)setPropertiesToHost:(id)arg1;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)getPluginValue:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 sliderDelta:(int)arg8 parameterFlags:(unsigned int)arg9 transactionType:(int)arg10;

@end
