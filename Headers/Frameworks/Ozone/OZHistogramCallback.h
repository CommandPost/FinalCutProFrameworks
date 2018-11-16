//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OZHistogramView;

@interface OZHistogramCallback : NSObject
{
    shared_ptr_0279a08d *_bitmap;
    struct CGSize _size;
    int _width;
    int _height;
    OZHistogramView *_histView;
}

- (id).cxx_construct;
- (id)histogramView;
- (int)height;
- (int)width;
- (struct CGSize)size;
- (struct PCBitmap *)bitmap;
- (void)setHistogramView:(id)arg1;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setBitmap:(const shared_ptr_0279a08d *)arg1;
- (void)dealloc;

@end

