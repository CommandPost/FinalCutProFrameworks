//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFFadeHandlesLayer;

@protocol FFFadeHandlesDataSource <NSObject>
- (BOOL)shouldDisplayFadeCurveMenu:(FFFadeHandlesLayer *)arg1;
- (BOOL)hasMultipleFadeHandlesOnComponent:(FFFadeHandlesLayer *)arg1;
- (BOOL)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 moveFadeAtIndex:(unsigned long long)arg2 toTime:(CDStruct_1b6d18a9 *)arg3;
- (BOOL)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 canMoveFadeAtIndex:(unsigned long long)arg2 toTime:(CDStruct_1b6d18a9 *)arg3;
- (int)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 fadeTypeForFadeAtIndex:(unsigned long long)arg2;
- (void)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 setCurveType:(unsigned int)arg2 forFadeAtIndex:(unsigned long long)arg3;
- (unsigned int)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 curveTypeForFadeAtIndex:(unsigned long long)arg2;
- (CDStruct_e83c9415)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 timeRangeForFadeAtIndex:(unsigned long long)arg2;
- (CDStruct_e83c9415)fadeHandlesLayer:(FFFadeHandlesLayer *)arg1 timeRangeForObject:(id)arg2;
- (CDStruct_1b6d18a9)frameDurationForFadeHandlesLayer:(FFFadeHandlesLayer *)arg1;
- (unsigned long long)numberOfFadesInFadeHandlesLayer:(FFFadeHandlesLayer *)arg1;
@end

