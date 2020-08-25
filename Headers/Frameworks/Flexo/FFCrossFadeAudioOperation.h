//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSMutableSet;

@interface FFCrossFadeAudioOperation : NSOperation
{
    BOOL _allowNegativeTime;
    NSArray *_leadingEdges;
    NSArray *_trailingEdges;
    NSMutableSet *_constrainedEdges;
    NSMutableSet *_edgesWithInsufficientHandles;
    NSMutableSet *_edgesWithInsufficientDuration;
    CDStruct_1b6d18a9 _crossFadeDuration;
    CDStruct_1b6d18a9 _crossFadeTrimDuration;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 crossFadeTrimDuration; // @synthesize crossFadeTrimDuration=_crossFadeTrimDuration;
@property(nonatomic) BOOL allowNegativeTime; // @synthesize allowNegativeTime=_allowNegativeTime;
@property(nonatomic) CDStruct_1b6d18a9 crossFadeDuration; // @synthesize crossFadeDuration=_crossFadeDuration;
@property(retain, nonatomic) NSMutableSet *edgesWithInsufficientDuration; // @synthesize edgesWithInsufficientDuration=_edgesWithInsufficientDuration;
@property(retain, nonatomic) NSMutableSet *edgesWithInsufficientHandles; // @synthesize edgesWithInsufficientHandles=_edgesWithInsufficientHandles;
@property(retain, nonatomic) NSMutableSet *constrainedEdges; // @synthesize constrainedEdges=_constrainedEdges;
@property(retain, nonatomic) NSArray *trailingEdges; // @synthesize trailingEdges=_trailingEdges;
@property(retain, nonatomic) NSArray *leadingEdges; // @synthesize leadingEdges=_leadingEdges;
- (BOOL)hasSufficientDurationForItem:(id)arg1;
- (BOOL)hasSufficientEndHandleForItem:(id)arg1;
- (BOOL)hasSufficientStartHandleForItem:(id)arg1;
- (void)addEdgeWithInsufficientDuration:(id)arg1;
- (void)addEdgeWithInsufficientHandle:(id)arg1;
- (void)addConstrainedEdge:(id)arg1;
- (void)main;
- (void)dealloc;

@end

