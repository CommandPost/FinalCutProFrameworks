//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface FFFadeHandlesLayerUpdater : NSObject
{
    NSCountedSet *_fadeHandlesLayers;
}

- (void)unregisterFadeLayer:(id)arg1;
- (void)registerFadeLayer:(id)arg1;
- (void)updateLayers;
- (void)dealloc;

@end
