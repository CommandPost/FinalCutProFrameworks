//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BlockedPlugin : NSObject
{
    NSString *_bundleName;
    NSString *_plugName;
    NSString *_plugVersion;
}

@property(readonly) NSString *plugVersion; // @synthesize plugVersion=_plugVersion;
@property(readonly) NSString *plugName; // @synthesize plugName=_plugName;
@property(readonly) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void)dealloc;
- (id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3;

@end

