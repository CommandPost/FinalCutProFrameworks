//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProCurveEditor/OZCurveEditorItem.h>

@interface OZCurveEditorChannelItem : OZCurveEditorItem
{
    BOOL _originalCurveDirty;
    BOOL _processedCurveDirty;
    BOOL _drawGhost;
    BOOL _drawProcessedCurve;
    CDStruct_1b6d18a9 *_processedSamplesU;
    double *_processedSamplesV;
    unsigned int _numberOfProcessedSamples;
    CDStruct_1b6d18a9 *_samplesU;
    double *_samplesV;
    double *_samplesVSnapshot;
    CDStruct_1b6d18a9 *_samplesUSnapshot;
    unsigned int _numberOfSamples;
    unsigned int _numberOfSamplesSnapshot;
    vector_dd51e4ce _keypoints;
    unsigned int _colorIndex;
    double _scaleY;
    double _offsetY;
    double _maxY;
    double _minY;
    BOOL _updateScale;
    double _channelScale;
    struct OZChannel *_backupChannel;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OZChannel *)snapshotChannel;
- (id)compoundChannelComponents;
- (BOOL)isCompound;
- (int)isEnabledItem;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setCurrentValue:(double)arg1;
- (double)currentValue;
- (void)takeCurveSnapshot:(BOOL)arg1;
- (void)refreshProcessedCurve:(CDStruct_1b6d18a9)arg1 resolution:(CDStruct_1b6d18a9)arg2;
- (void)refreshOriginalCurve:(CDStruct_1b6d18a9)arg1 resolution:(CDStruct_1b6d18a9)arg2;
- (void)setNumberOfSamples:(unsigned int)arg1;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)arg1;
- (void)setMaxY:(double)arg1;
- (double)maxY;
- (void)setMinY:(double)arg1;
- (double)minY;
- (double)conversionFactor;
- (void)setOffsetY:(double)arg1;
- (double)offsetY;
- (void)setScaleY:(double)arg1;
- (double)scaleY;
- (unsigned int)numberOfKeypoints;
- (vector_dd51e4ce *)keypoints;
- (unsigned int)numberOfSamples;
- (unsigned int)numberOfSamplesSnapshot;
- (void)setNumberOfSamplesSnapshot:(unsigned int)arg1;
- (CDStruct_1b6d18a9 *)samplesUSnapshot;
- (void)setSamplesUSnapshot:(CDStruct_1b6d18a9 *)arg1;
- (double *)samplesVSnapshot;
- (void)setSamplesVSnapshot:(double *)arg1;
- (double *)samplesV;
- (void)setSamplesV:(double *)arg1;
- (CDStruct_1b6d18a9 *)samplesU;
- (void)setSamplesU:(CDStruct_1b6d18a9 *)arg1;
- (unsigned int)numberOfProcessedSamples;
- (void)setNumberOfProcessedSamples:(unsigned int)arg1;
- (double *)processedSamplesV;
- (void)setProcessedSamplesV:(double *)arg1;
- (CDStruct_1b6d18a9 *)processedSamplesU;
- (void)setProcessedSamplesU:(CDStruct_1b6d18a9 *)arg1;
- (BOOL)drawProcessedCurve;
- (void)setDrawProcessedCurve:(BOOL)arg1;
- (BOOL)drawGhost;
- (void)setDrawGhost:(BOOL)arg1;
- (BOOL)processedCurveDirty;
- (void)setProcessedCurveDirty:(BOOL)arg1;
- (BOOL)originalCurveDirty;
- (void)setOriginalCurveDirty:(BOOL)arg1;
- (BOOL)updateScale;
- (void)setUpdateScale:(BOOL)arg1;
- (BOOL)isAnimatedChannel;
- (void)enableItem:(int)arg1;
- (void)dealloc;
- (id)initWithChannel:(struct OZChannelBase *)arg1 numberOfSamples:(double)arg2 appDelegate:(id)arg3 ignoreHiddenChannels:(BOOL)arg4;

@end

