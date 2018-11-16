//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAssetFileIdentifier, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSURL;

__attribute__((visibility("hidden")))
@interface FFREDClip : NSObject
{
    FFAssetFileIdentifier *_assetFileID;
    id <REDClipReading> _reader;
    NSURL *_urlOfReader;
    NSMutableArray *_fileURLs;
    unsigned char _r3dUUID[16];
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    CDStruct_1b6d18a9 _startTimeCode;
    unsigned long long _startTimeCodeInFrames;
    struct vector<unsigned int, std::allocator<unsigned int>> _fileCumulativeVideoFrameCounts;
    unsigned int _maxVideoFrameSize;
    int _revision;
    id <REDImageProcessing> _settings;
    int _savedRevision;
    id <REDImageProcessing> _savedSettings;
    id <REDImageProcessing> _cameraSettingsInRmdSpace;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)copyClipInstanceForURL:(id)arg1 assetFileID:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property float exposure;
@property float brightness;
@property float contrast;
@property float saturation;
@property float DRX;
@property float shadow;
@property float FLUT;
@property int ISO;
@property float tint;
@property float kelvin;
@property int imageGammaCurve;
@property int imageColorSpace;
- (id)copySavedImageProcessingSettings:(int *)arg1;
- (id)copyDynamicImageProcessingSettings:(int *)arg1;
- (CDStruct_bdcb2b0d)calcMD5ForSavedImageProcessingSettings;
- (CDStruct_bdcb2b0d)calcMD5ForDynamicImageProcessingSettings;
- (BOOL)saveImageProcessingSettingsToRmd;
- (void)revertImageProcessingSettingsToRmdSettings;
- (void)revertImageProcessingSettingsToNeutralSettings;
- (void)revertImageProcessingSettingsToCameraSettings;
- (unsigned int)maxVideoFrameSize;
- (unsigned long long)videoFrameOffsetForAdjustedFileIndex:(unsigned int)arg1 videoFrameNum:(unsigned int)arg2 frameSizeOut:(unsigned long long *)arg3;
- (unsigned int)totalNumVideoFrames;
- (unsigned int)cumulativeVideoFrameCountForAdjustedFileIndex:(unsigned int)arg1;
- (unsigned int)firstVideoFrameNumForAdjustedFileIndex:(unsigned int)arg1;
- (id)copyFileURLs;
- (CDStruct_1b6d18a9)startTimeCode;
- (unsigned long long)startTimeCodeInFrames;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (id)copyReader;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (void)_updateReader:(id)arg1;
- (id)initWithURL:(id)arg1 assetFileID:(id)arg2;

@end

