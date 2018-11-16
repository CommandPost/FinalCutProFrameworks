//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class FFColorSlider, FFPentaSlider;

@interface FFColorView : NSProView
{
    FFColorSlider *_saturationSlider;
    FFColorSlider *_tintSlider;
    FFPentaSlider *_lumaSlider;
}

@property(retain, nonatomic) FFPentaSlider *lumaSlider; // @synthesize lumaSlider=_lumaSlider;
@property(retain, nonatomic) FFColorSlider *tintSlider; // @synthesize tintSlider=_tintSlider;
@property(retain, nonatomic) FFColorSlider *saturationSlider; // @synthesize saturationSlider=_saturationSlider;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;

@end

