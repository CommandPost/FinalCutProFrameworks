//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFTheaterItem, FFTheaterMenuViewController, NSError, NSString;

@protocol FFTheaterMenuDelegate <NSObject>
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 presentUbiquityUnavailableWarningForItem:(FFTheaterItem *)arg2;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 presentError:(NSError *)arg2 forItem:(FFTheaterItem *)arg3;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 cancelOperation:(NSString *)arg2 forItem:(FFTheaterItem *)arg3;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canCancelOperation:(NSString *)arg2 forItem:(FFTheaterItem *)arg3;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 setUbiquitous:(BOOL)arg2 forItem:(FFTheaterItem *)arg3;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 itemIsEligibleForUbiquity:(FFTheaterItem *)arg2 error:(id *)arg3;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canSetUbiquitous:(BOOL)arg2 forItem:(FFTheaterItem *)arg3 error:(id *)arg4;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 goToProjectForItem:(FFTheaterItem *)arg2;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canGoToProjectForItem:(FFTheaterItem *)arg2;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 saveItem:(FFTheaterItem *)arg2;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canSaveItem:(FFTheaterItem *)arg2;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 renameItem:(FFTheaterItem *)arg2;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canRenameItem:(FFTheaterItem *)arg2;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 deleteItem:(FFTheaterItem *)arg2;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canDeleteItem:(FFTheaterItem *)arg2;
- (void)theaterMenu:(FFTheaterMenuViewController *)arg1 playItem:(FFTheaterItem *)arg2;
- (BOOL)theaterMenu:(FFTheaterMenuViewController *)arg1 canPlayItem:(FFTheaterItem *)arg2;
@end

