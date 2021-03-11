//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

@class NSError;

@interface FxStartAnalysisTransaction : FxParameterTransaction
{
    BOOL backwards;
    NSError *analysisError;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSError *analysisError; // @synthesize analysisError;
@property BOOL backwards; // @synthesize backwards;
- (void)dealloc;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackwards:(BOOL)arg1 transactionID:(unsigned long long)arg2 pluginUUID:(id)arg3 pluginSessionID:(unsigned long long)arg4;

@end

