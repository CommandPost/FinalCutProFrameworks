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
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (id)bundle;
- (id)infoDictionary;
- (id)delegate;
- (id)plugInInstance;
- (id)sharedPlugInInstance;
- (Class)plugInClass;
- (id)className;
- (struct __CFUUID *)uuid;
- (id)group;
- (id)displayName;
- (id)helpURL;
- (id)version;
- (id)infoString;
- (id)icon;
- (id)implementedProtocols;
- (id)apiUsedByPlugInForProtocol:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)isEqualToPlugIn:(id)arg1;

@end

