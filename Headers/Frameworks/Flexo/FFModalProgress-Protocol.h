//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSWindow;

@protocol FFModalProgress
- (void)showIfTime;
- (void)endModalProgress;
- (void)updateTitle:(NSString *)arg1;
- (BOOL)updateModalProgress:(NSString *)arg1 currentValue:(double)arg2 maxValue:(double)arg3 allowCancel:(BOOL)arg4;
- (void)beginModalProgress:(NSString *)arg1 titleText:(NSString *)arg2 showType:(int)arg3 targetWindow:(NSWindow *)arg4;
@end

