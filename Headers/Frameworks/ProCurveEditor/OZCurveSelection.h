//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface OZCurveSelection : NSObject <NSCopying>
{
    unsigned long long _handle;
    unsigned long long _flag;
    CDStruct_1b6d18a9 _u;
    double _v;
    double _inTanU;
    double _inTanV;
    double _outTanU;
    double _outTanV;
    unsigned int _curveId;
}

- (id)init;
- (void *)getHandle;
- (void)setHandle:(void *)arg1;
- (unsigned long long)getFlags;
- (unsigned int)getCurveId;
- (void)setFlags:(unsigned long long)arg1;
- (void)resetFlags;
- (void)setCurveId:(unsigned int)arg1;
- (BOOL)isKeypoint;
- (BOOL)getKeypointUV:(CDStruct_1b6d18a9 *)arg1 pV:(double *)arg2;
- (BOOL)setKeypointUV:(CDStruct_1b6d18a9)arg1 v:(double)arg2;
- (BOOL)getKeypointTangents:(double *)arg1 inV:(double *)arg2 outU:(double *)arg3 outV:(double *)arg4;
- (BOOL)setKeypointTangents:(double)arg1 inV:(double)arg2 outU:(double)arg3 outV:(double)arg4;
- (BOOL)isTangent;
- (BOOL)isCurve;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareKeypointAscending:(id)arg1;
- (long long)compareKeypointDescending:(id)arg1;

@end
