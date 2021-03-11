//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFDestVideoScopes, FFImage;

@protocol FFDestVideoScopesDelegate
- (const struct FxDevice *)imageLocationForVideoScopes;
- (void)drawVideoScopeWithField1:(FFImage *)arg1 field2:(FFImage *)arg2 fieldMode:(long long)arg3 completionBlock:(void (^)(void))arg4;

@optional
- (struct CGColorSpace *)overrideColorSpaceForVideoScopes:(FFDestVideoScopes *)arg1;
- (void)colorSpaceDidChangeForVideoScopes:(FFDestVideoScopes *)arg1;
@end

