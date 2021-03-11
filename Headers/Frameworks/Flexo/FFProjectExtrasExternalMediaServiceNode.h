//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFProjectExtrasSidebarNode.h>

@class NSImage, NSString, PXProServiceBase;

@interface FFProjectExtrasExternalMediaServiceNode : FFProjectExtrasSidebarNode
{
    NSString *_title;
    PXProServiceBase *_plugIn;
    NSImage *_plugInIcon;
    NSString *_serviceClassName;
    NSString *_serviceBundleIdentifier;
}

@property(readonly) NSString *serviceBundleIdentifier; // @synthesize serviceBundleIdentifier=_serviceBundleIdentifier;
@property(readonly) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(readonly) PXProServiceBase *plugIn; // @synthesize plugIn=_plugIn;
- (id)iconImage:(BOOL)arg1;
- (int)displayType;
- (id)moduleKey;
- (id)title;
- (void)dealloc;
- (id)initWithPlugIn:(id)arg1;
- (id)initWithServiceClassName:(id)arg1 bundleIdentifier:(id)arg2;

@end

