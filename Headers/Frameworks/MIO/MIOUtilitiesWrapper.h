//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MIOUtilitiesWrapper : NSObject
{
}

+ (void)registerComponentsAndPlugins;
+ (int)createAudioCompressionOptionsDictionary:(struct __CFAllocator *)arg1 audioStreamBasicDescription:(const struct AudioStreamBasicDescription *)arg2 audioChannelLayout:(const struct AudioChannelLayout *)arg3 aclSize:(unsigned int)arg4 converterSpecificSettings:(struct __CFArray *)arg5 magicCookieData:(const void *)arg6 magicCookieSize:(unsigned int)arg7 audioCompressionOptionsDictOut:(const struct __CFDictionary **)arg8;
+ (void)mioStartLogging;

@end

