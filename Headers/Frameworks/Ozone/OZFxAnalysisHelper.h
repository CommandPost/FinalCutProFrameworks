//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/FFBackgroundTaskTarget-Protocol.h>

@class FFBackgroundTask, OZPXVideoDecoder, PXProServiceExtension, ProAnalysisHostContext;

@interface OZFxAnalysisHelper : NSObject <FFBackgroundTaskTarget>
{
    struct OZFxFilter *filter;
    PXProServiceExtension *analysisExtension;
    ProAnalysisHostContext *hostContext;
    OZPXVideoDecoder *decoder;
    CDStruct_e83c9415 timeRange;
    FFBackgroundTask *_task;
}

@property(retain) FFBackgroundTask *task; // @synthesize task=_task;
- (void)canceledTask:(id)arg1;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)performAnalysis;
- (void)setHostContext:(id)arg1;
- (void)dealloc;
- (id)initWithFxFilter:(struct OZFxFilter *)arg1 analysisExtension:(id)arg2 decoder:(id)arg3 forTimeRange:(CDStruct_e83c9415)arg4;

@end

