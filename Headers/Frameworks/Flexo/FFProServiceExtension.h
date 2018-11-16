//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProServiceBase.h>

@class NSExtension, NSUUID;

__attribute__((visibility("hidden")))
@interface FFProServiceExtension : FFProServiceBase
{
    NSExtension *_nsExtension;
    NSUUID *_sessionIdentifier;
}

+ (void)discoverServicesFor:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) NSExtension *extension; // @synthesize extension=_nsExtension;
- (void)deactivate;
- (void)attachContentController:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)activateAndConnectToRemoteViewController:(CDUnknownBlockType)arg1;
- (void)setupExtensionHandlers;
- (id)remoteContextProxy;
- (id)containerURL;
- (id)URL;
- (id)plugInBundle;
- (id)version;
- (id)identifier;
- (id)name;
- (id)plugInInfoDictionary;
- (void)dealloc;
- (id)initWithNSExtension:(id)arg1;

@end

