//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;
@protocol PROPlugInFirewallErrorHandler;

__attribute__((visibility("hidden")))
@interface PROPlugInFirewall : NSObject
{
    id <PROPlugInFirewallErrorHandler> errorHandler;
    id protectedObject;
    Protocol *protocol;
    Protocol *secondaryProtocol;
}

+ (void)forwardInvocation:(id)arg1;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)deadMethod;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)deadMethod;
- (id)protectedObject;
- (id)description;
- (void)dealloc;
- (id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4;

@end

