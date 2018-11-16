//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Pathname)
- (id)iMovieStringByExpandingMoviesTildeInPath;
- (id)externalHardDriveOrDiskImagePath;
- (id)lsStringByDeletingPathExtension;
- (id)lsPathExtension;
- (id)parentPathComponent;
- (id)pathRelativeToComponent:(id)arg1;
- (id)stringWithLastComponents:(unsigned int)arg1;
- (BOOL)hasExtension:(id)arg1;
- (BOOL)isFilePath:(char *)arg1 isFolder:(char *)arg2 isVisible:(char *)arg3;
- (BOOL)createItemInfoRecord:(struct LSItemInfoRecord *)arg1;
- (id)stringByChangingFileNameTo:(id)arg1;
- (id)stringByReplacingPathComponent:(id)arg1 with:(id)arg2;
- (id)stringByRemovingPathComponent:(id)arg1;
- (id)stringByChangingLastComponentTo:(id)arg1;
- (id)stringByChangingPathExtensionTo:(id)arg1;
- (id)uniquePathWithExtension:(id)arg1;
- (id)uniquePathAndThumbnail;
- (id)uniquePath;
- (id)pathDifference:(id)arg1;
- (id)commonPath:(id)arg1;
@end
