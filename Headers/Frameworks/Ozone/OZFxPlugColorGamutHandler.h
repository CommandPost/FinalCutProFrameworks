//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxColorGamutAPI.h"
#import "PROAPIObject.h"

@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI>
{
    struct OZFxPlugSharedBase *sharedBase;
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (unsigned long long)colorPrimaries;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(CDUnion_2516e51e)arg1;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(CDUnion_2516e51e)arg1;
- (id)pcFloat33MatrixToFxMatrix44:(const float *)arg1;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

