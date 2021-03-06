//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeepSkyLite/DSObject.h>

#import <Flexo/FFCustomRelease-Protocol.h>
#import <Flexo/FFModelLock-Protocol.h>
#import <Flexo/FFModelLocking-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class FFModelDocument, NSString;

@interface FFModelObject : DSObject <NSSecureCoding, FFModelLocking, FFModelLock, FFCustomRelease>
{
}

+ (id)query:(id)arg1;
+ (id)queryWithPredicate:(id)arg1;
+ (id)queryAllInstances;
+ (void)performWithStrictUTLockChecking:(CDUnknownBlockType)arg1;
+ (int)setEnableStrictUTLockChecksToAtLeast:(int)arg1;
+ (int)setEnableStrictUTLockChecks:(int)arg1;
+ (id)copyClassDescription;
+ (Class)DSClassDescriptionClass;
+ (void)initialize;
- (BOOL)_hasWriteLock;
- (BOOL)writerIsWaiting;
- (void)_writeUnlock;
- (void)_writeLock;
- (void)_readUnlock;
- (void)_readLock;
- (id)modelLockingObject;
- (id)libraryLock;
- (id)sharedLock;
@property(readonly, nonatomic) FFModelDocument *modelDocument;
- (void)willDealloc;
- (void)willReleaseFinal;
- (void)customFinalize;
- (oneway void)release;
- (id)retain;
- (BOOL)retainWeakReference;
- (_Atomic unsigned long long *)customReleaseState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

