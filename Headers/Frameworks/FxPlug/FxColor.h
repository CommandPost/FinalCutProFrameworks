//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface FxColor : NSObject <NSCoding>
{
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithString:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ciColor;
- (struct CGColor *)_cgColor;
- (void)convertToRGBA:(double *)arg1;
- (struct CGColorSpace *)colorSpace;
- (id)stringRepresentation;
- (double)blue;
- (double)green;
- (double)red;
- (double)alpha;
- (const double *)components;
- (unsigned long long)numberOfComponents;
- (void)dealloc;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithString:(id)arg1;

@end

