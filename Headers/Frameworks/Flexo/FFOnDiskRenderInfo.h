//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFRenderProps;

@interface FFOnDiskRenderInfo : NSObject
{
    FFRenderProps *_renderProps;
    int _processingInfo;
    CDStruct_bdcb2b0d _onDiskMD5Adjustment;
}

+ (id)rawUncompressedOnDiskRenderInfo;
+ (id)thumbnailOnDiskRenderInfo;
@property(readonly) CDStruct_bdcb2b0d onDiskMD5Adjustment; // @synthesize onDiskMD5Adjustment=_onDiskMD5Adjustment;
@property(readonly) int processingInfo; // @synthesize processingInfo=_processingInfo;
@property(readonly) FFRenderProps *renderProps; // @synthesize renderProps=_renderProps;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRenderPropsWithoutProcessingInfo:(id)arg1;
- (id)initWithRenderProps:(id)arg1 processingInfo:(int)arg2;

@end
