//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface TLKRoundedSideLayer : CALayer
{
    int _roundedDirection;
    double _radius;
    unsigned int _ignoresHitTesting:1;
}

@property BOOL ignoresHitTesting;
@property int roundedDirection;
- (void)setDelegate:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)init;

@end

