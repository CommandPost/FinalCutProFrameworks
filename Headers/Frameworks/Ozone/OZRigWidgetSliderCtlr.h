//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZChanDoubleController.h>

@class OZRigWidgetTagsView;

@interface OZRigWidgetSliderCtlr : OZChanDoubleController
{
    OZRigWidgetTagsView *_pTagsView;
    struct OZRigWidget *_pWidget;
}

- (void)didChangeChannel;
- (void)aboutToChangeChannel;
- (void)disable;
- (void)enable;
- (void)update;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

