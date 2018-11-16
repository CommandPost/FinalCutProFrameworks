//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestAudioRender.h>

@class FFQTMovieWriter;

__attribute__((visibility("hidden")))
@interface FFDestAudioQTMovieWriter : FFDestAudioRender
{
    struct AudioStreamBasicDescription _sourceFormat;
    struct AudioStreamBasicDescription _destFormat;
    struct opaqueCMFormatDescription *_destFormatDescription;
    struct OpaqueAudioConverter *_audioConverter;
    FFQTMovieWriter *_movieWriter;
}

- (id).cxx_construct;
- (void)pushBufferHook:(struct AudioBufferList *)arg1 forTime:(CDStruct_1b6d18a9)arg2 andFrames:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithSourceFormat:(struct AudioStreamBasicDescription)arg1 destFormat:(struct AudioStreamBasicDescription)arg2 movieWriter:(id)arg3;

@end
