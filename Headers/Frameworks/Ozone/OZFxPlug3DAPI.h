//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Fx3DAPI.h"
#import "Fx3DAPI_v2.h"
#import "Fx3DAPI_v3.h"
#import "PROAPIObject.h"

@class NSString;

@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject>
{
    BOOL _is3D;
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (double)focalLengthAtFxTime:(CDUnion_2516e51e)arg1;
- (double)focalLengthAtTime:(double)arg1;
- (BOOL)isUsingCamera;
- (BOOL)is3D;
- (id)worldToEyeMatrix;
- (id)worldToObjectMatrix;
- (id)worldToLayerMatrix;
- (id)layerMatrixAtTime:(double)arg1;
- (id)worldToFilmMatrix;
- (id)cameraMatrixAtTime:(double)arg1;
- (void)_setFocalLength:(double)arg1;
- (void)_setIs3D:(BOOL)arg1;
- (void)_setWorldToEyeMatrix:(PCMatrix44Tmpl_e98c85ee)arg1;
- (void)_setWorldToObjectMatrix:(PCMatrix44Tmpl_e98c85ee)arg1;
- (void)_setWorldToLayerMatrix:(PCMatrix44Tmpl_e98c85ee)arg1;
- (void)_setLayerMatrix:(PCMatrix44Tmpl_e98c85ee)arg1;
- (void)_setWorldToFilmMatrix:(PCMatrix44Tmpl_e98c85ee)arg1;
- (void)_setCameraMatrix:(PCMatrix44Tmpl_e98c85ee)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

