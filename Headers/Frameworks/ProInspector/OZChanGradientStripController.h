//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class OZGradientView;

@interface OZChanGradientStripController : OZViewControllerGroup
{
    OZGradientView *_pGradientView;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)didTwiddle:(BOOL)arg1;
- (void)update;
- (BOOL)hasControls;

@end

