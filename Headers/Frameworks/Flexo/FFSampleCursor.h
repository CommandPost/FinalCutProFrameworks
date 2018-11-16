//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FFSampleGenerator;

__attribute__((visibility("hidden")))
@interface FFSampleCursor : NSObject <NSCopying>
{
    FFSampleGenerator *m_ffSampleGenerator;
    struct OpaqueFigSampleCursor *m_figSampleCursor;
    CDStruct_1b6d18a9 m_ptsOfFirstSampleInDecodeOrder;
    int m_numSamplesPerFrame;
    CDStruct_1b6d18a9 m_dtsOfSavedLocation;
    CDUnknownFunctionPointerType m_getDependencyInfoFunc;
    BOOL m_getDecodeTimeStampIsImplemented;
}

- (id).cxx_construct;
- (struct opaqueCMFormatDescription *)copyFormatDescription;
- (id)eventDocumentIDAndPath;
- (struct OpaqueFigSampleCursor *)copyFigSampleCursor;
- (CDStruct_1b6d18a9)pts;
- (CDStruct_1b6d18a9)nextDTS;
- (CDStruct_1b6d18a9)dts;
- (BOOL)isIntraFrame;
- (BOOL)mustBeIntraFrame;
- (int)getDependencyInfo:(char *)arg1 partialSync:(char *)arg2 partialSyncThreshold:(int *)arg3 droppable:(char *)arg4;
- (BOOL)isAtSavedLocation;
- (void)saveCurrentLocation;
- (int)stepInPresentationOrder:(int)arg1;
- (int)stepInDecodeOrder:(int)arg1;
- (struct opaqueCMSampleBuffer *)createSampleBuffer:(CDStruct_1b6d18a9)arg1 waitTimeInSeconds:(int)arg2;
- (void)prefetch:(id)arg1;
- (BOOL)supportLongGOP;
- (CDStruct_e83c9415)getPresentationRange;
- (void)moveToFrameBoundary:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg1 ffSampleGenerator:(id)arg2;

@end

