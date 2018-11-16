//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFSharedAudioUnitPoolFormatKey : NSObject
{
    double _sampleRate;
    unsigned int _numChannels;
}

@property(readonly, nonatomic) unsigned int numChannels; // @synthesize numChannels=_numChannels;
@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2;

@end

