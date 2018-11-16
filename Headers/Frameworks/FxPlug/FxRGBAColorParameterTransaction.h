//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

#import "NSSecureCoding.h"

@interface FxRGBAColorParameterTransaction : FxParameterTransaction <NSSecureCoding>
{
    double defaultRed;
    double defaultGreen;
    double defaultBlue;
    double defaultAlpha;
    double redValue;
    double greenValue;
    double blueValue;
    double alphaValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)rgbaColorTransactionWithParameterID:(unsigned int)arg1;
@property double alphaValue; // @synthesize alphaValue;
@property double blueValue; // @synthesize blueValue;
@property double greenValue; // @synthesize greenValue;
@property double redValue; // @synthesize redValue;
@property double defaultAlpha; // @synthesize defaultAlpha;
@property double defaultBlue; // @synthesize defaultBlue;
@property double defaultGreen; // @synthesize defaultGreen;
@property double defaultRed; // @synthesize defaultRed;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)getPluginValue:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parameterFlags:(unsigned int)arg7 transactionType:(int)arg8;

@end

