//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOConfigurationManager, MIOOutputDevice, MIOPreviewView, NSLock;

@interface MIOOutputCore : MIOObject
{
    MIOConfigurationManager *mConfigurationManager;
    MIOOutputDevice *mOutputDevice;
    MIOPreviewView *mPreviewView;
    id mDelegate;
    NSLock *mDelegateLock;
}

+ (id)core;
@property(retain, nonatomic) MIOOutputDevice *outputDevice; // @synthesize outputDevice=mOutputDevice;
@property(retain) MIOConfigurationManager *configurationManager; // @synthesize configurationManager=mConfigurationManager;
- (BOOL)setOutputting:(BOOL)arg1 destFPS:(unsigned int)arg2;
- (BOOL)printToTape:(unsigned int)arg1;
- (void)outputDroppedFrames:(id)arg1;
- (void)outputReachedEndOfData:(id)arg1;
- (id)delegateLock;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@property(retain) MIOPreviewView *previewView;
- (void)_setOutputDevicePreviewView:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)dealloc;
- (id)init;

@end

