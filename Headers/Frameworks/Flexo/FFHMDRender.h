//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCHMDRender.h"

@class NSObject<FFHMDPullFrameModelProtocol>;

__attribute__((visibility("hidden")))
@interface FFHMDRender : PCHMDRender
{
    struct __IOSurface *_ioSurfaces[2];
    struct HGRef<HGBitmap> _lastRen[6];
    int _lastRenOffset;
    BOOL _hmdOutputEnabled;
    struct HMDMatrices _eyeMatrices[2];
    struct FFSynchronizable *_matricesLock;
    struct FFSynchronizable *_pullDelegateLock;
    NSObject<FFHMDPullFrameModelProtocol> *_pullDelegate;
    struct list<PCHMDStats, std::__1::allocator<PCHMDStats>> _recentDropInfo;
    unsigned int _dropsReprojectsLastSecond;
    unsigned int _queuedChangedDrops;
    PCQuat_8a184614 _defaultRotation;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _resetHMDRotation
}

+ (void)openMoreInfoURL;
+ (void)displayFailedCheckAlert:(int)arg1;
+ (id)currentHMDRender;
+ (void)disableHMD;
+ (void)enableHMD;
- (id).cxx_construct;
- (void).cxx_destruct;
- (PCQuat_8a184614)defaultRotation;
- (void)resetHMDRotation;
- (void)generateFrameForEye:(int)arg1 equirect:(id)arg2 equiRectLoc:(int)arg3 arrayOffset:(int)arg4 eyeMatrices:(struct HMDMatrices *)arg5 equirectProcessingFormat:(id)arg6;
- (id)pullDelegate;
- (void)setPullDelegate:(id)arg1;
- (struct __IOSurface **)getFrame:(struct HMDMatrices *)arg1 statisticsData:(struct PCHMDStats *)arg2;
- (void)setEyeMatrices:(struct HMDMatrices *)arg1;
- (void)matricesForEye:(int)arg1 matrices:(struct HMDMatrices *)arg2;
- (void)postInit:(BOOL)arg1;
- (void)dealloc;
- (BOOL)setHMDOutuputEnabled:(BOOL)arg1;
- (void)_kickImageLocation;
- (BOOL)HMDOutuputEnabled;
- (id)init;

@end

