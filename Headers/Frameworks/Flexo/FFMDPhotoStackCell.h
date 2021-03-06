//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMDPhotoGroupCell.h>

@class FFMDPhotoStackBackgroundLayer, NSImage;

__attribute__((visibility("hidden")))
@interface FFMDPhotoStackCell : FFMDPhotoGroupCell
{
    FFMDPhotoStackBackgroundLayer *_backgroundLayer;
    NSImage *_backgroundImage;
}

- (id)_backgroundImageWithRect:(struct CGRect)arg1 getImageRect:(struct CGRect *)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

