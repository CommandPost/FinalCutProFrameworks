//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DSObject.h"

#import "FFModelLocking.h"
#import "FFObjectCompare.h"
#import "NSCoding.h"

@class FFUndoHandler, FFUserDefaults, NSString;

@interface FFBaseDSObject : DSObject <NSCoding, FFModelLocking, FFObjectCompare>
{
    NSString *_cacheIdentifier;
    FFUserDefaults *_userDefaults;
}

+ (Class)DSClassDescriptionClass;
+ (id)copyClassDescription;
+ (id)queryAllInstances;
+ (id)queryWithPredicate:(id)arg1;
+ (id)query:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)cacheIdentifier;
- (id)project;
- (id)projectDocument;
@property(readonly, nonatomic) FFUndoHandler *undoHandler;
- (id)userDefaults;
- (void)setUserDefaults:(id)arg1;
- (id)loadUserDefaults:(BOOL)arg1;
- (id)sharedLock;
- (void)_readLock;
- (void)_readUnlock;
- (void)_writeLock;
- (void)_writeUnlock;
- (BOOL)_hasWriteLock;
- (void)property:(id)arg1 change:(id)arg2;
- (id)debugDescriptionWithIndentLevel:(unsigned int)arg1;

@end

