//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PEParentMeterLayer.h"

#import "CALayerDelegate-Protocol.h"

@class NSString, PEAudioLayeredMeterView;

@interface PERecorderParentLayer : PEParentMeterLayer <CALayerDelegate>
{
}

- (float)positionFromDBValue:(float)arg1;
- (void)layoutSublayers;
- (void)layoutDBlines;
- (void)layoutDB;
- (void)layoutIndicators;
- (void)layoutMeters;
- (double)widthOfEachMeter;
- (double)widthOfMeterArea;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak PEAudioLayeredMeterView *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

