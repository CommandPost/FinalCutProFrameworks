//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TLKLayoutGraph : NSObject
{
    NSMapTable *_nodesMap;
}

@property(retain, nonatomic) NSMapTable *nodesMap; // @synthesize nodesMap=_nodesMap;
- (void)_breakRetainCyclesForLayoutGraphNode:(id)arg1;
- (void)unregisterLayoutGraphNode:(id)arg1;
- (void)registerLayoutGraphNode:(id)arg1;
- (id)layoutGraphNodeForObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

