//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface FFConsolidateTaskSerializer : NSObject
{
    NSMutableDictionary *_tasksToSerialize;
    NSURL *_serializedTasksURL;
}

+ (id)taskSerializerWithLibrary:(id)arg1 name:(id)arg2;
@property(copy) NSURL *serializedTasksURL; // @synthesize serializedTasksURL=_serializedTasksURL;
@property(retain) NSMutableDictionary *tasksToSerialize; // @synthesize tasksToSerialize=_tasksToSerialize;
- (void)serialize;
- (void)setClientInfo:(id)arg1 forKey:(id)arg2;
- (void)removeClientInfoForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 name:(id)arg2;

@end

