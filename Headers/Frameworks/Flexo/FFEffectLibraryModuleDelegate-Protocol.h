//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFArrangedItemsModuleDelegate-Protocol.h>

@class FFEffect, NSArray, NSPasteboard, NSString;

@protocol FFEffectLibraryModuleDelegate <FFArrangedItemsModuleDelegate>

@optional
- (BOOL)isSidebarHidden;
- (void)toggleSidebar:(id)arg1;
- (void)module:(id)arg1 setItemCountTextField:(NSString *)arg2;
- (void)module:(id)arg1 setCategoryTextField:(NSString *)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffect:(FFEffect *)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffectID:(id)arg2;
- (BOOL)module:(id)arg1 addItems:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
@end

