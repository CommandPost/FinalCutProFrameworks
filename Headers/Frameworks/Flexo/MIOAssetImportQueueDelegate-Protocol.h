//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MIOAssetImportRequest, NSError;

@protocol MIOAssetImportQueueDelegate <NSObject>
- (void)assetImportError:(MIOAssetImportRequest *)arg1 error:(NSError *)arg2;
- (void)assetImportCanceled:(MIOAssetImportRequest *)arg1;
- (void)assetDidImport:(MIOAssetImportRequest *)arg1;
- (void)assetWillImport:(MIOAssetImportRequest *)arg1;
@end

