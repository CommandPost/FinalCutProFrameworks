//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PAETileableXPCPlugIn;

@interface PAEPushButtonCallback : NSObject
{
    unsigned int _parameterID;
    PAETileableXPCPlugIn *pluginInstance;
    NSString *_selectorName;
}

@property(copy) NSString *selectorName; // @synthesize selectorName=_selectorName;
@property unsigned int parameterID; // @synthesize parameterID=_parameterID;
@property PAETileableXPCPlugIn *pluginInstance; // @synthesize pluginInstance;
- (void)dealloc;

@end

