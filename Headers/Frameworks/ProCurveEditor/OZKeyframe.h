//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OZKeyframe : NSObject
{
    void *_handle;
    unsigned int _curveId;
    CDStruct_1b6d18a9 _u;
    double _v;
    CDStruct_1b6d18a9 _inTanU;
    double _inTanV;
    CDStruct_1b6d18a9 _outTanU;
    double _outTanV;
}

- (id).cxx_construct;
- (double)outTanV;
- (void)setOutTanV:(double)arg1;
- (CDStruct_1b6d18a9)outTanU;
- (void)setOutTanU:(CDStruct_1b6d18a9)arg1;
- (double)inTanV;
- (void)setInTanV:(double)arg1;
- (CDStruct_1b6d18a9)inTanU;
- (void)setInTanU:(CDStruct_1b6d18a9)arg1;
- (double)v;
- (void)setV:(double)arg1;
- (CDStruct_1b6d18a9)u;
- (void)setU:(CDStruct_1b6d18a9)arg1;
- (unsigned int)curveId;
- (void)setCurveId:(unsigned int)arg1;
- (void *)handle;
- (void)setHandle:(void *)arg1;

@end

