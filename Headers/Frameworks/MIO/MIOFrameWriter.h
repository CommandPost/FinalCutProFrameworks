//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MIOFrameWriter : NSObject
{
    NSString *_outputPath;
}

+ (id)frameWriter;
- (void)dealloc;
- (void)writeFrameToFile:(id)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 usingMovie:(id)arg3;
- (void)writeFrameToFile:(id)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 usingFormatReader:(struct OpaqueFigFormatReader *)arg3 byteStream:(struct OpaqueCMByteStream *)arg4;
- (void)writeFrameToFile:(id)arg1 usingCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@property(retain) NSString *outputPath; // @synthesize outputPath=_outputPath;

@end
