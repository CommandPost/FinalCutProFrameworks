//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSMutableDictionary, NSString, NSURLSession;

@interface FFDownloadController : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate>
{
    NSMutableDictionary *_downloadTaskMap;
    NSURLSession *_session;
}

+ (void)releaseSharedPredownloadController;
+ (id)sharedPredownloadController;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)newDownloadTaskWithResumeData:(id)arg1;
- (id)newDownloadTaskForURL:(id)arg1;
- (void)setDownloadTask:(id)arg1 forSessionTask:(id)arg2;
- (id)downloadTaskForURLSessionTask:(id)arg1;
- (void)removeDownloadTaskForID:(id)arg1;
- (void)setDownloadTask:(id)arg1 forID:(id)arg2;
- (id)downloadTaskForID:(id)arg1;
- (id)downloadFileAtURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

