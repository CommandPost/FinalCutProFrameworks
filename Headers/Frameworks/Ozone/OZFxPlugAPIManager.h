//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PROAPIAccessing.h"

@class NSMutableDictionary, NSString;

@interface OZFxPlugAPIManager : NSObject <PROAPIAccessing>
{
    NSMutableDictionary *_apis;
    struct PCRecursiveMutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)apiForProtocol:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

