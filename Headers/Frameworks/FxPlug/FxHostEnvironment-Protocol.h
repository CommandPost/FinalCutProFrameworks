//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol FxHostEnvironment
- (BOOL)supportsParameterClass:(Class)arg1;
- (int)minorVersion;
- (int)majorVersion;
- (NSString *)hostName;
- (NSString *)uniqueID;
- (double)globalFrameDuration;
- (unsigned int)globalTimeScale;
@end

