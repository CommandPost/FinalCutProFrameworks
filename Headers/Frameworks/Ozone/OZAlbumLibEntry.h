//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZDeferredLoadLibEntry.h>

@interface OZAlbumLibEntry : OZDeferredLoadLibEntry
{
}

- (id)getDescendant:(unsigned int)arg1 withFilter:(id)arg2;
- (unsigned int)numberOfDescendants:(id)arg1;
- (BOOL)hasDescendants:(id)arg1;
- (long long)compareDisplayName:(id)arg1;
- (BOOL)shouldBeArchived;
- (id)getSmallPreviewIconForEntry:(BOOL)arg1;
- (id)getIconForEntry:(struct CGSize)arg1 retainIt:(char *)arg2 forController:(id)arg3;
- (void)loadMediaObjects;
- (BOOL)representsAllItemsLibraryEntry;

@end

