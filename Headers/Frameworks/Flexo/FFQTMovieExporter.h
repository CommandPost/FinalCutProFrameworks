//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFQTMovieExporter : NSObject
{
}

+ (void)modalExportDialog:(id)arg1;
+ (void)modalExport:(id)arg1 toURL:(id)arg2 withRenderFormat:(id)arg3 flags:(unsigned int)arg4 application:(id)arg5 trackRoles:(id)arg6;
+ (void)modalExport:(id)arg1 toURL:(id)arg2 withCodec:(unsigned int)arg3 flags:(unsigned int)arg4 application:(id)arg5 trackRoles:(id)arg6;
+ (void)modalExport:(id)arg1 toURL:(id)arg2 withRenderFormat:(id)arg3 flags:(unsigned int)arg4 customData:(id)arg5 startFrame:(unsigned long long)arg6 endFrame:(unsigned long long)arg7 application:(id)arg8;
+ (void)modalExport:(id)arg1 toURL:(id)arg2 withCodec:(unsigned int)arg3 flags:(unsigned int)arg4 customData:(id)arg5 startFrame:(unsigned long long)arg6 endFrame:(unsigned long long)arg7 application:(id)arg8;

@end
