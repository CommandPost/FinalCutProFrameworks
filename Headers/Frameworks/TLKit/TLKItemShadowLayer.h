//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface TLKItemShadowLayer : CALayer
{
    CALayer *_backgroundLayer;
    unsigned int _audioComponent:1;
    unsigned int _roundedBottomAudioComponent:1;
}

@property BOOL audioComponent;
@property BOOL roundedBottomAudioComponent;
- (void)setCornerRadius:(double)arg1;
- (void)updateAppearanceType:(int)arg1 withMask:(int)arg2 split:(BOOL)arg3 sourceSplit:(BOOL)arg4;
- (id)init;

@end

