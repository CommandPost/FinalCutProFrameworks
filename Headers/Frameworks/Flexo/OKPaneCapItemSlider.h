//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/OKPaneCapItemSegmented.h>

@class LKSlider;

__attribute__((visibility("hidden")))
@interface OKPaneCapItemSlider : OKPaneCapItemSegmented
{
    LKSlider *_slider;
}

@property(retain, nonatomic) LKSlider *slider; // @synthesize slider=_slider;
- (void)refreshSegmentedControl;

@end

