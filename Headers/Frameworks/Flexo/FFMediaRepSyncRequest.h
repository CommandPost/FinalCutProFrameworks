//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFDirectory, NSArray, NSDictionary, NSError, NSMapTable, NSURL;

__attribute__((visibility("hidden")))
@interface FFMediaRepSyncRequest : NSObject
{
    NSMapTable *_mediaReps;
    FFDirectory *_mediaDir;
    NSURL *_dirURL;
    NSArray *_dirURLs;
    NSDictionary *_changes;
    NSError *_error;
}

- (id)initWithMediaReps:(id)arg1 directoryURL:(id)arg2;
- (void)dealloc;
- (void)setError:(id)arg1 force:(BOOL)arg2;
- (id)mediaDirectory;
- (id)mediaRepForKey:(id)arg1;
- (id)errorsByKey;
- (id)errorForKey:(id)arg1;
- (id)keysModified;
- (id)keysMissing;
- (id)keysInserted;
- (id)_readMediaURLs:(id)arg1 error:(id *)arg2;
- (id)_syncMediaRepsByFileName:(id)arg1 URLs:(id)arg2 error:(id *)arg3;
- (BOOL)execute:(id *)arg1;

@end
