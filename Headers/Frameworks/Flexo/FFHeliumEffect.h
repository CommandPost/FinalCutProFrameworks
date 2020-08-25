//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

@interface FFHeliumEffect : FFEffect
{
}

- (BOOL)effectVariesOverTime;
- (BOOL)useSourcePixelSpace;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (struct CGRect)getROIForOutput:(const struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 input:(id)arg3 pt:(id)arg4 downstreamPT:(id)arg5;
-     // Error parsing type: ^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}92@0:8^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}16@24@32Q40@48@56@64i72^{CGRect={CGPoint=dd}{CGSize=dd}}76^c84, name: _newInterlaceProgressiveConversionNode:inputImage:inputStream:index:context:requestedPT:format:filterQuality:newBoundsForInput:didConvert:
-     // Error parsing type: ^{HGTransform=^^?{atomic<unsigned int>=AI}{Matrix=[16d]}}24@0:8@16, name: newHGTransformFromPCMatrix44Double:
-     // Error parsing type: v32@0:8^{HGTransform=^^?{atomic<unsigned int>=AI}{Matrix=[16d]}}16@24, name: convertHGTransformBackToPixelTransformSpace:pixelTransform:
-     // Error parsing type: ^{HGTransform=^^?{atomic<unsigned int>=AI}{Matrix=[16d]}}24@0:8@16, name: createBaseTransformFromInversePixelTransform:
- (struct CGRect)updatePixelSpaceBounds:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2 pixelTransform:(id)arg3;
-     // Error parsing type: v112@0:8^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}16{?=qiIq}24@48@56@64@72{CGRect={CGPoint=dd}{CGSize=dd}}80, name: setParameterValuesForNode:atTime:withInputStream:context:pixelTransform:inputData:inputBounds:
- (void)setParameterValuesForNode:(CDStruct_fcaf9308)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (void)setParameterValuesForNode:(CDStruct_fcaf9308)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5 inputData:(id)arg6;
- (void)analyzeInputStream:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 pixelTransform:(id)arg4 downstreamPT:(id)arg5;
- (BOOL)hasVideo;
-     // Error parsing type: ^{HGNode=^^?{atomic<unsigned int>=AI}ii^viIii^fi^{HGShaderEntry}^^{HGNodeInput}i^{HGBitmap}BBBBB{set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >={__tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<HGNodeInput *> >=Q}}}i^{HGNode}{HGRect=iiii}{HGRect=iiii}^{HGRenderer}^{HGBitmap}^{HGNode}iii{HGRect=iiii}ii^{HGBitmap}{HGShaderBinding=[1i]iiiiiII}^{HGNodeChain}^{HGShaderEntry}iB{HGBlendingInfo=Qiiiiii}f}24@0:8@16, name: newNodeForContext:
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

