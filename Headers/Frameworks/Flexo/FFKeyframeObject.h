//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFCurveUIObject.h>

__attribute__((visibility("hidden")))
@interface FFKeyframeObject : FFCurveUIObject
{
    BOOL _rootKey;
}

- (BOOL)isRootKey;
- (void)setIsRootKey:(BOOL)arg1;
- (id)initWithLocation:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 assets:(id)arg3 parentLayer:(id)arg4 belowLayer:(id)arg5 timeline:(id)arg6;

@end

