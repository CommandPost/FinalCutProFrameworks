//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/_FFInspectorHeaderSubController.h>

@class LKTextField, NSString;

__attribute__((visibility("hidden")))
@interface _FFInspectorProjectStorageController : _FFInspectorHeaderSubController
{
    BOOL _useMiBs;
    NSString *_storageName;
    unsigned long long _bytes;
    LKTextField *_storageField;
    LKTextField *_bytesField;
}

- (id)view;
- (void)setUseMiBs:(BOOL)arg1;
- (void)setStorageInBytes:(unsigned long long)arg1;
- (void)_updateBytesTextField;
- (void)setStorageName:(id)arg1;
- (void)_updateStorageTextField;
- (void)dealloc;

@end
