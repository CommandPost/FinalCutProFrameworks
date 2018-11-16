//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxProgressAPI.h"
#import "PROAPIObject.h"

@class NSString;

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>
{
}

+ (void)releaseSharedProgressAPI;
+ (id)sharedProgressAPI;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (BOOL)updateProgress:(float)arg1;
- (BOOL)userHasCancelled;
- (void)_setControl:(const struct OZProcessControl *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

