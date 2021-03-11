//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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

