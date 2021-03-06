//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <TLKit/TLKAnchorPartLayer-Protocol.h>

@class NSString, TLKAnchorPart;

@interface TLKAnchorPartLayer : CALayer <TLKAnchorPartLayer>
{
    TLKAnchorPart *anchorPart;
}

@property(nonatomic) TLKAnchorPart *anchorPart; // @synthesize anchorPart;
- (void)invalidate;
- (void)updateAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

