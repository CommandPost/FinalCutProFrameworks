//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSlider.h"

__attribute__((visibility("hidden")))
@interface FFDoubleClickableSlider : LKSlider
{
    double _defaultValue;
    BOOL _hasSetDefaultValue;
}

- (void)setDefaultValue:(double)arg1;
- (double)defaultValue;
- (void)_sliderTouched:(BOOL)arg1;
- (void)mouseDown:(id)arg1;

@end
