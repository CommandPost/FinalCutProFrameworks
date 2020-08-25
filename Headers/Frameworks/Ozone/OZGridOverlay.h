//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

#import "POOnScreenControlMetalRendering.h"

@class NSMutableArray, NSString;

@interface OZGridOverlay : OZOverlay <POOnScreenControlMetalRendering>
{
    NSMutableArray *_verticalLines;
    NSMutableArray *_horizontalLines;
}

- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldDraw;
- (set_0cb42238 *)snapStartWithCenters:(BOOL)arg1 andSides:(BOOL)arg2 selectedOnly:(BOOL)arg3;
- (int)hitCheck:(id)arg1;
- (int)getDrawingOrder;
- (void)draw;
- (id)horizontalLineAtIndex:(unsigned long long)arg1 start:(const PCVector2_79efa81a *)arg2 end:(const PCVector2_79efa81a *)arg3 width:(double)arg4 color: /* Error: Ran out of types for this method. */;
- (id)verticalLineAtIndex:(unsigned long long)arg1 start:(const PCVector2_79efa81a *)arg2 end:(const PCVector2_79efa81a *)arg3 width:(double)arg4 color: /* Error: Ran out of types for this method. */;
- (id)lineAtIndex:(unsigned long long)arg1 inCollection:(id)arg2 start:(const PCVector2_79efa81a *)arg3 end:(const PCVector2_79efa81a *)arg4 width:(double)arg5 color: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

