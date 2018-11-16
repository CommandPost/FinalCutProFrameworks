//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface iLifeMathHelpers : NSObject
{
}

+ (double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(BOOL)arg6;
+ (struct CGRect)verticallyCenterRect:(struct CGRect)arg1 overRect:(struct CGRect)arg2;
+ (double)zRotationFromCATransform3D:(struct CATransform3D)arg1;
+ (double)lengthOfPathDefinedByPoints:(id)arg1;
+ (double)distanceBetweenPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;
+ (double)degreesBetweenVertAxisAndLineWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;
+ (double)degreesBetweenHorzAxisAndLineWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;
+ (double)degreesFromRadians:(double)arg1;
+ (double)radiansFromDegrees:(double)arg1;

@end
