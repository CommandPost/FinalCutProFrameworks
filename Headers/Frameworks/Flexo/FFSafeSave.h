//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface FFSafeSave : NSObject
{
    NSURL *_destFileURL;
    NSURL *_tmpFileURL;
    NSURL *_tmpDirURL;
    BOOL _needToDeleteDestination;
}

+ (BOOL)writeSafelyToURL:(id)arg1 allowOverwrite:(BOOL)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (BOOL)atomicallyCreateFileAtURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSURL *temporaryURL; // @synthesize temporaryURL=_tmpFileURL;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destFileURL;
- (void)dealloc;
- (void)cleanupTempFiles;
- (BOOL)commit:(BOOL)arg1 error:(id *)arg2;
- (id)initTo:(id)arg1 override:(BOOL)arg2 error:(id *)arg3;

@end

