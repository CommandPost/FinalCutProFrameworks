//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFWaveformGraticuleLayer.h>

__attribute__((visibility("hidden")))
@interface FFWaveformGraticuleUnitLayer : FFWaveformGraticuleLayer
{
    long long _code;
    long long _compositeVideoUnits;
    long long _viewMode;
    CDStruct_554002f2 _action_opt;
}

- (void)setCode:(long long)arg1;
- (void)setViewMode:(long long)arg1;
- (void)setCompositeVideoUnits:(long long)arg1;
- (struct CGRect)frameForBounds:(struct CGRect)arg1;
- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;

@end

