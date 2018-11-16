//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorBaseViewControllerGroup.h>

@class CHChannelBase;

__attribute__((visibility("hidden")))
@interface FFBaseOnscreenControlController : FFColorBaseViewControllerGroup
{
    unsigned long long _maskIndex;
    CHChannelBase *_observedChannel;
    struct {
        unsigned int isActiveOSC:1;
        unsigned int isObservingActiveChannel:1;
        unsigned int suppressRecvOfObservedChannel:1;
    } _state;
}

- (void)selectedItemEffectsChanged:(id)arg1;
- (BOOL)_hasOtherCorrectionsSelected;
- (BOOL)_hasOtherCorrectionsSelectedWithShapes:(id *)arg1;
- (BOOL)_hasOtherShapesSelected:(id *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)activeToolChanged:(id)arg1;
- (void)showOSC:(id)arg1;
- (void)didBuildUI;
- (id)controlForChannel:(id)arg1;
- (void)maskOSCActiveChannelChanged:(id)arg1 old:(id)arg2;
- (id)representedChannel;
@property(getter=isActiveOSC) BOOL activeOSC; // @dynamic activeOSC;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

