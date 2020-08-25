//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelColor;

__attribute__((visibility("hidden")))
@interface FFHeSolidColorEffect : FFHeliumEffect
{
    CHChannelColor *_chColor;
}

+ (void)registerEffects;
- (BOOL)useSourcePixelSpace;
- (BOOL)supportsReentrancy;
- (BOOL)outputIsFullyTransparentAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)effectIntroducesAlpha;
- (float)costAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (id)inputKeys;
-     // Error parsing type: v112@0:8^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}16{?=qiIq}24@48@56@64@72{CGRect={CGPoint=dd}{CGSize=dd}}80, name: setParameterValuesForNode:atTime:withInputStream:context:pixelTransform:inputData:inputBounds:
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (id)processingFormat:(int)arg1;
-     // Error parsing type: ^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16, name: newNodeForPixelSpaceBounds:
- (void)createChannelsInFolder:(id)arg1;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

