//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MIODeviceConnection, NSString;

@protocol FFDestVideoDeviceManaging
- (void)updateOutputDevice:(MIODeviceConnection *)arg1;
- (void)disableVideoOutOnRelease;
- (BOOL)hasConnection;
- (NSString *)deviceUID;
- (id)initWithDeviceUID:(NSString *)arg1;
@end

