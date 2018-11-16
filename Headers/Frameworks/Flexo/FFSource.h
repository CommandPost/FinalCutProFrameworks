//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFProvider, NSString;

@interface FFSource : NSObject
{
    FFProvider *_provider;
    NSString *_identifier;
}

+ (long long)sourceCount;
+ (Class)streamClass;
- (id)initWithProvider:(id)arg1;
- (id)initWithNoProvider;
- (void)dealloc;
- (id)retain;
- (void)release;
- (id)provider;
- (id)type;
- (CDStruct_e83c9415)timeRange;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (CDStruct_1b6d18a9)nativeSampleDuration;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (id)displayName;

@end
