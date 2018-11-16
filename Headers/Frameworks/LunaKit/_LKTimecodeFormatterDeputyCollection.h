//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class LKFFTimecodeFormatDeputy, LKHMSTimecodeFormatDeputy, LKMeasuredTimecodeFormatDeputy, LKOneDAudioTimecodeFormatDeputy, LKOneDTimeTimecodeFormatDeputy, LKOneDVideoTimecodeFormatDeputy, LKSMPTETimecodeFormatDeputy;

@interface _LKTimecodeFormatterDeputyCollection : NSObject <NSCopying, NSCoding>
{
    LKSMPTETimecodeFormatDeputy *SMPTEDeputy;
    LKHMSTimecodeFormatDeputy *HMSDeputy;
    LKOneDVideoTimecodeFormatDeputy *videoDeputy;
    LKOneDAudioTimecodeFormatDeputy *audioDeputy;
    LKOneDTimeTimecodeFormatDeputy *secondsDeputy;
    LKMeasuredTimecodeFormatDeputy *barsBeatsDeputy;
    LKFFTimecodeFormatDeputy *feetFramesDeputy;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)deputyForFormat:(long long)arg1;
- (void)setDeputy:(id)arg1 forFormat:(long long)arg2;

@end

