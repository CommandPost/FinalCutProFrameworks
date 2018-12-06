//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

#import "MIORADFormatReaderProtocol.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MIORADSpannedFormatReader : MIOObject <MIORADFormatReaderProtocol>
{
    NSMutableArray *_formatReaders;
    NSMutableArray *_trackReaders;
}

+ (id)formatReaderWithClip:(id)arg1;
- (id)initWithClip:(id)arg1;
- (void)dealloc;
- (id)tracks;
- (BOOL)implementsDuration;
- (CDStruct_87dc826d)duration;
- (BOOL)implementsEstimatedDuration;
- (CDStruct_87dc826d)estimatedDuration;
- (BOOL)implementsAccurateDurationIsKnown;
- (BOOL)accurateDurationIsKnown;
- (BOOL)implementsSampleCursorTimeAccuracyIsExact;
- (BOOL)sampleCursorTimeAccuracyIsExact;
- (BOOL)implementsTimescale;
- (long long)timescale;
- (BOOL)implementsLocationOffset;
- (long long)locationOffset;
- (BOOL)implementsLocationSize;
- (long long)locationSize;
- (id)description;
@property(retain) NSMutableArray *trackReaders; // @synthesize trackReaders=_trackReaders;
@property(retain) NSMutableArray *formatReaders; // @synthesize formatReaders=_formatReaders;

@end

