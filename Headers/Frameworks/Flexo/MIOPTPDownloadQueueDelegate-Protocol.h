//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MIOPTPDownloadRequest, NSError;

@protocol MIOPTPDownloadQueueDelegate <NSObject>
- (void)cameraFileDownloadError:(MIOPTPDownloadRequest *)arg1 error:(NSError *)arg2;
- (void)cameraFileDownloadCanceled:(MIOPTPDownloadRequest *)arg1;
- (void)cameraFileDidDownload:(MIOPTPDownloadRequest *)arg1;
- (void)cameraFileWillDownload:(MIOPTPDownloadRequest *)arg1;
@end

