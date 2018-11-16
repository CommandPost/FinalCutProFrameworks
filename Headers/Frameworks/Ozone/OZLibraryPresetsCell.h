//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKPopUpButtonCell.h"

@class NSImage, NSString;

@interface OZLibraryPresetsCell : LKPopUpButtonCell
{
    id _pController;
    struct OZFactoryBase *_pSaveObject;
    struct OZLibraryPresetsMap *_pPresets;
    NSString *_pSaveItemText;
    NSImage *_decalImage;
    NSImage *_alternateDecalImage;
    struct PCUUID *_pPresetType;
    struct PCUUID *_pExcludeType;
    BOOL _isHUD;
}

- (id)alternateImage;
- (void)setAlternateImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (float)_extraWidthForCellHeight:(float)arg1;
- (void)menuWillPopUp:(id)arg1;
- (id)buildMenu:(const struct OZLibraryPresetsMap *)arg1;
- (struct OZLibraryPresetsMap *)getPresetsMap;
- (void)loadNotify:(id)arg1;
- (void)doDelayedLoad:(id)arg1;
- (void)saveNotify:(id)arg1;
- (void)excludeType:(const struct PCUUID *)arg1;
- (void)setPresetType:(const struct PCUUID *)arg1;
- (void)setSaveItemText:(id)arg1;
- (void)setSaveObject:(struct OZFactoryBase *)arg1;
- (void)setViewController:(id)arg1;
- (void)dealloc;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

