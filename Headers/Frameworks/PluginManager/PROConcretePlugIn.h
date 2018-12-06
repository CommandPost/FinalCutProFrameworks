//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PluginManager/PROPlugIn.h>

#import "NSCopying.h"

@class NSBundle, NSDictionary, NSImage, NSString, NSURL, PROPlugInGroup;

__attribute__((visibility("hidden")))
@interface PROConcretePlugIn : PROPlugIn <NSCopying>
{
    NSBundle *bundle;
    struct __CFUUID *uuidRef;
    NSDictionary *infoDictionary;
    PROPlugInGroup *group;
    NSString *localizationTableName;
    NSImage *icon;
    NSURL *helpURL;
    id sharedInstance;
    struct {
        unsigned int loadedInstanceEver:1;
        unsigned int checkedForIcon:1;
        unsigned int checkedForHelp:1;
    } plugInFlags;
    id <PROPlugInDelegate> delegate;
}

- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)bundle;
- (BOOL)isEqualToPlugIn:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct __CFUUID *)uuid;
- (id)uuidString;
- (void)reportError:(id)arg1;
- (id)sharedPlugInInstance;
- (id)className;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)group;
- (id)displayName;
- (id)helpURL;
- (id)version;
- (id)infoString;
- (id)icon;
- (id)vendorName;
- (id)description;
- (id)implementedProtocols;
- (id)infoDictionary;
- (id)apiUsedByPlugInForProtocol:(id)arg1;

@end

