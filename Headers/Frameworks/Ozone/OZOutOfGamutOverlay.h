//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@interface OZOutOfGamutOverlay : OZOverlay
{
    int _xOffset;
    int _yOffset;
}

- (void)setDisplayOffsetX:(int)arg1 andY:(int)arg2;
- (int)getDrawingOrder;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

