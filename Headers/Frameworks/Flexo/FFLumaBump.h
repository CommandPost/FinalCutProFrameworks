//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface FFLumaBump : FFBaseDSObject <NSCopying>
{
    double _bumpHue;
    double _bumpSigma;
    double _lift;
    double _gamma;
    double _gain;
    double _saturation;
    double _blackBalX;
    double _blackBalY;
    double _whiteBalX;
    double _whiteBalY;
}

+ (id)lumaBump;
+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property double whiteBalY; // @synthesize whiteBalY=_whiteBalY;
@property double whiteBalX; // @synthesize whiteBalX=_whiteBalX;
@property double blackBalY; // @synthesize blackBalY=_blackBalY;
@property double blackBalX; // @synthesize blackBalX=_blackBalX;
@property double saturation; // @synthesize saturation=_saturation;
@property double gain; // @synthesize gain=_gain;
@property double gamma; // @synthesize gamma=_gamma;
@property double lift; // @synthesize lift=_lift;
@property double bumpSigma; // @synthesize bumpSigma=_bumpSigma;
@property double bumpHue; // @synthesize bumpHue=_bumpHue;
- (CDStruct_bdcb2b0d)md5;
- (BOOL)isAtDefaultSettings;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

