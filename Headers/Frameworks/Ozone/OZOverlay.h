//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface OZOverlay : POOnScreenControl
{
}

- (void)willDeactivate;
- (void)didActivate;
- (void)snapEnd;
- (void)snappedTo:(const set_0cb42238 *)arg1;
- (set_0cb42238 *)snapStartWithCenters:(BOOL)arg1 andSides:(BOOL)arg2 selectedOnly:(BOOL)arg3;
- (int)getDrawingOrder;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

