//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FFRGBColor;

__attribute__((visibility("hidden")))
@interface FFColorAnalysisOC : NSObject <NSCopying, NSCoding>
{
    FFRGBColor *global;
    FFRGBColor *highlight;
    FFRGBColor *shadow;
    FFRGBColor *lightestPixel;
    FFRGBColor *darkestPixel;
}

- (id)init;
- (id)initWithColorAnalysisOC:(id)arg1;
- (id)initWithColorAnalysis:(struct FFColorAnalysis *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setWithColorAnalysisOC:(id)arg1;
- (void)setWithColorAnalysis:(struct FFColorAnalysis *)arg1;
- (void)getWithColorAnalysis:(struct FFColorAnalysis *)arg1;
@property(nonatomic) FFRGBColor *darkestPixel; // @synthesize darkestPixel;
@property(nonatomic) FFRGBColor *lightestPixel; // @synthesize lightestPixel;
@property(nonatomic) FFRGBColor *shadow; // @synthesize shadow;
@property(nonatomic) FFRGBColor *highlight; // @synthesize highlight;
@property(nonatomic) FFRGBColor *global; // @synthesize global;

@end

