//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@interface OZCameraOverlay : OZOverlay
{
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (int)getDrawingOrder;
- (BOOL)is3DOSC;
- (void)dealloc;
- (void)getAllCameraNodes:(vector_e037a3dd *)arg1 forScene:(struct OZScene *)arg2;
- (void)draw;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;

@end

