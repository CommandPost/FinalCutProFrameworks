//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSlider.h>

__attribute__((visibility("hidden")))
@interface FFPentaSlider : NSSlider
{
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setToolTip:(id)arg1 forCellClass:(Class)arg2;
@property double brightnessValue; // @dynamic brightnessValue;
@property double contrastValue; // @dynamic contrastValue;
@property double whiteLevelValue; // @dynamic whiteLevelValue;
@property double blackLevelValue; // @dynamic blackLevelValue;
- (id)initWithCoder:(id)arg1;

@end

