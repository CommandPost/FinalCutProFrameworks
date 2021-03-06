//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

@class FFAnchoredStackAuditioner, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFAuditionCollectionView : NSCollectionView
{
    BOOL _scrollWheelDisabled;
    NSTrackingArea *_trackingArea;
    FFAnchoredStackAuditioner *_anchoredStackAuditioner;
}

@property(nonatomic) FFAnchoredStackAuditioner *anchoredStackAuditioner; // @synthesize anchoredStackAuditioner=_anchoredStackAuditioner;
- (void)dealloc;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)arg1;
- (void)_clearScrollWheelWait;
- (void)scrollWheel:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)closeWindow;

@end

