//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MIODeviceConnection : NSObject
{
    unsigned int mCMIOObjectID;
    unsigned int mFramerate;
    unsigned int mHeight;
    unsigned int mWidth;
    unsigned int mMultiplexerMode;
    unsigned int mCodecType;
    unsigned int mAVCSignalMode;
    unsigned int mAVCDeviceType;
    BOOL mNTSCRate;
    BOOL mAvailable;
    unsigned int remainOpenCount;
    NSString *mUID;
    BOOL mHasListener;
    int mTimecodeFormat;
    int mTailClipTrimFrames;
    NSNumber *_canDoInput;
    NSNumber *_canDoOutput;
    NSString *mFilePath;
    NSArray *mInputFormats;
    NSString *mCurrentInputFormat;
    NSArray *mInputFrameRates;
    NSNumber *mCurrentInputFrameRate;
    struct opaqueCMFormatDescription *mCurrentFigFormatDescription;
    NSArray *mControls;
    NSArray *mOutputFormats;
    NSString *mCurrentOutputFormat;
    BOOL mIsiSight;
    BOOL miSightHasIris;
    int miSightStatus;
}

+ (id)deviceConnectionWithCMIOObjectID:(unsigned int)arg1;
+ (id)deviceConnectionWithCodecType:(unsigned int)arg1 forOutputToPath:(id)arg2;
- (id)initWithCodecType:(unsigned int)arg1 forOutputToPath:(id)arg2;
- (id)initWithCMIOObjectID:(unsigned int)arg1;
- (void)addDeviceListener;
- (void)removeDeviceListener;
- (BOOL)configureDeviceFromConfigFile;
- (void)dealloc;
- (void)determineiSightStatus:(BOOL)arg1 isInUse:(BOOL)arg2;
- (void)connectionDidBecomeAvailable;
- (void)connectionWillBecomeUnavailable;
- (BOOL)openConnection;
- (void)closeConnection;
- (BOOL)isOpen;
- (void)setCMIOObjectID:(unsigned int)arg1;
- (unsigned int)cmioObjectID;
- (id)UID;
- (unsigned int)framerate;
- (int)timecodeFormat;
- (unsigned int)vendorID;
- (id)vendor;
- (id)modelUID;
- (id)deviceName;
- (id)displayName;
- (id)framerateString;
- (BOOL)ntscRate;
- (void)setMultiplexerMode:(unsigned int)arg1;
- (unsigned int)multiplexerMode;
- (unsigned int)codecType;
- (unsigned int)avcSignalMode;
- (unsigned int)avcDeviceType;
@property struct opaqueCMFormatDescription *currentFigFormatDescription;
- (id)currentFormat;
- (id)presentationDimensions;
- (id)availableFormats;
@property(retain) NSArray *inputFormats; // @synthesize inputFormats=mInputFormats;
@property(retain) NSString *currentInputFormat;
- (struct opaqueCMFormatDescription *)currentInputFormatDescription;
@property(retain) NSArray *inputFrameRates; // @synthesize inputFrameRates=mInputFrameRates;
@property(retain) NSArray *outputFormats; // @synthesize outputFormats=mOutputFormats;
@property(retain) NSString *currentOutputFormat;
- (struct opaqueCMFormatDescription *)currentOutputFormatDescription;
- (struct OpaqueFigClock *)clock;
- (void)refreshFormats;
@property(retain) NSArray *controls; // @synthesize controls=mControls;
@property(retain) NSNumber *currentInputFrameRate;
@property BOOL inputting;
- (unsigned int)width;
- (unsigned int)height;
- (int)format;
- (BOOL)isFileProxyDevice;
- (id)fileProxyDevicePath;
- (int)tailClipTrimFrames;
- (BOOL)canDoInput;
- (BOOL)canDoOutput;
@property NSDictionary *properties;
@property int iSightStatus; // @synthesize iSightStatus=miSightStatus;
@property BOOL iSightHasIris; // @synthesize iSightHasIris=miSightHasIris;
@property BOOL isiSight; // @synthesize isiSight=mIsiSight;
@property BOOL available; // @synthesize available=mAvailable;

@end
