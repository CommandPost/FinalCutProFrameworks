//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxProgressAPI.h"
#import "PROAPIObject.h"

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>
{
    struct OZProcessControl *_control;
}

+ (id)sharedProgressAPI;
+ (void)releaseSharedProgressAPI;
- (id)init;
- (void)_setControl:(const struct OZProcessControl *)arg1;
- (BOOL)userHasCancelled;
- (BOOL)updateProgress:(float)arg1;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;

@end
