//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MIORADPathPack : NSObject
{
    NSMutableArray *mRecognizers;
    NSString *mName;
    NSString *mPath;
    BOOL mIsCustom;
    int mPluginCount;
    BOOL mMountSynchronously;
    BOOL mCancelMount;
}

+ (id)pathPackWithName:(id)arg1 path:(id)arg2 isCustom:(BOOL)arg3;
- (id)initWithName:(id)arg1 path:(id)arg2 isCustom:(BOOL)arg3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL cancelMount; // @synthesize cancelMount=mCancelMount;
@property(nonatomic) BOOL mountSynchronously; // @synthesize mountSynchronously=mMountSynchronously;
@property(nonatomic) int pluginCount; // @synthesize pluginCount=mPluginCount;
@property(nonatomic) BOOL isCustom; // @synthesize isCustom=mIsCustom;
@property(copy) NSString *path; // @synthesize path=mPath;
@property(copy) NSString *name; // @synthesize name=mName;
@property(retain) NSMutableArray *recognizers; // @synthesize recognizers=mRecognizers;

@end

