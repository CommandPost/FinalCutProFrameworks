//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MIOAssetImportTrackMediator;

@protocol MIOAssetImportTrackMediatorDelegate <NSObject>
- (void)sampleBufferChannel:(MIOAssetImportTrackMediator *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer **)arg2;
- (BOOL)isValidSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

