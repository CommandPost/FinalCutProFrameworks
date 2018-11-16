//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKRoundedSideLayer.h>

#import "TLKItemLayerInfo.h"

@class NSDictionary;

@interface TLKItemContentsLayer : TLKRoundedSideLayer <TLKItemLayerInfo>
{
    NSDictionary *_userInfoDictionary;
    struct CGRect _visibleBounds;
    struct CGRect _audioLayerFrame;
    struct CGRect _videoLayerFrame;
    double _leadingEdgeInset;
    double _trailingEdgeInset;
    unsigned int _splitEdit:1;
    unsigned int _timelineZooming:1;
}

- (id)init;
- (void)dealloc;
- (void)setSplitEdit:(BOOL)arg1;
@property(readonly) BOOL splitEdit;
- (void)setVisibleBounds:(struct CGRect)arg1;
@property(readonly) struct CGRect visibleBounds;
- (void)setAudioLayerFrame:(struct CGRect)arg1;
@property(readonly) struct CGRect audioLayerFrame;
- (void)setVideoLayerFrame:(struct CGRect)arg1;
@property(readonly) struct CGRect videoLayerFrame;
- (void)setLeadingEdgeInset:(double)arg1;
@property(readonly) double leadingEdgeInset;
- (void)setTrailingEdgeInset:(double)arg1;
@property(readonly) double trailingEdgeInset;
- (void)setTimelineZooming:(BOOL)arg1;
@property(readonly) BOOL timelineZooming;
- (void)setDelegate:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
@property(retain) NSDictionary *userInfoDictionary; // @synthesize userInfoDictionary=_userInfoDictionary;

@end

