//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFSharedLock;

@protocol FFPlayerLockInteractions
@property(nonatomic) _Bool sufferedDataModelLockHoldoff;
- (_Bool)measureDataModelLockHoldoff;
-     // Error parsing type: ^{FFPlayerLockable={timed_mutex={mutex={_opaque_pthread_mutex_t=q[56c]}}{condition_variable={_opaque_pthread_cond_t=q[40c]}}B}{atomic<NSThread *>=A@}@}16@0:8, name: _internalPlayerLock
- (FFSharedLock *)_sharedLock;
@end
