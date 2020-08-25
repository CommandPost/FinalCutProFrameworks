//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxStringParameterTransaction.h>

#import "NSSecureCoding.h"

@interface FxFontParameterTransaction : FxStringParameterTransaction <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)fontTransactionWithParameterID:(unsigned int)arg1 transactionID:(unsigned long long)arg2 pluginUUID:(id)arg3 pluginSessionID:(unsigned long long)arg4;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 defaultFontName:(id)arg3 parameterFlags:(unsigned int)arg4 transactionType:(int)arg5 transactionID:(unsigned long long)arg6 pluginUUID:(id)arg7 pluginSessionID:(unsigned long long)arg8;

@end

