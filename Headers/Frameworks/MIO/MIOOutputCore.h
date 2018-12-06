//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOConfigurationManager, MIOOutputDevice, MIOPreviewView;

@interface MIOOutputCore : MIOObject
{
    MIOConfigurationManager *mConfigurationManager;
    MIOOutputDevice *mOutputDevice;
    MIOPreviewView *mPreviewView;
    id mDelegate;
}

+ (id)core;
- (id)init;
- (void)dealloc;
- (void)setFormat:(int)arg1;
@property(retain, nonatomic) MIOOutputDevice *outputDevice; // @synthesize outputDevice=mOutputDevice;
- (void)_setOutputDevicePreviewView:(id)arg1;
@property(retain) MIOPreviewView *previewView;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)outputReachedEndOfData:(id)arg1;
- (void)outputDroppedFrames:(id)arg1;
- (BOOL)printToTape:(unsigned int)arg1;
- (BOOL)setOutputting:(BOOL)arg1 destFPS:(unsigned int)arg2;
@property(retain) MIOConfigurationManager *configurationManager; // @synthesize configurationManager=mConfigurationManager;

@end

