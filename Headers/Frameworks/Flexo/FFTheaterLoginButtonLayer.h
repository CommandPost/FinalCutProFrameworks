//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerPushButton.h>

@class CATextLayer;

__attribute__((visibility("hidden")))
@interface FFTheaterLoginButtonLayer : FFResponderLayerPushButton
{
    int _iCloudLoginState;
    CATextLayer *_textLayer;
}

@property(nonatomic) int iCloudLoginState; // @synthesize iCloudLoginState=_iCloudLoginState;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void)dealloc;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)init;

@end

