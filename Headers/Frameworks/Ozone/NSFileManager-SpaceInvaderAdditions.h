//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SpaceInvaderAdditions)
- (id)modificationDateForFileAtPath:(id)arg1;
- (BOOL)trashFileAtPath:(id)arg1;
- (BOOL)isRegularFile:(id)arg1;
- (BOOL)isDirectory:(id)arg1;
- (id)resolvePath:(id)arg1;
- (BOOL)OZ_copyFileAt:(id)arg1 to:(id)arg2 overwriteExistingFile:(BOOL)arg3 error:(id *)arg4;
- (id)OZ_sizeOfItemsAtPaths:(id)arg1 error:(id *)arg2;
- (id)OZ_sizeOfItemAtPath:(id)arg1 error:(id *)arg2;
@end

