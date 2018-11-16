//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFInspectorChannelDataSource
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)sequence;
- (BOOL)containsChannel:(id)arg1;

@optional
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canRemoveChannel:(id)arg1;
- (void)removeChannel:(id)arg1;
- (id)channelRootBase;
- (id)undoHandler;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2 deferUpdates:(BOOL)arg3;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
@end
