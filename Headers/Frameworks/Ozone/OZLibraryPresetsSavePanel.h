//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKPanel, LKTextField;

@interface OZLibraryPresetsSavePanel : NSObject
{
    LKTextField *_pNameField;
    LKPanel *_pPanel;
    struct OZFactoryBase *_pFactoryBase;
    struct PCUUID *_presetType;
}

+ (void)openWithFactoryBase:(struct OZFactoryBase *)arg1 andPresetType:(const struct PCUUID *)arg2;
- (void)_openWithFactoryBase:(struct OZFactoryBase *)arg1 andPresetType:(const struct PCUUID *)arg2;
- (void)dealloc;
- (void)saveNotify:(id)arg1;
- (void)cancelNotify:(id)arg1;

@end

