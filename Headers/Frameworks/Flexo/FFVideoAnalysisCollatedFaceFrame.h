//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoAnalysisCollatedItemFrame.h>

__attribute__((visibility("hidden")))
@interface FFVideoAnalysisCollatedFaceFrame : FFVideoAnalysisCollatedItemFrame
{
    double _angle;
    double _junkiness;
}

@property(readonly, nonatomic) double junkiness; // @synthesize junkiness=_junkiness;
@property(readonly, nonatomic) double angle; // @synthesize angle=_angle;
- (id)description;
- (id)sceneProperties;
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1 durationTime:(CDStruct_1b6d18a9)arg2 boundingBox:(struct CGRect)arg3 motion:(double)arg4 angle:(double)arg5 junkiness:(double)arg6;

@end

