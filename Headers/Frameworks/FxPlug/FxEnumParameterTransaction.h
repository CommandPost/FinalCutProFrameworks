//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface FxEnumParameterTransaction : FxParameterTransaction <NSSecureCoding>
{
    unsigned int defaultValue;
    unsigned int value;
    NSArray *entries;
}

+ (BOOL)supportsSecureCoding;
@property unsigned int value; // @synthesize value;
@property unsigned int defaultValue; // @synthesize defaultValue;
@property(retain) NSArray *entries; // @synthesize entries;
- (void)setPropertiesToHost:(id)arg1;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)getPluginValue:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 defaultValue:(unsigned int)arg3 menuEntries:(id)arg4 parameterFlags:(unsigned int)arg5 transactionType:(int)arg6;

@end

