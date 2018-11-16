//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

