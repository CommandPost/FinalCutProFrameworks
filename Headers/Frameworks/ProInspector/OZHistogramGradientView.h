//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBitmapImageRep, NSImage;

@interface OZHistogramGradientView : NSView
{
    NSImage *_pGradientImage;
    NSBitmapImageRep *_pGradientRep;
    BOOL _gradientOutOfDate;
}

- (void)allocateImage:(struct CGSize)arg1;
- (void)updateImage:(struct CGSize)arg1;
- (void)update;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

