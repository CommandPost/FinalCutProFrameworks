//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DSObject.h"

#import "FFModelLocking.h"
#import "NSSecureCoding.h"

@class FFModelDocument;

@interface FFModelObject : DSObject <NSSecureCoding, FFModelLocking>
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
- (id)sharedLock;
@property(readonly, nonatomic) FFModelDocument *modelDocument;

@end

