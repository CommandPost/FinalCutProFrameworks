//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOZChannelBridgeInspectorController.h>

__attribute__((visibility("hidden")))
@interface FFInspectorEffectChannelController : FFOZChannelBridgeInspectorController
{
    unsigned int _enableState;
}

- (void)viewHeightChanged;
- (void)updateHostViewController:(id)arg1 toEnableState:(unsigned int)arg2;
- (void)updateControllerEnableState;
- (void)setEnableState:(unsigned int)arg1;
- (id)newHostViewController;

@end
