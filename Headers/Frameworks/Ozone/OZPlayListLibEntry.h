//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZDeferredLoadLibEntry.h>

@interface OZPlayListLibEntry : OZDeferredLoadLibEntry
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

