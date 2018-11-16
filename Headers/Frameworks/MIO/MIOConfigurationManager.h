//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOConfiguration, NSMutableArray, NSString;

@interface MIOConfigurationManager : MIOObject
{
    MIOConfiguration *mCurrentCaptureConfiguration;
    MIOConfiguration *mCurrentOutputConfiguration;
    NSMutableArray *mCaptureConfigurations;
    NSMutableArray *mOutputConfigurations;
    NSString *mConfigurationRootDirectory;
    NSMutableArray *mRecentCaptureVideoDevices;
    NSMutableArray *mRecentCaptureAudioDevices;
    NSMutableArray *mRecentOutputVideoDevices;
    long long mMaximumRecentDevicesCount;
}

+ (void)initialize;
+ (void)releaseSharedConfigurationManager;
+ (id)sharedConfigurationManager;
@property long long maximumRecentDevicesCount; // @synthesize maximumRecentDevicesCount=mMaximumRecentDevicesCount;
@property(retain, nonatomic) NSMutableArray *recentOutputVideoDevices; // @synthesize recentOutputVideoDevices=mRecentOutputVideoDevices;
@property(retain, nonatomic) NSMutableArray *recentCaptureAudioDevices; // @synthesize recentCaptureAudioDevices=mRecentCaptureAudioDevices;
@property(retain, nonatomic) NSMutableArray *recentCaptureVideoDevices; // @synthesize recentCaptureVideoDevices=mRecentCaptureVideoDevices;
@property(retain, nonatomic) NSString *configurationRootDirectory; // @synthesize configurationRootDirectory=mConfigurationRootDirectory;
@property(retain, nonatomic) NSMutableArray *outputConfigurations; // @synthesize outputConfigurations=mOutputConfigurations;
@property(retain, nonatomic) NSMutableArray *captureConfigurations; // @synthesize captureConfigurations=mCaptureConfigurations;
- (id)createCaptureDevice;
- (void)clearRecentDevices;
- (void)saveRecentDevices;
- (id)recentDevicesPath:(id)arg1 subPath:(id)arg2;
- (BOOL)deleteOutputConfiguration:(id)arg1;
- (id)duplicateCurrentOutputConfiguration;
@property(retain) MIOConfiguration *currentOutputConfiguration;
- (BOOL)deleteCaptureConfiguration:(id)arg1;
- (id)duplicateCurrentCaptureConfiguration;
@property(retain) MIOConfiguration *currentCaptureConfiguration;
- (void)dealloc;
- (id)init;

@end

