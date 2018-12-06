//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MIORADIngestObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MIORADSpannedIngestObject : NSObject <MIORADIngestObject>
{
    NSArray *mIngestObjects;
    NSArray *mPathSets;
    NSArray *mRefCons;
    NSArray *mDurations;
    double mMediaRate;
    long long mHighestVideoPresentationTimeStamp[2];
    long long mHighestVideoDuration[2];
    id mCurrentIngestObject;
    int mCurrentIngestObjectIndex;
}

- (id)initWithIngestObjects:(id)arg1 andPathSets:(id)arg2 andRefCons:(id)arg3 andDurations:(id)arg4 andMediaRate:(double)arg5;
- (void)dealloc;
- (void)performSelector:(SEL)arg1 onObjects:(id)arg2 withObjects:(id)arg3;
- (int)initialize:(void *)arg1;
- (int)teardown:(void *)arg1;
- (int)start:(void *)arg1;
- (int)stop:(void *)arg1;
- (int)cleanup:(void *)arg1;
- (int)reset:(void *)arg1;
- (int)setPathSet:(id)arg1 inRefCon:(void *)arg2;
- (int)setInPoint:(struct MIORADTime64Specification *)arg1 inRefCon:(void *)arg2;
- (int)setOutPoint:(struct MIORADTime64Specification *)arg1 inRefCon:(void *)arg2;
- (int)setKeepMediaVideoRate:(BOOL)arg1 inRefCon:(void *)arg2;
- (int)getNextMedia:(struct MIORADPlugInMediaSpecifier *)arg1 inRefCon:(void *)arg2;

@end

