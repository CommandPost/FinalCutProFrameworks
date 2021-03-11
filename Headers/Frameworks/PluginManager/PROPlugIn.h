//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PROPlugIn : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3;
- (void)setIsBlocked:(BOOL)arg1;
- (BOOL)isEqualToPlugIn:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)apiUsedByPlugInForProtocol:(id)arg1;
- (id)blockedLookupKey;
- (BOOL)isBlocked;
- (id)pluginKitPlug;
- (id)implementedProtocols;
- (id)icon;
- (id)infoString;
- (id)version;
- (id)helpURL;
- (id)displayName;
- (id)group;
- (struct __CFUUID *)uuid;
- (id)className;
- (Class)plugInClass;
- (id)sharedPlugInInstance;
- (id)plugInInstance;
- (id)delegate;
- (id)infoDictionary;
- (id)bundle;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

@end

