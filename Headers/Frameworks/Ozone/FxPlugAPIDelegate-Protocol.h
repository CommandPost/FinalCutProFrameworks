//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol FxPlugAPIDelegate
- (void)updateKeyframeEditor;
- (NSString *)displayName;
- (void)postChannelChange:(struct OZChannelBase *)arg1 flagsOnly:(BOOL)arg2;
- (void)preChannelChange:(struct OZChannelBase *)arg1 flagsOnly:(BOOL)arg2;
- (void)abortAndWait;
- (void)endOperationWithChannel:(struct OZChannelBase *)arg1;
- (void)beginOperationWithChannel:(struct OZChannelBase *)arg1;
- (BOOL)usesRationalTime;
- (void)endTimingOperation:(void *)arg1;
- (void *)beginTimingOperation:(CDStruct_1b6d18a9)arg1 forChannel:(struct OZChannelBase *)arg2;
- (CDUnion_2516e51e)figTimeToFxTime:(const CDStruct_1b6d18a9 *)arg1 withConversionData:(void *)arg2;
- (CDStruct_1b6d18a9)fxTimeToFigTime:(CDUnion_2516e51e)arg1 withConversionData:(void *)arg2;
- (CDStruct_1b6d18a9)convertToFigTime:(double)arg1;
- (double)convertFromFigTime:(const CDStruct_1b6d18a9 *)arg1;
- (void)updateInspector;
- (void)markForDynamicParameterUsage;
- (void)removeParameter:(unsigned int)arg1;
- (struct OZChannelBase *)parameterAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (struct OZChannelBase *)channelWithID:(int)arg1;
- (struct OZChannelFolder *)rootChannel;
@end

