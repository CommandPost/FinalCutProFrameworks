//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FxPlug/FxPin.h>

@interface FxPinParameter : FxPin
{
    id defaultValue;
    Class customUI;
    struct FxPinParameterPriv *_paramPriv;
}

- (void)setCustomPinControl:(Class)arg1;
- (Class)customPinControl;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (void)dealloc;
- (id)init;

@end

