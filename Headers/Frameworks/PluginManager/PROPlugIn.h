//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PROPlugIn : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToPlugIn:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)apiUsedByPlugInForProtocol:(id)arg1;
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

