//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFGraphBuildInformation : NSObject
{
    BOOL _retimeApproximateDueToMissingFlowVectors;
    BOOL _approximateDueToMissingDominantMotion;
    BOOL _flowTransitionNeedsAnalysis;
    BOOL _oneOrMoreCacheHits;
    unsigned int _cacheHitReasons;
}

+ (id)graphBuildInformation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unionBuildInfo:(id)arg1;
- (unsigned int)getCacheHitReasons;
- (void)updateCacheHitReasons:(unsigned int)arg1;
- (BOOL)oneOrMoreCacheHits;
- (void)setOneOrMoreCacheHits:(BOOL)arg1;
- (BOOL)flowTransitionNeedsAnalysis;
- (void)setFlowTransitionNeedsAnalysis:(BOOL)arg1;
- (BOOL)approximateDueToMissingDominantMotion;
- (void)setApproximateDueToMissingDominantMotion:(BOOL)arg1;
- (BOOL)retimeApproximateDueToMissingFlowVectors;
- (void)setRetimeApproximateDueToMissingFlowVectors:(BOOL)arg1;

@end

