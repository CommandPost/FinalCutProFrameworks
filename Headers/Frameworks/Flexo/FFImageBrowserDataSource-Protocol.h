//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFImageBrowserSectionLayer, FFImageBrowserView, NSIndexSet;
@protocol FFImageBrowserRepresentedItem;

@protocol FFImageBrowserDataSource <NSObject>
- (id <FFImageBrowserRepresentedItem>)imageBrowser:(FFImageBrowserView *)arg1 representedItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInImageBrowser:(FFImageBrowserView *)arg1;

@optional
- (FFImageBrowserSectionLayer *)imageBrowser:(FFImageBrowserView *)arg1 sectionLayerAtIndex:(unsigned long long)arg2;
- (long long)numberOfSectionsInImageBrowser:(FFImageBrowserView *)arg1;
- (void)imageBrowser:(FFImageBrowserView *)arg1 removeItemsAtIndexes:(NSIndexSet *)arg2;
@end

