//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFColorSpaceCacheRecord : NSObject
{
    struct CGColorSpace *_colorSpace;
    struct ColorSyncProfile *_colorSyncProfile;
    struct __CFArray *_colorProfRelevantTagSignatures;
    struct __CFData *_iccData;
    int _colorSpaceEnum;
}

@property(readonly, nonatomic) struct __CFData *iccColorSpaceData; // @synthesize iccColorSpaceData=_iccData;
@property(readonly, nonatomic) int colorSpaceEnum; // @synthesize colorSpaceEnum=_colorSpaceEnum;
@property(readonly, nonatomic) struct __CFArray *colorProfRelevantTagSignatures; // @synthesize colorProfRelevantTagSignatures=_colorProfRelevantTagSignatures;
@property(readonly, nonatomic) struct ColorSyncProfile *colorSyncProfile; // @synthesize colorSyncProfile=_colorSyncProfile;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (id)description;
- (void)dealloc;
- (id)initWithColorSpace:(struct CGColorSpace *)arg1 andEnum:(int)arg2;

@end

