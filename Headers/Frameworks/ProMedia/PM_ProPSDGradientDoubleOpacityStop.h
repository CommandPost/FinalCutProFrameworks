//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProMedia/PM_ProPSDGradientOpacityStop.h>

#import "NSCoding.h"

@interface PM_ProPSDGradientDoubleOpacityStop : PM_ProPSDGradientOpacityStop <NSCoding>
{
    double leadOutOpacity;
}

+ (void)initialize;
+ (id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
- (id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)leadInOpacity;
- (double)leadOutOpacity;
- (BOOL)isDoubleStop;
- (id)description;

@end
