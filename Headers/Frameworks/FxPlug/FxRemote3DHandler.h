//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Fx3DAPI_v4.h"

@class NSLock;

@interface FxRemote3DHandler : NSObject <Fx3DAPI_v4>
{
    NSLock *threadLock;
    map_fc121dd1 threeDInfoMap;
}

@property map_fc121dd1 threeDInfoMap; // @synthesize threeDInfoMap;
@property(retain) NSLock *threadLock; // @synthesize threadLock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isUsingCamera;
- (id)worldToEyeMatrix;
- (id)worldToObjectMatrix;
- (id)worldToFilmMatrix;
- (double)focalLengthAtTime:(CDStruct_1b6d18a9)arg1;
- (void)set3DData:(id)arg1;
- (void)clear3DData;
- (struct Fx3DInfo *)threeDInfo;
- (void)dealloc;
- (id)init;

@end

