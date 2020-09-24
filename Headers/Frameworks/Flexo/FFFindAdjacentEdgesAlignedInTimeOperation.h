//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSMutableArray, NSMutableSet;

@interface FFFindAdjacentEdgesAlignedInTimeOperation : NSOperation
{
    NSMutableArray *_edges;
    NSMutableSet *_alignedEdges;
}

@property(retain, nonatomic) NSMutableSet *alignedEdges; // @synthesize alignedEdges=_alignedEdges;
- (void)sortEdgesByTime;
- (BOOL)edge:(id)arg1 isAdjacentToEdge:(id)arg2;
- (void)addAlignedEdge:(id)arg1;
- (void)main;
@property(copy, nonatomic) NSArray *edges;
- (void)dealloc;

@end
