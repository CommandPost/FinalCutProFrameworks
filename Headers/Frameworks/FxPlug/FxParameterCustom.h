//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FxPlug/FxPinParameter.h>

#import <FxPlug/FxCustomParameterDefinition-Protocol.h>

@interface FxParameterCustom : FxPinParameter <FxCustomParameterDefinition>
{
    struct FxParameterCustomPriv *_customPriv;
}

- (id)valueFromData:(id)arg1;
- (id)dataFromValue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

