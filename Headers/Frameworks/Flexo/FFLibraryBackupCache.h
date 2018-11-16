//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFLibrary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFLibraryBackupCache : NSObject
{
    NSMutableArray *_indexOfBackups;
    FFLibrary *_library;
}

+ (id)cacheForDocument:(id)arg1 key:(int)arg2;
@property(retain) FFLibrary *library; // @synthesize library=_library;
@property(retain) NSMutableArray *indexOfBackups; // @synthesize indexOfBackups=_indexOfBackups;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithLibrary:(id)arg1;
- (void)dealloc;

@end

