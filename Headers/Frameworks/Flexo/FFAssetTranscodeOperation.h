//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FFAssetTranscodeRequest;

__attribute__((visibility("hidden")))
@interface FFAssetTranscodeOperation : NSOperation
{
    BOOL _isStatusOnly;
    FFAssetTranscodeRequest *_request;
}

@property(readonly, nonatomic) BOOL isStatusOnly; // @synthesize isStatusOnly=_isStatusOnly;
@property(readonly, nonatomic) FFAssetTranscodeRequest *request; // @synthesize request=_request;
- (void)main;
- (void)dealloc;
- (id)initForRequest:(id)arg1 statusOnly:(BOOL)arg2;

@end

