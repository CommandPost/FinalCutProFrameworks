//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZMoCurveEditorView.h>

#import "OZHGUserJobClient.h"

@interface OZAudioWaveform : OZMoCurveEditorView <OZHGUserJobClient>
{
    char *_waveBuffer;
    unsigned int _numChannels;
    unsigned int _index;
    unsigned char _minLeft;
    unsigned char _maxLeft;
    unsigned char _minRight;
    unsigned char _maxRight;
    double _scale;
    double _consumed;
    char *_dest;
    char *_destEnd;
    BOOL _buildWaveform;
    BOOL _drawingAborted;
    BOOL _showInCurveEditor;
    struct PCTimer *_timer;
    struct OZAudioMixer *_audioMixer;
    double _sampleRate;
}

- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)timeDisplayRangeModifiedKeepWaveform;
- (void)timeDisplayRangeModified;
- (void)resetSelection;
- (void)resetAudioMixer;
- (_Bool)initAudioMixer;
- (void)rebuildWaveform;
- (void)postRenderInstruction:(CDStruct_1b6d18a9)arg1 lastSample:(CDStruct_1b6d18a9)arg2;
-     // Error parsing type: v24@0:8^{OZHGUserJob=^^?IiiIdQ^v*^{HGRenderQueue}^?{OZProcessControl=^^?{atomic<bool>=AB}^{PCSemaphore}^{PCMutex}q^?^{HGRenderer}}@^v}16, name: userJobCanceled:
-     // Error parsing type: v24@0:8^{OZHGUserJob=^^?IiiIdQ^v*^{HGRenderQueue}^?{OZProcessControl=^^?{atomic<bool>=AB}^{PCSemaphore}^{PCMutex}q^?^{HGRenderer}}@^v}16, name: userJobFinished:
- (void)processStereoBuffer:(char *)arg1 samples:(unsigned int)arg2;
- (void)processMonoBuffer:(char *)arg1 samples:(unsigned int)arg2;
- (void)processBuffer:(char *)arg1 samples:(unsigned int)arg2;
- (void)drawCurrentTime:(struct CGRect)arg1;
- (void)drawCurveEditor:(struct CGRect)arg1;
- (void)displayRangeModified:(CDStruct_e83c9415)arg1;
- (void)drawEndpoints;
- (void)drawWaveform:(struct CGRect)arg1;
- (void)drawChannel:(struct CGRect)arg1 withChannel:(int)arg2;
- (void)drawDividerLine:(struct CGRect)arg1;
- (void)postRedisplay2:(id)arg1;
- (void)postRedisplay;
- (CDStruct_1b6d18a9)getCurveEditorCurrentTime;
- (CDStruct_e83c9415)getCurveEditorDisplayRange;
- (CDStruct_e83c9415)getAudioEditorDisplayRange;
- (struct PCTimer *)timer;
- (void)setIndex:(unsigned int)arg1;
- (struct OZAudioTrack *)getCurrTrack;
- (unsigned int)getCurrTrackID;
- (struct OZAudioMasterTrack *)getMasterTrack;
- (unsigned int)getMasterTrackID;
- (BOOL)drawingAborted;
- (void)setShowInCurveEditor:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

