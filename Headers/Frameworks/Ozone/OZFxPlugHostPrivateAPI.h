//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxHostPrivateAPI.h"
#import "PROAPIObject.h"

@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI>
{
    struct OZFxPlugSharedBase *_plugin;
}

- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (BOOL)getLayerBlendMode:(int *)arg1;
- (BOOL)setLayerBlendMode:(int)arg1;
- (BOOL)enableLayerBlendModeChannel:(BOOL)arg1;
- (BOOL)navigateToTime:(double)arg1;
- (BOOL)giveEffectUIFocus;

@end

