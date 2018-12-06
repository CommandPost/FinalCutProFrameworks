//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSource.h>

@interface FFSourceAudio : FFSource
{
}

+ (Class)streamClass;
- (id)type;
- (id)newStream:(id)arg1 options:(id)arg2;
- (id)newStreamForRender;
- (id)newStreamForRenderWithOptions:(id)arg1;
- (unsigned int)numberOfChannels;
- (CDStruct_1b6d18a9)nativeSampleDuration;
- (double)sampleRate;
- (id)audioFormatString;
- (struct AudioStreamBasicDescription)formatInfo;
- (BOOL)hasStartInFrames;
- (BOOL)hasEndInFrames;
- (BOOL)hasDurationInFrames;
- (long long)startInFrames;
- (long long)endInFrames;
- (long long)durationInFrames;
- (long long)timeInFrames:(CDStruct_1b6d18a9)arg1 roundingMethod:(unsigned int)arg2;
- (id)audioChannelLayout;

@end

