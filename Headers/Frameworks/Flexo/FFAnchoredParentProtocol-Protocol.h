//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFAnchoredParentProtocol
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateStreamRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)informParentContainedItemsChanged:(BOOL)arg1;
- (void)informParentIsCompoundClipChanged;
- (void)informParentEffectsChanged;
- (void)informParentRolesWillChange;
- (void)informParentRolesDidChange;
- (long long)getFirstSetAnchoredLaneValueInParentsAndSelf:(id)arg1;
- (CDStruct_1b6d18a9)childToParentOffsetForChild:(id)arg1;
- (CDStruct_e83c9415)localEffectiveRange;
- (BOOL)objectInContainedItems:(id)arg1;
- (BOOL)canClippedItemRangeOnChildCausesRipple:(id)arg1;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)addAnchoredObjectForParentObserving:(id)arg1 includingObject:(BOOL)arg2;
- (void)removeAnchoredObjectFromParentObserving:(id)arg1 includingObject:(BOOL)arg2;
- (id)container;
- (BOOL)canContainObject:(id)arg1;
- (id)sequence;
@end
