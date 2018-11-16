//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FxBaseEffect.h"

@class FxImage;

@protocol FxFilter <FxBaseEffect>
- (BOOL)renderOutput:(FxImage *)arg1 withInput:(FxImage *)arg2 withInfo:(CDStruct_6b9ed609)arg3;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(CDStruct_6b9ed609)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_4a07eeda)arg3 withInfo:(CDStruct_6b9ed609)arg4;

@optional
- (void)schedule:(unsigned long long)arg1 frames:(CDUnion_2516e51e *)arg2 forRenderAtTime:(CDUnion_2516e51e)arg3;
- (unsigned long long)numberOfFramesToScheduleAtRenderTime:(CDUnion_2516e51e)arg1;
@end

