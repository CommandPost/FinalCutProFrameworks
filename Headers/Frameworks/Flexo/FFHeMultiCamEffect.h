//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

__attribute__((visibility("hidden")))
@interface FFHeMultiCamEffect : FFHeliumEffect
{
    long long _angle;
    long long _numberOfRows;
    long long _numberOfCols;
}

+ (long long)adjustedAngleOffsetUsingCount:(long long)arg1 angleOffset:(long long)arg2 angleCount:(long long)arg3;
+ (void)multiAngleRowsAndColumnCountFromNumberOfAngles:(long long)arg1 rows:(long long *)arg2 columns:(long long *)arg3;
+ (long long)getAngleNumberForMulticamInputString:(id)arg1;
+ (id)getInputKeyForMultiCamAngle:(long long)arg1;
+ (id)getMultiCamNumberedInputKeysArray;
+ (void)registerEffects;
- (BOOL)supportsReentrancy;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (CDStruct_bdcb2b0d)md5;
-     // Error parsing type: v112@0:8^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}16{?=qiIq}24@48@56@64@72{CGRect={CGPoint=dd}{CGSize=dd}}80, name: setParameterValuesForNode:atTime:withInputStream:context:pixelTransform:inputData:inputBounds:
- (int)_row;
- (int)_column;
- (long long)_workingScale;
- (void)setNumberOfCols:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setAngle:(unsigned long long)arg1;
- (id)inputKeys;
-     // Error parsing type: ^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}24@0:8@16, name: newNodeForContext:
- (id)initWithEffectID:(id)arg1;

@end

