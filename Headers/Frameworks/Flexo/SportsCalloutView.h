//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface SportsCalloutView : NSView
{
    BOOL m_pointUp;
    struct CGPoint m_anchorPt;
}

@property(nonatomic) struct CGPoint anchorPt; // @synthesize anchorPt=m_anchorPt;
@property(nonatomic) BOOL pointUp; // @synthesize pointUp=m_pointUp;
- (void)drawRect:(struct CGRect)arg1;
- (void)moveBelowAnchor:(struct CGPoint)arg1;
- (void)moveAboveAnchor:(struct CGPoint)arg1;
- (struct CGRect)clampedFrame:(struct CGRect)arg1;

@end

