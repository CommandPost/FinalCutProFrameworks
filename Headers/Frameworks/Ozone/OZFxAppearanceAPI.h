//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/FxAppearanceAPI-Protocol.h>
#import <Ozone/PROAPIObject-Protocol.h>

@class NSDictionary, NSString;

@interface OZFxAppearanceAPI : NSObject <PROAPIObject, FxAppearanceAPI>
{
    struct OZFxPlugSharedBase *_plugin;
    NSDictionary *_colorLookUp;
    NSDictionary *_fontDictLookUp;
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (BOOL)getThemeFontDictionary:(id *)arg1 forID:(id)arg2;
- (BOOL)getThemeColor:(id *)arg1 forID:(id)arg2;
- (void)dealloc;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

