//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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

