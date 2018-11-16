//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZLibraryPresetsCell.h"

@class NSMutableArray, NSMutableDictionary;

@interface TXLibraryPresetsCell : OZLibraryPresetsCell
{
    struct OZFactoryBase *_pSaveItem;
    NSMutableArray *_pMenuItems;
    NSMutableDictionary *_pTagToNameDict;
}

- (id)nameForTag:(long long)arg1;
- (id)normalPresetItem;
- (id)buildMenu:(const struct OZLibraryPresetsMap *)arg1 isRoot:(BOOL)arg2;
- (id)cacheAtPath:(id)arg1;
- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)menuWillPopUp:(id)arg1;
- (void)saveNotify:(id)arg1;
- (void)dealloc;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

