//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FFCrossFadeAudioOperation, FFFindAdjacentEdgesAlignedInTimeOperation, NSArray, NSSet;

@interface FFCrossFadeAlignedClipsOperation : NSOperation
{
    NSArray *_leadingEdges;
    NSArray *_trailingEdges;
    FFFindAdjacentEdgesAlignedInTimeOperation *_findAlignedClipsOperation;
    FFCrossFadeAudioOperation *_crossFadeAudioOperation;
    CDStruct_1b6d18a9 _crossFadeDuration;
}

@property(retain, nonatomic) FFCrossFadeAudioOperation *crossFadeAudioOperation; // @synthesize crossFadeAudioOperation=_crossFadeAudioOperation;
@property(retain, nonatomic) FFFindAdjacentEdgesAlignedInTimeOperation *findAlignedClipsOperation; // @synthesize findAlignedClipsOperation=_findAlignedClipsOperation;
@property(nonatomic) CDStruct_1b6d18a9 crossFadeDuration; // @synthesize crossFadeDuration=_crossFadeDuration;
@property(retain, nonatomic) NSArray *trailingEdges; // @synthesize trailingEdges=_trailingEdges;
@property(retain, nonatomic) NSArray *leadingEdges; // @synthesize leadingEdges=_leadingEdges;
- (id)createStorylineItemEdge;
- (void)findAlignedEdgesForAudioCrossFading;
- (void)main;
@property(nonatomic) BOOL allowNegativeTime;
@property(readonly, nonatomic) BOOL hasAlignedClips;
@property(readonly, nonatomic) BOOL hasInsufficientDuration;
@property(readonly, nonatomic) BOOL hasInsufficientHandles;
@property(readonly, nonatomic) NSSet *edgesWithInsufficientDuration;
@property(readonly, nonatomic) NSSet *edgesWithInsufficientHandles;
@property(readonly, nonatomic) NSSet *constrainedEdges;
- (void)dealloc;
- (id)init;

@end

