//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFVideoScopesLayer : CALayer
{
    NSMutableArray *_managedSublayers;
}

- (void)setContentsScale:(double)arg1;
- (void)setNeedsUpdateFromDest;
- (id)settingsButton;
- (id)label;
- (id)managedSublayers;
- (void)addToManagedSublayers:(id)arg1;
- (void)layoutSettingsButtonAndLabelLayers;
- (void)_layoutLabel:(id)arg1 settingsButton:(id)arg2 bounds:(struct CGRect)arg3;
- (void)_layoutSettingsButton:(id)arg1 bounds:(struct CGRect)arg2;
- (void)dealloc;

@end

