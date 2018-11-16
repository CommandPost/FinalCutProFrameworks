//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSColor.h"

@interface LKCGPatternColor : NSColor
{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    double _alpha;
}

- (double)alpha;
- (void)setAlpha:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)patternImage;
- (struct CGImage *)patternImageRef;
- (id)description;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (void)set;
- (struct CGPattern *)pattern;
- (struct CGPattern *)newCGPattern;
- (void)finalize;
- (void)dealloc;
- (id)initWithImageRef:(struct CGImage *)arg1;

@end
