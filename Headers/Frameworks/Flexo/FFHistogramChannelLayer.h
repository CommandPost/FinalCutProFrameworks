//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

__attribute__((visibility("hidden")))
@interface FFHistogramChannelLayer : CAMetalLayer
{
    long long _displayMode;
    _Atomic float _traceBrightness;
}

- (id)accessibilityAttributeValue:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)drawWithMtlContext:(struct PAEMtlContext *)arg1 renderer:(const struct Instance *)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) long long displayMode; // @dynamic displayMode;
@property(nonatomic) float traceBrightness; // @dynamic traceBrightness;
- (id)init;

@end

