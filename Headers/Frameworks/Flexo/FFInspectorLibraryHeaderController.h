//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorHeaderStyleContainerController.h>

@class _FFInspectorLibraryNameController, _FFInspectorProjectStorageController;

__attribute__((visibility("hidden")))
@interface FFInspectorLibraryHeaderController : FFInspectorHeaderStyleContainerController
{
    BOOL _useMiBs;
    _FFInspectorLibraryNameController *_nameController;
    _FFInspectorProjectStorageController *_storageController;
}

- (void)setStorageInBytes:(unsigned long long)arg1;
- (void)setStorageName:(id)arg1;
- (void)setLibraryColorProcessingMode:(int)arg1;
- (void)setLibraryName:(id)arg1;
@property BOOL useMiBs; // @dynamic useMiBs;
- (void)dealloc;
- (id)init;

@end

