//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoObjectTabController.h>

@interface OZFootageInspectorController : OZAutoObjectTabController
{
    struct OZFootage *_pFootage;
}

- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (BOOL)buildUIWithSceneNodes:(list_d81b4758 *)arg1 context:(id)arg2;
- (void)buildUI:(struct OZSceneNode *)arg1 context:(id)arg2;

@end

