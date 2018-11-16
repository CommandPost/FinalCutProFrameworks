//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class NSPopUpButton, PIParameterPulldown;

@interface OZChanEnumController : OZViewControllerGroup
{
    NSPopUpButton *_pPopUp;
    PIParameterPulldown *_pParamPulldown;
    BOOL _areAllChansEqual;
    struct set<int, std::less<int>, std::allocator<int>> *_pDisabledItemIndices;
    struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int>>> *_pDisplayValueMap;
    struct vector<unsigned int, std::allocator<unsigned int>> *_pStringsTableChangeCounts;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)enableItemForValue:(unsigned int)arg1 isEnabled:(BOOL)arg2;
- (void)mapValue:(int)arg1 toDisplayValue:(int)arg2;
- (int)valueForChannel:(struct OZChannelEnum *)arg1;
- (void)updatePopUpMenu:(BOOL)arg1;
- (void)setValue:(int)arg1 forChannel:(struct OZChannelEnum *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)setChannelValue:(id)arg1;
- (BOOL)hasControls;
- (void)disable;
- (void)enable;
- (void)update;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

