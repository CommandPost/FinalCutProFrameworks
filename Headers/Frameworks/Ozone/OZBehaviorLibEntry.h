//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZLibraryEntry.h>

@interface OZBehaviorLibEntry : OZLibraryEntry
{
}

+ (void)buildTreeWithRoot:(id)arg1;
- (int)getPreviewType;
- (id)getDescriptionLine5;
- (id)getDescriptionLine4;
- (id)getDescriptionLine3;
- (id)getDescriptionLine2;
- (id)getDescriptionLine1;
- (id)getDescriptionLine:(unsigned int)arg1;
- (id)getPreviewName;
- (id)getSmallPreviewIconForEntry:(BOOL)arg1;
- (id)getIconForEntry:(struct CGSize)arg1 retainIt:(char *)arg2 forController:(id)arg3;
- (BOOL)getPasteEntries:(struct OZPasteList *)arg1;
- (BOOL)shouldBeArchived;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 factory:(struct OZFactory *)arg3;

@end

