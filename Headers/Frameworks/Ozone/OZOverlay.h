//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

@interface OZOverlay : POOnScreenControl
{
}

- (void)willDeactivate;
- (void)didActivate;
- (void)snapEnd;
- (void)snappedTo:(const set_b780a99c *)arg1;
- (set_b780a99c *)snapStartWithCenters:(BOOL)arg1 andSides:(BOOL)arg2 selectedOnly:(BOOL)arg3;
- (int)getDrawingOrder;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

