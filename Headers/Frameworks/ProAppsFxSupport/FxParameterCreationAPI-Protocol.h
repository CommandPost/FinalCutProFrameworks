//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;
@protocol NSCoding;

@protocol FxParameterCreationAPI
- (BOOL)endParameterSubGroup;
- (BOOL)startParameterSubGroup:(NSString *)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addCustomParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(id <NSCoding>)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addImageReferenceWithName:(NSString *)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addPopupMenuWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(NSArray *)arg4 parmFlags:(unsigned int)arg5;
- (BOOL)addPointParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (BOOL)addColorParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parmFlags:(unsigned int)arg7;
- (BOOL)addColorParameterWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 parmFlags:(unsigned int)arg6;
- (BOOL)addAngleSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 parmFlags:(unsigned int)arg6;
- (BOOL)addToggleButtonWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(BOOL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addIntSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 delta:(int)arg8 parmFlags:(unsigned int)arg9;
- (BOOL)addFloatSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
@end

