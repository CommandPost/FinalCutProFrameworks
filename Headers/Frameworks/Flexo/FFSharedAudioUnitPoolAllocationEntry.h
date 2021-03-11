//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFSharedAudioUnitPoolFormatKey;

__attribute__((visibility("hidden")))
@interface FFSharedAudioUnitPoolAllocationEntry : NSObject
{
    unsigned int _numInstances;
    FFSharedAudioUnitPoolFormatKey *_formatKey;
}

@property(readonly, nonatomic) FFSharedAudioUnitPoolFormatKey *formatKey; // @synthesize formatKey=_formatKey;
@property(readonly, nonatomic) unsigned int numInstances; // @synthesize numInstances=_numInstances;
- (void)dealloc;
- (id)initWithNumInstances:(unsigned int)arg1 sampleRate:(double)arg2 numChannels:(unsigned int)arg3;

@end

