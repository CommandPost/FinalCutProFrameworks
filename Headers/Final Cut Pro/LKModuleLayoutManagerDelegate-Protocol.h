//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKModuleLayout;

@protocol LKModuleLayoutManagerDelegate <NSObject>

@optional
- (unsigned long long)currentCompatibleLayoutVersion;
- (BOOL)canApplyLayout:(LKModuleLayout *)arg1 error:(id *)arg2;
- (BOOL)canApplyLayout:(LKModuleLayout *)arg1;
@end
