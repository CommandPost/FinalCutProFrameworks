//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class FFAnchoredTimelineModule;

__attribute__((visibility("hidden")))
@interface FFOverrideButton : NSButton
{
    FFAnchoredTimelineModule *_module;
}

@property __weak FFAnchoredTimelineModule *module; // @synthesize module=_module;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;

@end

