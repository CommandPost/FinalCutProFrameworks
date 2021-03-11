//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKImageLayer.h>

#import <TLKit/CALayerDelegate-Protocol.h>

@class NSImage, NSString;

@interface TLKBumperBackgroundLayer : TLKImageLayer <CALayerDelegate>
{
    NSImage *_backgroundImage;
    TLKImageLayer *_shadowLayer;
    BOOL _drawsBackground;
}

- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

