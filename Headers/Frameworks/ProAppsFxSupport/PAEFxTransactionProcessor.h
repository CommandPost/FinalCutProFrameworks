//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAEFxTransactionProcessor : NSObject
{
    struct PCMutex _incomingTransactionLock;
    struct PCMutex _outgoingTransactionLock;
    struct __CFRunLoopObserver *_observerRef;
    unsigned long long _nextTransactionID;
    map_9151994f _registeredPlugins;
    vector_17e0fc00 _outgoingTransactions;
    map_8bb409b5 _transactionSemaphoreMap;
    queue_a1617091 _incomingTransactions;
}

+ (void)destroySharedTransactionProcessor;
+ (id)sharedTransactionProcessor;
- (id).cxx_construct;
- (void).cxx_destruct;
@property map_8bb409b5 transactionSemaphoreMap; // @synthesize transactionSemaphoreMap=_transactionSemaphoreMap;
@property vector_17e0fc00 outgoingTransactions; // @synthesize outgoingTransactions=_outgoingTransactions;
@property queue_a1617091 incomingTransactions; // @synthesize incomingTransactions=_incomingTransactions;
@property unsigned long long nextTransactionID; // @synthesize nextTransactionID=_nextTransactionID;
@property map_9151994f registeredPlugins; // @synthesize registeredPlugins=_registeredPlugins;
@property struct __CFRunLoopObserver *observerRef; // @synthesize observerRef=_observerRef;
- (id)nextOutgoingTransactionOfType:(int)arg1 withID:(unsigned long long)arg2 forPlugin:(id)arg3;
- (void)addOutgoingTransaction:(id)arg1;
- (void)releaseTransactionSemaphore:(unsigned long long)arg1;
- (void)signalTransactionSemaphore:(unsigned long long)arg1;
- (void)flushAllIncomingOSCTransactions;
- (void)flushIncomingTransactionsWithID:(unsigned long long)arg1;
- (id)addIncomingTransaction:(id)arg1;
- (BOOL)processPendingTransactionsUntilEndForTransactionID:(unsigned long long)arg1 pluginUUID:(id)arg2 sessionID:(long long)arg3;
- (void)processPendingTransactions;
- (void)processPendingTransactionsForUUID:(id)arg1 sessionID:(long long)arg2;
- (void)processOSCTransaction:(id)arg1 forPlugin:(id)arg2;
- (void)processKeyframeTransaction:(id)arg1 forPlugin:(id)arg2;
- (void)processParameterTransaction:(id)arg1 forPlugin:(id)arg2;
- (id)nextIncomingTransactionWithID:(unsigned long long)arg1;
- (id)nextIncomingTransaction;
- (id)nextIncomingTransactionIfNonNullID;
- (unsigned long long)getNextTransactionID;
- (void)unregisterPlugin:(id)arg1 forUUID:(id)arg2 withSessionID:(unsigned long long)arg3;
- (void)registerPlugin:(id)arg1 forUUID:(id)arg2 withSessionID:(unsigned long long)arg3;
- (id)init;

@end

