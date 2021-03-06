//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDestRenderer.h>

@class FFAnchoredObject, FFAsset, NSString;

__attribute__((visibility("hidden")))
@interface FFDestAnalyzerController : FFDestRenderer
{
    FFAnchoredObject *_anchoredObject;
    FFAsset *_asset;
    NSString *_dataFilePath;
}

@property(readonly, nonatomic) NSString *dataFilePath; // @synthesize dataFilePath=_dataFilePath;
@property(readonly, nonatomic) FFAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObject;
- (int)createDataFiles;
- (void)dealloc;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 anchoredObject:(id)arg2 asset:(id)arg3;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 clip:(id)arg2 asset:(id)arg3;

@end

