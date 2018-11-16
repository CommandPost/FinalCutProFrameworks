//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FxVector : NSObject
{
    unsigned long long _count;
    union {
        double vec[4];
        double *ptr;
    } _u;
}

+ (id)vectorWithValues:(const double *)arg1 count:(unsigned long long)arg2;
+ (id)vectorWithCIVector:(id)arg1;
+ (id)vectorWithX:(double)arg1;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
+ (id)vectorWithString:(id)arg1;
- (id)initWithCIVector:(id)arg1;
- (id)init;
- (id)initWithX:(double)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (id)initWithValues:(const double *)arg1 count:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)count;
- (double)valueAtIndex:(unsigned long long)arg1;
- (double)X;
- (double)Y;
- (double)Z;
- (double)W;
- (id)ciVector;
- (id)stringRepresentation;

@end
