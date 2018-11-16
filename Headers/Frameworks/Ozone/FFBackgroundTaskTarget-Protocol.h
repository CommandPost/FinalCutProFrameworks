//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFBackgroundTask, NSSet;

@protocol FFBackgroundTaskTarget
- (NSSet *)librariesInUse:(FFBackgroundTask *)arg1;
- (NSSet *)assetsInUse:(FFBackgroundTask *)arg1;

@optional
- (void)completedTask:(FFBackgroundTask *)arg1;
- (void)startedTask:(FFBackgroundTask *)arg1;
- (void)canceledTask:(FFBackgroundTask *)arg1;
- (BOOL)confirmIsPaused:(FFBackgroundTask *)arg1;
- (void)resumedTask:(FFBackgroundTask *)arg1;
- (void)pausedTask:(FFBackgroundTask *)arg1;
- (NSSet *)assetsChanging:(FFBackgroundTask *)arg1;
@end

