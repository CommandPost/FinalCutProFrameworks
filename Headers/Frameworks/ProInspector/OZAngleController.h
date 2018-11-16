//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class LKDial;

@interface OZAngleController : OZViewController
{
    LKDial *_pDial;
    _Bool _isOffsetting;
    struct vector<double, std::allocator<double>> *_pMouseDownValues;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2 dial:(id)arg3;
- (void)startDialAction:(id)arg1;
- (void)endDialAction:(id)arg1;
- (double)renormalize:(double)arg1;
- (struct OZChannelAngle *)angleChannelFromChannel:(struct OZChannelBase *)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (void)setChannelValue:(id)arg1;

@end
