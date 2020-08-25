//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFFileBuf.h>

@class NSMutableURLRequest, NSNumber, NSObject<OS_dispatch_semaphore>, NSURLSession;

__attribute__((visibility("hidden")))
@interface FF_HTTP_FileBuf : FFFileBuf
{
    NSURLSession *_session;
    NSMutableURLRequest *_request;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSNumber *_contentLength;
}

+ (id)copyContentLengthFromResponse:(id)arg1;
+ (long long)portForURL:(id)arg1;
- (id)contentLength;
- (BOOL)readNext:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

