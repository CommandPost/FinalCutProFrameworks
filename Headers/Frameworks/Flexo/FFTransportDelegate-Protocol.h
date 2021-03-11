//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@protocol FFTransportDelegate <NSObject>
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setRate:(double)arg1;

@optional
- (void)doReject;
- (void)doFavorite;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (BOOL)isVoiceOverActive;
- (void)toggleVoiceOver;
- (void)playSelected;
- (void)playNext;
- (void)playPrevious;
- (BOOL)canPlaySelected;
- (BOOL)canPlayNext;
- (BOOL)canPlayPrevious;
- (BOOL)canShowControls;
@end

