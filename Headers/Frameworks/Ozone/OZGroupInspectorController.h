//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoObjectTabController.h>

@interface OZGroupInspectorController : OZAutoObjectTabController
{
    struct list<OZGroup *, std::__1::allocator<OZGroup *>> *_groups;
}

- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (void)dealloc;
- (void)delayedRelease;
- (void)delayedReleaseCB:(id)arg1;
- (BOOL)buildUIWithSceneNodes:(list_63a35edb *)arg1 context:(id)arg2;
- (BOOL)updateHiddenChannels;
- (void)changeBlendModeToNormal;
- (BOOL)updateRasterizationFlags;

@end

