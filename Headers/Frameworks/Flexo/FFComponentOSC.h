//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class FFEffectStack;

@interface FFComponentOSC : FFOSC
{
    FFEffectStack *_effectStack;
}

- (BOOL)containsTime:(CDStruct_1b6d18a9)arg1 forContainer:(id)arg2 useEntireTransitionRange:(BOOL)arg3;
- (void)componentBottomLeft:(struct CGPoint *)arg1 topLeft:(struct CGPoint *)arg2 topRight:(struct CGPoint *)arg3 bottomRight:(struct CGPoint *)arg4 inFilmSpaceAtTime:(CDStruct_1b6d18a9)arg5;
- (void)componentBottomLeft:(struct CGPoint *)arg1 topLeft:(struct CGPoint *)arg2 topRight:(struct CGPoint *)arg3 bottomRight:(struct CGPoint *)arg4 inViewSpaceAtTime:(CDStruct_1b6d18a9)arg5;
- (struct CGRect)inputBoundsForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (struct CGRect)imageSpaceBounds;
- (struct CGRect)componentBoundsInComponentSpace;
- (struct CGPoint)componentCenterInViewSpaceAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)convertViewPoint:(struct CGPoint)arg1 toComponentSpaceAtTime:(CDStruct_1b6d18a9)arg2;
- (struct CGPoint)convertComponentPoint:(struct CGPoint)arg1 toViewSpaceAtTime:(CDStruct_1b6d18a9)arg2;
- (struct CGPoint)convertComponentPoint:(struct CGPoint)arg1 toFilmSpaceAtTime:(CDStruct_1b6d18a9)arg2;
- (id)viewToComponentSpaceTransformForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)componentToViewSpaceTransformForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)viewToComponentSpaceTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (id)componentToViewSpaceTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (id)transformBetweenStartEffect:(long long)arg1 andEndEffect:(long long)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)componentTransformForEffectObject:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)componentTransformForEffect:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)componentTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)convertFilmPointToViewSpace:(struct CGPoint)arg1;
- (id)viewToFilmSpaceTransform;
- (id)filmToViewSpaceTransform;
- (CDStruct_1b6d18a9)currentChannelTime;
- (CDStruct_1b6d18a9)playerTimeForChannelTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)channelTimeForTime:(CDStruct_1b6d18a9)arg1;
- (id)effectStack;
- (void)dealloc;
- (id)initWithEffectStack:(id)arg1;

@end

