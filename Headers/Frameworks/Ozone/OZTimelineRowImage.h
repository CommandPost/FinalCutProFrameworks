//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZTimelineRow.h>

@interface OZTimelineRowImage : OZTimelineRow
{
}

- (void)drawMidground:(const struct OZTimelineBar *)arg1 clipRect:(struct CGRect)arg2 barRect:(struct CGRect)arg3 pixelsPerSecond:(double)arg4 secondsPerPixel:(CDStruct_1b6d18a9)arg5;
- (void)drawImage:(const struct OZChannelObjectRoot *)arg1 andName:(id)arg2 color:(int)arg3 selected:(BOOL)arg4 clipRect:(struct CGRect)arg5 barRect:(struct CGRect)arg6 secondsPerPixel:(CDStruct_1b6d18a9)arg7 isGroup:(BOOL)arg8;
- (void)imageReady:(unsigned int)arg1;

@end

