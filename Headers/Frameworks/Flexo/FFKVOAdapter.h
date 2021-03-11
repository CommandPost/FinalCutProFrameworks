//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FFKVOAdapter : NSObject
{
    struct FFKVOAdapterClient *mObserverClient;
    NSObject *mObservedObject;
    NSArray *mKeyPaths;
    BOOL mDeferToMainThread;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_notifyClientOfObservation:(id)arg1;
- (void)clearClient;
- (void)dealloc;
- (id)initObserving:(id)arg1 client:(struct FFKVOAdapterClient *)arg2 keyPath:(id)arg3 deferToMainThread:(BOOL)arg4;
- (id)initObserving:(id)arg1 client:(struct FFKVOAdapterClient *)arg2 keyPaths:(id)arg3 deferToMainThread:(BOOL)arg4;

@end

