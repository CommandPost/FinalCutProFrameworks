//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TLKPartInfo.h"

@interface TLKInOutRangeMarker : CALayer <TLKPartInfo>
{
    CALayer *_head;
    CALayer *_body;
    long long _markerState;
    BOOL _isInMarker;
}

- (void)_updateMarker;
- (id)init;
- (struct CGRect)markerFrame;
- (void)layoutSublayers;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
@property BOOL isInMarker;
@property long long markerState;

@end

