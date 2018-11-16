//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProMedia/PM_ProPSDGradientStop.h>

#import "NSCoding.h"

@interface PM_ProPSDGradientOpacityStop : PM_ProPSDGradientStop <NSCoding>
{
    double opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2;
- (id)initWithLocation:(double)arg1 opacity:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)opacity;
- (double)opacityLocation;
- (BOOL)isOpacityStop;
- (id)description;

@end
