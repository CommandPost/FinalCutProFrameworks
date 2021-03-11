//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FFPlayerVideoScopesModule, NSArray;

@protocol FFPlayerVideoScopesModuleDelegate <NSObject>

@optional
- (NSArray *)availableLayoutModes;
- (void)didChangePropertiesForVideoScope:(FFPlayerVideoScopesModule *)arg1;
- (void)videoScope:(FFPlayerVideoScopesModule *)arg1 wantsToChangeSelectedScope:(id)arg2;
- (BOOL)isLayoutDisplayAreaVertically;
- (void)setLayoutDisplayAreaVertically:(BOOL)arg1;
- (BOOL)isLayoutScopesVertically;
- (void)setLayoutScopesVertically:(BOOL)arg1;
- (long long)scopesLayoutMode;
- (void)setScopesLayoutMode:(long long)arg1;
@end

