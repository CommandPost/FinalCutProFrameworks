//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProjectExtrasSidebarNode.h>

@class NSImage, NSString;

@interface FFProjectExtrasExternalMediaServiceNode : FFProjectExtrasSidebarNode
{
    NSString *_title;
    id <PKPlugIn> _plugIn;
    NSImage *_plugInIcon;
    NSString *_serviceClassName;
    NSString *_serviceBundleIdentifier;
}

@property(readonly) NSString *serviceBundleIdentifier; // @synthesize serviceBundleIdentifier=_serviceBundleIdentifier;
@property(readonly) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(readonly) id <PKPlugIn> plugIn; // @synthesize plugIn=_plugIn;
- (id)iconImage:(BOOL)arg1;
- (int)displayType;
- (id)moduleKey;
- (id)title;
- (void)dealloc;
- (id)initWithPluginKitPlugin:(id)arg1;
- (id)initWithServiceClassName:(id)arg1 bundleIdentifier:(id)arg2;

@end

