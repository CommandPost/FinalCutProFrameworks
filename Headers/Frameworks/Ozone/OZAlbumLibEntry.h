//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZLibraryEntry.h>

@interface OZAlbumLibEntry : OZLibraryEntry
{
    int _albumType;
}

- (id)getDescendant:(unsigned int)arg1 withFilter:(id)arg2;
- (unsigned int)numberOfDescendants:(id)arg1;
- (BOOL)hasDescendants:(id)arg1;
- (long long)compareDisplayName:(id)arg1;
- (BOOL)shouldBeArchived;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getSmallPreviewIconForEntry:(BOOL)arg1;
- (id)getIconForEntry:(struct CGSize)arg1 retainIt:(char *)arg2 forController:(id)arg3;
- (id)initWithParent:(id)arg1 name:(id)arg2 albumType:(int)arg3;

@end

