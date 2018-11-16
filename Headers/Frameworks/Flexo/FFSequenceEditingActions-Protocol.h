//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol FFSequenceEditingActions
- (void)insertGap;
- (void)insertPlaceholder;
- (void)freezeFrameWithPasteboard:(NSString *)arg1 backtimed:(BOOL)arg2 trackType:(NSString *)arg3;
- (void)replaceWithPasteboard:(NSString *)arg1 replaceActionType:(int)arg2;
- (void)anchorToMarkersWithPasteboard:(NSString *)arg1 backtimed:(BOOL)arg2 trackType:(NSString *)arg3;
- (void)anchorWithPasteboard:(NSString *)arg1 backtimed:(BOOL)arg2 trackType:(NSString *)arg3;
- (void)appendWithPasteboard:(NSString *)arg1 trackType:(NSString *)arg2;
- (void)overwriteWithPasteboard:(NSString *)arg1 backtimed:(BOOL)arg2 trackType:(NSString *)arg3;
- (void)insertWithPasteboard:(NSString *)arg1 backtimed:(BOOL)arg2 trackType:(NSString *)arg3;
@end

