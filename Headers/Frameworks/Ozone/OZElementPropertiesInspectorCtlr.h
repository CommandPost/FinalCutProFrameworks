//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoPropertiesTabController.h>

@interface OZElementPropertiesInspectorCtlr : OZAutoPropertiesTabController
{
    list_d81b4758 _elementsList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (int)numberVisibleDescendants:(struct OZChannelFolder *)arg1;
- (BOOL)isChannelA:(struct OZChannelBase *)arg1 compatibleWithChannelB:(struct OZChannelBase *)arg2;
- (BOOL)buildUIWithSceneNodes:(list_d81b4758 *)arg1 context:(id)arg2;

@end

