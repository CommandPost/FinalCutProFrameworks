//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface MIORADAudioBuffer : NSObject
{
    char *_dataPointer;
    struct opaqueCMSampleBuffer *_audioSampleBuffer;
    struct AudioBufferList *_abl;
    struct OpaqueCMBlockBuffer *_ablBlockBuffer;
    NSData *_aspd;
    NSData *_masterasbd;
    NSData *_masterabl;
    NSData *_masteracl;
}

- (char *)dataPointer;
- (void)setAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setAudioBufferList:(struct AudioBufferList *)arg1;
- (void)setAudioBufferListBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1;
- (void)setAudioStreamPacketDescription:(id)arg1;
- (void)setMasterAudioBufferList:(id)arg1;
- (void)setMasterAudioStreamBasicDescription:(id)arg1;
- (void)setMasterAudioChannelLayout:(id)arg1;
- (void)dealloc;

@end
