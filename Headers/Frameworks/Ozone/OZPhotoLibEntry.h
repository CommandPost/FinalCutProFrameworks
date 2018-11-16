//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZFileSystemLibEntry.h>

@class MLMediaObject, NSString;

@interface OZPhotoLibEntry : OZFileSystemLibEntry
{
    NSString *_thumbnailPath;
    MLMediaObject *_mediaObject;
}

+ (id)libraryEntryFromMediaGroup:(id)arg1;
+ (id)mediaSourceFromMediaLibrary:(id)arg1;
+ (id)mediaLibrary;
+ (BOOL)validateTree:(id)arg1;
+ (id)buildTree:(id)arg1;
@property(retain) MLMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (BOOL)shouldBeArchived;
- (id)getThumbnailPath;
- (id)getAbsolutePath:(BOOL)arg1 rootFlags:(unsigned int)arg2;
- (id)getSmallPreviewIconForEntry:(BOOL)arg1;
- (id)getIconForEntry:(struct CGSize)arg1 retainIt:(char *)arg2 forController:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

