//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FFQTMovieExporter : NSObject
{
}

+ (void)modalExport:(id)arg1 toURL:(id)arg2 withCodec:(unsigned int)arg3 flags:(unsigned int)arg4 customData:(id)arg5 startFrame:(unsigned long long)arg6 endFrame:(unsigned long long)arg7 application:(id)arg8;
+ (void)modalExport:(id)arg1 toURL:(id)arg2 withRenderFormat:(id)arg3 flags:(unsigned int)arg4 customData:(id)arg5 startFrame:(unsigned long long)arg6 endFrame:(unsigned long long)arg7 application:(id)arg8;
+ (void)modalExport:(id)arg1 toURLs:(id)arg2 withRenderFormat:(id)arg3 flags:(unsigned int)arg4;
+ (void)modalExport:(id)arg1 toURL:(id)arg2 withRenderFormat:(id)arg3 flags:(unsigned int)arg4;
+ (void)modalExportDialog:(id)arg1;

@end

