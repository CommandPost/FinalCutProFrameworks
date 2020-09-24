//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFMD5Reader : NSObject
{
}

+ (id)computeMediaMD5With:(id)arg1 videoFormatName:(id)arg2 videoProps:(id)arg3 audioSourceCount:(unsigned long long)arg4 audioChannelCount:(unsigned long long)arg5 audioSampleRate:(double)arg6 mediaRange:(CDStruct_e83c9415)arg7;
+ (id)fileMD5StringForURL:(id)arg1 baseFilename:(id)arg2 isOffline:(char *)arg3;
+ (BOOL)readMD5PropertiesForURL:(id)arg1 sampleSize:(unsigned int)arg2 sampleBuffer:(char *)arg3 fileSize:(long long *)arg4;

@end
