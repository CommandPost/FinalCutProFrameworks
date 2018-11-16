//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"

@class FFAnchoredObject, FFAudioLoudnessData, NSLock;

__attribute__((visibility("hidden")))
@interface FFLoudnessAnalyzer : NSObject <FFBackgroundTaskTarget>
{
    FFAnchoredObject *_anchoredObject;
    id <FFLoudnessAnalyzerDelegate> _delegate;
    BOOL _analysisRunning;
    BOOL _analysisCanceled;
    BOOL _analysisCompleted;
    FFAudioLoudnessData *_loudnessData;
    NSLock *_loudnessDataLock;
}

@property(readonly, nonatomic) BOOL analysisCompleted; // @synthesize analysisCompleted=_analysisCompleted;
@property(readonly, nonatomic) BOOL analysisCanceled; // @synthesize analysisCanceled=_analysisCanceled;
@property(readonly, nonatomic) BOOL analysisRunning; // @synthesize analysisRunning=_analysisRunning;
@property(readonly, nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObject;
- (id)librariesInUse;
- (id)assetsInUse;
- (void)_analyzeLoudness:(id)arg1 onTask:(id)arg2;
@property(readonly, nonatomic) FFAudioLoudnessData *loudnessData;
- (void)startAnalysis;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1 delegate:(id)arg2;

@end

