//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface FxParameterTransaction : NSObject <NSSecureCoding>
{
    unsigned int version;
    unsigned int parameterID;
    unsigned int parameterFlags;
    int parameterTransactionType;
    NSString *parameterName;
    unsigned long long transactionID;
    unsigned long long pluginSessionID;
    NSString *pluginUUID;
    CDStruct_1b6d18a9 parameterTime;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *pluginUUID; // @synthesize pluginUUID;
@property(readonly) unsigned long long pluginSessionID; // @synthesize pluginSessionID;
@property(readonly) unsigned long long transactionID; // @synthesize transactionID;
@property CDStruct_1b6d18a9 parameterTime; // @synthesize parameterTime;
@property int parameterTransactionType; // @synthesize parameterTransactionType;
@property unsigned int parameterFlags; // @synthesize parameterFlags;
@property(retain) NSString *parameterName; // @synthesize parameterName;
@property unsigned int parameterID; // @synthesize parameterID;
@property unsigned int version; // @synthesize version;
- (void)getPropertiesFromHost:(id)arg1;
- (void)setPropertiesToHost:(id)arg1;
- (void)setValueFromPlugin:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setValueToHost:(id)arg1;
- (BOOL)setValueFromHost:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)getPluginValue:(void *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)addParameter:(id)arg1;
- (id)description;
- (id)stringForTransactionType;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithParameterID:(unsigned int)arg1 parameterName:(id)arg2 parameterFlags:(unsigned int)arg3 transactionType:(int)arg4 transactionID:(unsigned long long)arg5 pluginUUID:(id)arg6 pluginSessionID:(unsigned long long)arg7;

@end

