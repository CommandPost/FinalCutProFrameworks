//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProMedia/PM_ProPSDGradientColorStop.h>

#import "NSCoding.h"

@interface PM_ProPSDGradientDoubleColorStop : PM_ProPSDGradientColorStop <NSCoding>
{
    struct _proPSDGradientColor leadOutColor;
}

+ (void)initialize;
+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _proPSDGradientColor)arg2 leadOutColor:(struct _proPSDGradientColor)arg3;
- (id)initWithLocation:(double)arg1 leadInColor:(struct _proPSDGradientColor)arg2 leadOutColor:(struct _proPSDGradientColor)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct _proPSDGradientColor)leadInColor;
- (struct _proPSDGradientColor)leadOutColor;
- (BOOL)isDoubleStop;
- (id)description;

@end

