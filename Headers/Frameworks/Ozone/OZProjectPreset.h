//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZBasePreset.h>

@interface OZProjectPreset : OZBasePreset
{
}

- (void)applyToDocument:(struct OZDocument *)arg1;
- (void)setColorProcessing:(unsigned int)arg1;
- (unsigned int)colorProcessing;
- (void)set360ProjectMode:(int)arg1;
- (int)get360ProjectMode;
- (void)setFrameRate:(double)arg1;
- (double)frameRate;
- (void)setFieldRenderingMode:(int)arg1;
- (int)fieldRenderingMode;
- (void)setPixelAspectRatio:(double)arg1;
- (double)pixelAspectRatio;
- (void)setHeight:(int)arg1;
- (int)height;
- (void)setWidth:(int)arg1;
- (int)width;
- (id)extendedDescription;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToPreset:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithPath:(id)arg1 name:(id)arg2 tag:(id)arg3;

@end

