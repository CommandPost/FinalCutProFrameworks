//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@interface OZSmartGuidesOverlay : OZOverlay
{
    set_50872599 *_drawSnaps;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (int)getDrawingOrder;
- (void)draw;
- (set_50872599 *)snapStartWithCenters:(BOOL)arg1 andSides:(BOOL)arg2 selectedOnly:(BOOL)arg3;
- (void)snappedTo:(const set_50872599 *)arg1;
- (void)snapEnd;

@end

