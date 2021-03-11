//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFProvider, NSString;

@interface FFSource : NSObject
{
    FFProvider *_provider;
    NSString *_identifier;
}

+ (Class)streamClass;
- (BOOL)sourceEnabled;
- (id)displayName;
- (BOOL)isValid;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (CDStruct_1b6d18a9)nativeSampleDuration;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;
- (CDStruct_e83c9415)timeRange;
- (id)type;
- (int)providerRetainCount;
- (id)provider;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)initWithNoProvider;
- (id)initWithProvider:(id)arg1;

@end

