//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFEditAction, FFEditActionData, NSString;

@protocol FFEditActionDestinationProtocol
- (struct CGRect)animationEndRectForEditAction:(FFEditAction *)arg1 pasteboardName:(NSString *)arg2;
- (void)performEditAction:(FFEditAction *)arg1 fromPasteboardWithName:(NSString *)arg2 fromAnimation:(BOOL)arg3;
- (BOOL)canPerformEditAction:(FFEditAction *)arg1 withData:(FFEditActionData *)arg2;
@end

