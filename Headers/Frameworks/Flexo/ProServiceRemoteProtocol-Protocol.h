//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol ProServiceRemoteProtocol
- (void)deliverHostNotification:(NSString *)arg1 object:(id)arg2 userInfo:(NSDictionary *)arg3;
- (void)loadPlugInSupportFrameworks:(NSArray *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)viewServiceListnerEndPoint:(void (^)(NSXPCListenerEndpoint *))arg1;
@end

