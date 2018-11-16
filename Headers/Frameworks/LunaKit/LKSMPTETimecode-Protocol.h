//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol LKSMPTETimecode
- (void)subtractSMPTEHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 subframes:(long long)arg5 quarterFrames:(long long)arg6;
- (void)addSMPTEHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 subframes:(long long)arg5 quarterFrames:(long long)arg6;
- (void)setSMPTEQuarterFrames:(long long)arg1;
- (void)setSMPTESubframes:(long long)arg1;
- (void)setSMPTEFrames:(long long)arg1;
- (void)setSMPTESeconds:(long long)arg1;
- (void)setSMPTEMinutes:(long long)arg1;
- (void)setSMPTEHours:(long long)arg1;
- (void)getSMPTEHours:(long long *)arg1 minutes:(long long *)arg2 seconds:(long long *)arg3 frames:(long long *)arg4 subframes:(long long *)arg5 quarterFrames:(long long *)arg6;
- (BOOL)isDropFrame;
@end
