//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSWindow;

@protocol FFModalProgress
- (void)showIfTime;
- (void)endModalProgress;
- (BOOL)updateModalProgress:(NSString *)arg1 currentValue:(double)arg2 maxValue:(double)arg3 allowCancel:(BOOL)arg4;
- (void)beginModalProgress:(NSString *)arg1 titleText:(NSString *)arg2 showType:(int)arg3 targetWindow:(NSWindow *)arg4;
@end

