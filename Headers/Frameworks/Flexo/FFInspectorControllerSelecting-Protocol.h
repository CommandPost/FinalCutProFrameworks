//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFInspectorController, NSArray;

@protocol FFInspectorControllerSelecting
- (void)setUseInactiveSelectionState:(BOOL)arg1 forControllers:(NSArray *)arg2;
- (void)deleteControllers:(NSArray *)arg1;
- (void)deselectControllers:(NSArray *)arg1;
- (void)selectControllers:(NSArray *)arg1;
- (BOOL)isControllerSelected:(FFInspectorController *)arg1;
@end

