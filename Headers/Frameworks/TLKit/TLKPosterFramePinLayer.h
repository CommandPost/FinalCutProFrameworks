//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TLKPartInfo.h"

@class CATextLayer;

@interface TLKPosterFramePinLayer : CALayer <TLKPartInfo>
{
    id <TLKPosterFrameInfoProtocol> _representedObject;
    CALayer *_rootLayer;
    CALayer *_defaultLayer;
    CALayer *_manualLayer;
    CALayer *_pinDefaultTopLayer;
    CALayer *_pinDefaultTailLayer;
    CALayer *_pinManualTopLayer;
    CALayer *_pinManualTailLayer;
    CATextLayer *_textLayer;
}

+ (struct CGSize)posterPinHeadSize;
+ (struct CGSize)posterPinSize;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)partIdentifier;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutSublayers;
- (void)setContentsScale:(double)arg1;
@property id <TLKPosterFrameInfoProtocol> representedObject;
- (void)updateAppearence;
- (void)setDelegate:(id)arg1;
- (id)init;
- (struct CGColor *)_defaultPinTailColor;

@end

