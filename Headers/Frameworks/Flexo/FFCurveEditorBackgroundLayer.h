//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATiledLayer.h>

@class CALayer, FFRoleColorScheme;

__attribute__((visibility("hidden")))
@interface FFCurveEditorBackgroundLayer : CATiledLayer
{
    int _state;
    FFRoleColorScheme *_colorScheme;
    CALayer *_backgroundLayer;
}

- (void)layoutSublayers;
- (void)setBackgroundState:(int)arg1 withColorScheme:(id)arg2;
- (void)dealloc;

@end

