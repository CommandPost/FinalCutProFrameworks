//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxVersioningAPI.h"
#import "PROAPIObject.h"

@interface OZFxPlugVersioningAPI : NSObject <FxVersioningAPI, PROAPIObject>
{
    struct OZFxPlugSharedBase *_plugin;
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (BOOL)updateVersionAtCreation:(unsigned int)arg1;
- (unsigned int)versionAtCreation;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;

@end

