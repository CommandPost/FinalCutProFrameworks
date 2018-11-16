//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIORADManager, NSConditionLock, NSMutableArray, NSUndoManager;

__attribute__((visibility("hidden")))
@interface PluginLockPair : MIOObject
{
    id <MIORADPlugin><NSObject> _plugin;
    NSConditionLock *_lock;
    NSMutableArray *_pathArray;
    BOOL _done;
    NSUndoManager *_undoManager;
    MIORADManager *_radManager;
}

@property MIORADManager *radManager; // @synthesize radManager=_radManager;
@property NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property BOOL done; // @synthesize done=_done;
@property(readonly, retain) NSMutableArray *pathArray; // @synthesize pathArray=_pathArray;
@property(readonly, retain) NSConditionLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id <MIORADPlugin><NSObject> plugin; // @synthesize plugin=_plugin;
- (id)volumeWithPath:(id)arg1 error:(id *)arg2;
- (id)createVolumeForPath:(id)arg1 error:(id *)arg2;
- (void)scanPaths;
- (BOOL)mountPath:(id)arg1;
- (void)addPath:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithPlugin:(id)arg1 andUndoManager:(id)arg2 radManager:(id)arg3;

@end

