//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamMetadata.h>

@class FFMovieInstanceFig;

__attribute__((visibility("hidden")))
@interface FFStreamMetadataFig : FFStreamMetadata
{
    FFMovieInstanceFig *_readerForStream;
}

+ (void)addDVRecordDateMetadataTo:(id)arg1 fromReader:(struct OpaqueFigFormatReader *)arg2;
- (id)metadata;
- (void)addGrowingFileMetadata:(id)arg1;
- (void)addMetadataTo:(id)arg1 fromReader:(struct OpaqueFigFormatReader *)arg2 forReader:(struct __CFString *)arg3;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 options:(id)arg3;

@end

