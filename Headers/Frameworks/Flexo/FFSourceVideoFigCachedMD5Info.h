//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFSVContext, FFSubRangeMD5Info;

__attribute__((visibility("hidden")))
@interface FFSourceVideoFigCachedMD5Info : NSObject
{
    FFSubRangeMD5Info *_info;
    CDStruct_1b6d18a9 _endTime;
    CDStruct_1b6d18a9 _sd;
    FFSVContext *_context;
}

@property(readonly) FFSubRangeMD5Info *info; // @synthesize info=_info;
- (id).cxx_construct;
- (BOOL)usableForSD:(CDStruct_1b6d18a9)arg1 time:(CDStruct_1b6d18a9)arg2 context:(id)arg3 additionalCompareFlags:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 sd:(CDStruct_1b6d18a9)arg2 context:(id)arg3;

@end

