//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFMedia, FFRenderFormat, FFRenderer, NSArray, NSDictionary, NSError, NSOperationQueue, NSString;

@interface FFSequenceSettingsExporter : NSObject
{
    FFMedia *_media;
    NSString *_toFile;
    FFRenderFormat *_format;
    unsigned int _flags;
    FFRenderer *_renderer;
    float _audioProgress;
    NSOperationQueue *_operationQueue;
    BOOL _operationStarted;
    BOOL _operationCanceled;
    BOOL _operationFinished;
    NSError *_error;
    NSDictionary *_customData;
    NSArray *_trackRoles;
    BOOL _usePlayRange;
    unsigned long long _startFrame;
    unsigned long long _endFrame;
    NSString *_appName;
}

+ (id)exporterForSequence:(id)arg1 toFile:(id)arg2 flags:(unsigned int)arg3 application:(id)arg4;
+ (id)exporterForMedia:(id)arg1 toFile:(id)arg2 withFormat:(id)arg3 flags:(unsigned int)arg4 application:(id)arg5;
- (id)initWithSequence:(id)arg1 toFile:(id)arg2 flags:(unsigned int)arg3 application:(id)arg4;
- (id)initWithMedia:(id)arg1 toFile:(id)arg2 withFormat:(id)arg3 flags:(unsigned int)arg4 application:(id)arg5;
- (void)dealloc;
- (void)setExportRangeWithStartFrame:(unsigned long long)arg1 endFrame:(unsigned long long)arg2;
- (void)start;
- (void)cancel;
- (double)progress;
- (BOOL)done;
- (void)cancelWithError:(id)arg1;
- (void)cancelWithError:(int)arg1 description:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performAudioOnlyMovieExport:(id)arg1 sampleRate:(double)arg2 durationInFrames:(long long)arg3 movieWriter:(id)arg4;
- (void)_performAudioFileExport:(id)arg1 sampleRate:(double)arg2 durationInFrames:(long long)arg3 fileNames:(id)arg4 fileFormat:(id)arg5;
- (void)_runExport;
@property(readonly) NSString *toFile; // @synthesize toFile=_toFile;
@property(readonly) FFMedia *media; // @synthesize media=_media;
@property(retain) NSArray *trackRoles; // @synthesize trackRoles=_trackRoles;
@property(retain) NSDictionary *customData; // @synthesize customData=_customData;

@end

