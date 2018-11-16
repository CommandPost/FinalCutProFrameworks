//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface FFBlindDataCustomUIChannelController : OZViewControllerGroup
{
    NSView *_customView;
    id _modelObject;
}

+ (BOOL)shouldDisplayReset;
+ (BOOL)shouldDisplayAnimIndicator;
@property(readonly, nonatomic) NSView *customView; // @synthesize customView=_customView;
- (float)suggestedMaxParamWidth;
- (void)update;
- (void)_subviewsNeedDisplay:(id)arg1;
- (void)didBuildUI;
- (id)plugin;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

