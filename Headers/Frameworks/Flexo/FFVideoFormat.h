//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoProps.h>

#import "NSCopying.h"

@class NSString;

@interface FFVideoFormat : FFVideoProps <NSCopying>
{
    NSString *_name;
    NSString *_displayFormatName;
    NSString *_displaySize;
    NSString *_displayRate;
    _Bool _isInstalledFormat;
}

+ (void)releaseSharedInstance;
+ (id)FFOtherFormatDisplayName;
+ (id)formatsDict;
+ (id)formatForName:(id)arg1;
+ (id)formats;
+ (void)addFormat:(id)arg1 withName:(id)arg2;
+ (id)displayFormatsInOrder;
+ (id)displayRatesInOrder;
+ (id)displaySizesInOrderForFormat:(id)arg1;
+ (id)displaySizesForFormat:(id)arg1;
+ (id)displayRatesForFormat:(id)arg1 andSize:(id)arg2;
+ (id)formatForDisplayFormat:(id)arg1 displaySize:(id)arg2 displayRate:(id)arg3;
+ (id)displayFormatsForRate:(id)arg1;
+ (id)displayFormatsForFrameDuration:(CDStruct_1b6d18a9)arg1;
+ (id)displaySizesForFormat:(id)arg1 andRate:(id)arg2;
+ (id)displaySizesForFormat:(id)arg1 andFrameDuration:(CDStruct_1b6d18a9)arg2;
+ (id)displayRatesForFormat:(id)arg1 andSize:(id)arg2 andFrameDuration:(CDStruct_1b6d18a9)arg3;
- (id)initWithName:(id)arg1 displayFormat:(id)arg2 displaySize:(id)arg3 displayRate:(id)arg4 pixelSpaceFrameBounds:(struct CGRect)arg5 colorSpace:(struct CGColorSpace *)arg6 fieldDominance:(int)arg7 sampleDuration:(CDStruct_1b6d18a9)arg8 frame:(id)arg9 field1:(id)arg10 field2:(id)arg11 paspH:(int)arg12 paspV:(int)arg13 frameRateUndefined:(BOOL)arg14;
- (id)initWithPList:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSString *name;
- (void)setName:(id)arg1;
- (id)displayName;
- (id)displayFormat;
- (id)displaySize;
- (id)displayRate;
- (id)description;
- (CDStruct_1b6d18a9)sampleDuration;
- (CDStruct_1b6d18a9)frameDuration;
- (int)fieldDominance;
- (id)exactMatchVideoFormat;
- (id)newPList;
@property(nonatomic) _Bool isInstalledFormat; // @synthesize isInstalledFormat=_isInstalledFormat;

@end
