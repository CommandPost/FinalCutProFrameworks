//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PROAPIAccessing.h"

@protocol PROPlugInDelegate <PROAPIAccessing>
- (void)plugInCouldNotInitialize:(id)arg1;
- (void)plugIn:(id)arg1 didError:(id)arg2;
- (id)plugInGroupWithUUID:(struct __CFUUID *)arg1;
- (BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
- (id)apiManagerForPlugInInstances;
@end

