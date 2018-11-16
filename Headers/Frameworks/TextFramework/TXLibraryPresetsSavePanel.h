//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZLibraryPresetsSavePanel.h"

@interface TXLibraryPresetsSavePanel : OZLibraryPresetsSavePanel
{
    struct OZFactoryBase *_pSaveItem;
}

+ (id)getPreviewImage:(id)arg1 resolution:(double)arg2 width:(unsigned int *)arg3 height:(unsigned int *)arg4 style:(const shared_ptr_e0e110e1 *)arg5 dependentObjects:(const list_63a35edb *)arg6;
+ (shared_ptr_1a5c5a10)getPreviewBitmap:(id)arg1 resolution:(double)arg2 style:(const shared_ptr_e0e110e1 *)arg3 dependentObjects:(const list_63a35edb *)arg4;
+ (double)getResolution:(id)arg1 style:(shared_ptr_e0e110e1 *)arg2;
+ (void)openWithFactoryBase:(struct OZFactoryBase *)arg1 andPresetType:(const struct PCUUID *)arg2;
+ (struct CGSize)iconSize;
- (void)cancelNotify:(id)arg1;
- (_Bool)saveStylePreview:(const shared_ptr_e0e110e1 *)arg1 name:(id)arg2 resolution:(double)arg3 dependentObjects:(list_63a35edb *)arg4;
- (void)saveNotify:(id)arg1;
- (void)_openWithFactoryBase:(struct OZFactoryBase *)arg1 andPresetType:(const struct PCUUID *)arg2;

@end

