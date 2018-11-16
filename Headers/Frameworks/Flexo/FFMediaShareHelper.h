//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSRunningApplication, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFMediaShareHelper : NSObject
{
    NSString *name;
    NSURL *applicationURL;
    NSBundle *bundle;
    NSRunningApplication *runningApp;
    NSDictionary *infoDictinoary;
    long long timeOutInTicks;
    BOOL useLocationRecord;
    long long timeoutInTicks;
}

@property(readonly) NSString *name; // @synthesize name;
@property(readonly) NSURL *applicationURL; // @synthesize applicationURL;
@property BOOL useLocationRecord; // @synthesize useLocationRecord;
@property long long timeoutInTicks; // @synthesize timeoutInTicks;
- (id)sendAppleEvent:(id)arg1 inTimeOut:(long long)arg2;
- (void)openAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)decodeDataOptionsRecord:(id)arg1;
- (id)encodeDataOptionsDictionary:(id)arg1;
- (id)decodeMetadataRecord:(id)arg1;
- (id)encodeMetadataDictionary:(id)arg1;
- (id)packageLocationRecordWithMedia:(id)arg1 andDesc:(id)arg2;
- (id)decodeLocationRecord:(id)arg1;
- (id)sendOpenDocumentsEvent:(id)arg1;
- (id)sendGetAssetPropertyEvent:(id)arg1 code:(unsigned int)arg2;
- (id)sendMakeNewAssetEventWithName:(id)arg1 metadata:(id)arg2 dataOptions:(id)arg3;
- (void)addNewAssetWithName:(id)arg1 metadata:(id)arg2 dataOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)targetDescriptor;
@property(readonly) BOOL supportsMediaAssetPrototol;
@property(readonly) NSString *applicationBundleID;
@property(readonly) NSString *description;
- (id)runningApp;
- (id)infoDictionary;
- (void)dealloc;
- (id)init:(id)arg1;

@end
