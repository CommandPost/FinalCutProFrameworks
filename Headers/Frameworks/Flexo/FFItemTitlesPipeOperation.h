//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FFFetchItemTitlePropertiesOperation, FFUpdateItemLayerTitlesOperation;

__attribute__((visibility("hidden")))
@interface FFItemTitlesPipeOperation : NSOperation
{
    FFFetchItemTitlePropertiesOperation *_reloadItemTextBadgesOperation;
    FFUpdateItemLayerTitlesOperation *_updateItemTextBadgesOperation;
}

@property(retain, nonatomic) FFUpdateItemLayerTitlesOperation *updateItemTextBadgesOperation; // @synthesize updateItemTextBadgesOperation=_updateItemTextBadgesOperation;
@property(retain, nonatomic) FFFetchItemTitlePropertiesOperation *reloadItemTextBadgesOperation; // @synthesize reloadItemTextBadgesOperation=_reloadItemTextBadgesOperation;
- (void)removeDependenciesToPreventLibraryOrphanWarnings;
- (void)releaseLibraryObjects;
- (void)cancel;
- (void)main;
- (void)dealloc;

@end

