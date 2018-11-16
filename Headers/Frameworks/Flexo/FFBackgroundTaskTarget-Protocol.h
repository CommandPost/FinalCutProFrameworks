//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFBackgroundTask, NSSet;

@protocol FFBackgroundTaskTarget
- (NSSet *)projectsInUse;
- (NSSet *)assetRefsInUse;

@optional
- (void)canceledTask:(FFBackgroundTask *)arg1;
- (BOOL)confirmIsPaused:(FFBackgroundTask *)arg1;
- (void)resumedTask:(FFBackgroundTask *)arg1;
- (void)pausedTask:(FFBackgroundTask *)arg1;
- (BOOL)isReadyForTask:(FFBackgroundTask *)arg1;
- (NSSet *)assetRefsInUseByTask:(FFBackgroundTask *)arg1;
@end
