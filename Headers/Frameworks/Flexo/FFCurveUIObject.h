//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFCurveAssetLayer;

__attribute__((visibility("hidden")))
@interface FFCurveUIObject : NSObject
{
    CDStruct_1b6d18a9 _time;
    FFCurveAssetLayer *_layer;
    BOOL _isModelLayer;
}

- (id).cxx_construct;
- (long long)relativePosition:(id)arg1;
- (void)setLocation:(struct CGPoint)arg1;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)time;
- (struct CGPoint)location;
- (id)layer;
- (id)initWithLocation:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 asset:(id)arg3 parentLayer:(id)arg4 belowLayer:(id)arg5 timeline:(id)arg6;

@end

