//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAudioUnitEffect.h>

@class FFAudioPreprocessor, FFBackgroundTask, NSString, NSURL;

@interface FFAudioUnitAnalyzingEffect : FFAudioUnitEffect
{
    NSString *_processingState;
    NSURL *_renderfileURL;
    FFBackgroundTask *_backgroundTask;
    double _results;
    CDStruct_1b6d18a9 _startTimecode;
    FFAudioPreprocessor *_processor;
}

+ (id)copyClassDescription;
@property(retain, nonatomic) FFAudioPreprocessor *processor; // @synthesize processor=_processor;
@property(nonatomic) CDStruct_1b6d18a9 startTimecode; // @synthesize startTimecode=_startTimecode;
@property(nonatomic) double results; // @synthesize results=_results;
@property(retain, nonatomic) FFBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) NSURL *renderfileURL; // @synthesize renderfileURL=_renderfileURL;
@property(retain, nonatomic) NSString *processingState; // @synthesize processingState=_processingState;
- (id).cxx_construct;
- (void)channelParameterChanged:(id)arg1;
- (id)_savedEffect;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

