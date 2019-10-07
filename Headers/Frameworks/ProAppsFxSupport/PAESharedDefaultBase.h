//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAESharedDefaultBase : NSObject
{
    id <PROAPIAccessing> _apiManager;
    BOOL _upscalesFields;
    BOOL _hostIsFinalCutPro;
    BOOL _hostIsVertigo;
    BOOL _ignorePixelAspectRatio;
}

- (float)getBlendingGamma;
- (void)fxTime:(CDUnion_2516e51e *)arg1 fromFrame:(double)arg2 forPlugIn:(id)arg3;
- (double)frameFromFxTime:(CDUnion_2516e51e)arg1 forPlugIn:(id)arg2;
- (double)frameRate;
- (double)secondsFromFxTime:(CDUnion_2516e51e)arg1;
- (double)relativeShutterForAngle:(double)arg1;
- (BOOL)getPoint:(PCVector2_79efa81a *)arg1 fromParm:(unsigned int)arg2 atTime:(CDUnion_2516e51e)arg3 withImage:(id)arg4;
- (BOOL)ignoresPixelAspectRatio;
- (void)setIgnoresPixelAspectRatio:(BOOL)arg1;
- (HGRef_0de1db7e)transformFromImage:(id)arg1 toImage:(id)arg2 fit:(BOOL)arg3;
- (void)transform:(HGRef_0de1db7e *)arg1 fromImage:(id)arg2 toImage:(id)arg3 fit:(BOOL)arg4;
- (BOOL)smear:(HGRef_0de1db7e)arg1 fromImage:(id)arg2 toImage:(id)arg3 resultNode:(HGRef_0de1db7e *)arg4;
- (HGRef_0de1db7e)smear:(HGRef_0de1db7e)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (HGRef_0de1db7e)cropFromImage:(id)arg1 toImage:(id)arg2;
- (void)crop:(HGRef_0de1db7e *)arg1 withRect:(PCRect_7f811c82)arg2;
- (void)crop:(HGRef_0de1db7e *)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (BOOL)getCropRectFromImage:(id)arg1 toImage:(id)arg2 output:(PCRect_7f811c82 *)arg3;
- (PCRect_7f811c82)getCropRectFromImage:(id)arg1 toImage:(id)arg2;
- (PCRect_7f811c82)getImageBoundary:(id)arg1;
- (PCVector2_79efa81a)convertRelativeToPixelCoordinates:(const PCVector2_79efa81a *)arg1 withImage:(id)arg2;
- (PCVector2_79efa81a)convertRelativeToImageCoordinates:(const PCVector2_79efa81a *)arg1 withImage:(id)arg2;
- (PCMatrix44Tmpl_93ed1289)getInversePixelTransformForImage:(id)arg1;
- (PCVector2_79efa81a)getScaleForImage:(id)arg1;
- (PCMatrix44Tmpl_93ed1289)getPixelTransformForImage:(id)arg1;
- (BOOL)getHeliumImage:(id *)arg1 source:(BOOL)arg2 withInfo:(CDStruct_6b9ed609)arg3 atTime:(CDUnion_2516e51e)arg4;
- (BOOL)getHeliumImage:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_6b9ed609)arg4 fromParm:(int)arg5 atTime:(CDUnion_2516e51e)arg6;
- (HGRef_0de1db7e)getHeliumNodeFromImage:(id)arg1 withInfo:(CDStruct_6b9ed609)arg2;
- (HGRef_0de1db7e)changeDOD:(HGRef_0de1db7e)arg1 withRect:(const PCRect_3a266109 *)arg2;
- (HGRef_0de1db7e)getHGNodeFromImage:(id)arg1 hgBitmap:(HGRef_d4bae446 *)arg2 withInfo:(CDStruct_6b9ed609)arg3;
- (void)renderHelium:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_6b9ed609)arg3 withNode:(HGRef_0de1db7e)arg4;
- (void)overrideFrameSetupForRenderMode:(CDStruct_6b9ed609)arg1 hardware:(char *)arg2 software:(char *)arg3;
- (int)getRenderMode:(CDUnion_2516e51e)arg1;
-     // Error parsing type: ^{HGRenderer=^^?{atomic<unsigned int>=AI}^{HGNode}^{HGBitmap}[8{HGRendererTextureUnit=^{HGBitmap}^{HGTransform}i}]{vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> >=^^{DepthBufferManager}^^{DepthBufferManager}{__compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> >=^^{DepthBufferManager}}}{vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> >=^^{HGExecutionUnit}^^{HGExecutionUnit}{__compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> >=^^{HGExecutionUnit}}}^{HGExecutionData}^{HGSyncData}{_opaque_pthread_rwlock_t=q[192c]}{_opaque_pthread_mutex_t=q[56c]}^{HGLUTCacheManager}^{GraphStats}^{RendererStats}iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii{HGCache=^^?i^{HGCacheEntry}^{HGCacheEntry}^{HGCacheEntry}{_opaque_pthread_mutex_t=q[56c]}}BBBI[2^{HGLimits}]i{HGDotGraph={map<unsigned long, HGDotGraph::Node, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, HGDotGraph::Node> > >={__tree<std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, HGDotGraph::Node> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, HGDotGraph::Node>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::less<unsigned long>, true> >=Q}}}{map<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge, std::__1::less<std::__1::tuple<unsigned long, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge> > >={__tree<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::__map_value_compare<std::__1::tuple<unsigned long, unsigned long>, std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::less<std::__1::tuple<unsigned long, unsigned long> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::tuple<unsigned long, unsigned long>, std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::less<std::__1::tuple<unsigned long, unsigned long> >, true> >=Q}}}^{__sFILE}BB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}}{HGBufferDumper={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}iiB}IiQQi^{HGLimitsCache}^{HGRenderQueue}^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}}80@0:8i16{?=(?=d^{?})QQdd^{_CGLContextObject}Q}20B76, name: getHGRenderer:withInfo:isProfiling:
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(CDStruct_6b9ed609)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)addParameters;
- (id)properties;
- (BOOL)variesOverTime;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;

@end

