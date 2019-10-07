//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

#import "NSSecureCoding.h"

@class NSObject<NSSecureCoding><NSCopying>;

@interface FxCustomParameterTransaction : FxParameterTransaction <NSSecureCoding>
{
    NSObject<NSSecureCoding><NSCopying> *defaultValue;
    NSObject<NSSecureCoding><NSCopying> *value;
}

+ (BOOL)supportsSecureCoding;
+ (id)customTransactionWithParameterID:(unsigned int)arg1 transactionID:(unsigned long long)arg2;
@property(retain) NSObject<NSSecureCoding><NSCopying> *value; // @synthesize value;
@property(retain) NSObject<NSSecureCoding><NSCopying> *defaultValue; // @synthesize defaultValue;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)getPluginValue:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 defaultValue:(id)arg3 parameterFlags:(unsigned int)arg4 transactionType:(int)arg5 transactionID:(unsigned long long)arg6;

@end

