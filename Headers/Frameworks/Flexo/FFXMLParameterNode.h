//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXMLElement;

__attribute__((visibility("hidden")))
@interface FFXMLParameterNode : NSObject
{
    NSString *_name;
    NSString *_paramKey;
    NSString *_value;
    NSMutableArray *_keyframes;
    NSMutableArray *_subnodes;
    CDStruct_1b6d18a9 _fadeIn;
    CDStruct_1b6d18a9 _fadeOut;
    int _fadeInType;
    int _fadeOutType;
    BOOL _isDefault;
    BOOL _saveWhenAtDefaultState;
    BOOL _disabled;
    BOOL _canBeDisabled;
    BOOL _disabledByDefault;
    NSXMLElement *_sourceXMLElement;
    NSString *_initialValue;
}

@property(retain, nonatomic) NSXMLElement *sourceXMLElement; // @synthesize sourceXMLElement=_sourceXMLElement;
@property(nonatomic) BOOL disabledByDefault; // @synthesize disabledByDefault=_disabledByDefault;
@property(nonatomic) BOOL canBeDisabled; // @synthesize canBeDisabled=_canBeDisabled;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL saveWhenAtDefaultState; // @synthesize saveWhenAtDefaultState=_saveWhenAtDefaultState;
@property(nonatomic) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *initialValue; // @synthesize initialValue=_initialValue;
@property(retain, nonatomic) NSString *paramKey; // @synthesize paramKey=_paramKey;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyAsVector;
- (BOOL)isVector;
- (BOOL)_checkUniformKeyframes:(id *)arg1 count:(unsigned long long)arg2;
- (void)removeObjectFromSubnodesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSubnodesAtIndex:(unsigned long long)arg2;
- (id)subnodeAtIndex:(unsigned long long)arg1;
- (id)subnodes;
- (unsigned long long)countOfSubnodes;
- (void)setFadeOutType:(int)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (void)setFadeInType:(int)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (int)fadeOutCurve;
- (int)fadeInCurve;
- (CDStruct_1b6d18a9)fadeOutDuration;
- (CDStruct_1b6d18a9)fadeInDuration;
- (void)setValue:(id)arg1 interpolation:(id)arg2 forTime:(CDStruct_1b6d18a9)arg3 smooth:(BOOL)arg4;
- (void)setValue:(id)arg1 interpolation:(id)arg2 forTime:(CDStruct_1b6d18a9)arg3;
- (unsigned long long)keyframeIndexForObject:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (id)keyframes;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)dealloc;

@end

