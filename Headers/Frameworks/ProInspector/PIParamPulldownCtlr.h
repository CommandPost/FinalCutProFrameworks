//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class PIParameterPulldown;

@interface PIParamPulldownCtlr : OZViewController
{
    PIParameterPulldown *_pParamPulldown;
}

+ (id)addPulldownControllerToController:(id)arg1 channel:(struct OZChannelBase *)arg2 context:(id)arg3;
+ (double)defaultWidth;
- (void)setAnimStatusClass:(Class)arg1;
- (void)reset;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

