//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFSequenceEditingActions
- (void)insertWithPasteboard:(id)arg1 backtimed:(BOOL)arg2 trackType:(id)arg3;
- (void)overwriteWithPasteboard:(id)arg1 backtimed:(BOOL)arg2 trackType:(id)arg3;
- (void)appendWithPasteboard:(id)arg1 trackType:(id)arg2;
- (void)anchorWithPasteboard:(id)arg1 backtimed:(BOOL)arg2 trackType:(id)arg3;
- (void)replaceWithPasteboard:(id)arg1 replaceActionType:(int)arg2;
- (void)insertPlaceholder;
- (void)insertGap;
@end
