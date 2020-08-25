//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFHeConformEffect : FFHeliumEffect
{
    CHChannelEnum *_chType;
}

+ (void)registerEffects;
- (BOOL)supportsReentrancy;
- (BOOL)useSourcePixelSpace;
- (BOOL)effectIntroducesAlpha;
- (CDStruct_bdcb2b0d)md5;
- (BOOL)effectVariesOverTime;
- (BOOL)isNoOp;
- (int)_getTypeOfSpecialConform;
- (id)inputKeys;
- (unsigned int)intrinsicCacheFlag;
- (void)createChannelsInFolder:(id)arg1;
- (void)modifyImageTransform:(id)arg1 andImageSpaceBounds:(struct CGRect *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (struct CGRect)getROIForOutput:(const struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 input:(id)arg3 pt:(id)arg4 downstreamPT:(id)arg5;
- (id)newUpdatedDownstreamPT:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
-     // Error parsing type: v112@0:8^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}16{?=qiIq}24@48@56@64@72{CGRect={CGPoint=dd}{CGSize=dd}}80, name: setParameterValuesForNode:atTime:withInputStream:context:pixelTransform:inputData:inputBounds:
- (void)computeConformScaleX:(double *)arg1 scaleY:(double *)arg2 frameBounds:(struct CGRect *)arg3 squareInputBounds:(struct CGRect *)arg4;
- (void)computeConformScaleX:(double *)arg1 scaleY:(double *)arg2 frameBounds:(struct CGRect *)arg3 squareInputBounds:(struct CGRect *)arg4 scaleType:(int)arg5;
-     // Error parsing type: ^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}24@0:8@16, name: newNodeForContext:
- (void)printTransform:(id)arg1 header:(id)arg2;
- (BOOL)writeDefaultChannels;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

