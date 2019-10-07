//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZSceneNodeDragTarget.h>

#import "OZRenderClient.h"

@interface OZMoveableImageDragTarget : OZSceneNodeDragTarget <OZRenderClient>
{
    double _offsetX;
    double _offsetY;
    struct CGPoint _startingLocation;
    double _startingOffsetX;
    double _startingOffsetY;
    int _imageWidth;
    int _imageHeight;
    _Bool _isMovingImage;
}

-     // Error parsing type: v32@0:8^{OZHGRenderNode=^^?{atomic<unsigned int>=AI}^{HGNode}^{HGBitmap}{HGRect=iiii}iBiii{shared_ptr<const HGComputeDevice>=^{HGComputeDevice}^{__shared_weak_count}}{HGRef<HGGLContext>=^{HGGLContext}}Bdddd^{HGPixelBufferObj}Q^v*^?d^{HGRenderer}^{HGRenderJob}^{HGRenderQueue}{OZRenderParams={OZRenderState={?=qiIq}dddI^{OZTransformNode}B{PCMatrix44Tmpl<double>=[4[4d]]}BBBBBB^{OZRenderNode}iB^{OZElement}BBBBBBBBi{TransformSet=Q}^{set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >}}B^{OZProcessControl}^{GLRenderer}{shared_ptr<const HGComputeDevice>=^{HGComputeDevice}^{__shared_weak_count}}{shared_ptr<const HGComputeDevice>=^{HGComputeDevice}^{__shared_weak_count}}{PCImageAttributes=iIIIIi{PCColorSpaceHandle=^{CGColorSpace}}IiB^vQ^v}{PCHash128=[4I]}{PCHash128=[4I]}B{PCVector2<double>=dd}{PCVector2<double>=dd}iiiiBBBBBBBBBiBIdBBBBBB{PCColor={ColorComponents=i[5d]}{PCColorSpaceHandle=^{CGColorSpace}}}iB{PCRect<double>=dddd}{PCRect<double>=dddd}{PCRect<int>=iiii}{PCRect<double>=dddd}Bi^{CGColorSpace}f{PCColorSpaceHandle=^{CGColorSpace}}i{PCColorSpaceHandle=^{CGColorSpace}}{PCMatrix44Tmpl<double>=[4[4d]]}B{OZPlaybackEngine=ii}@@{?=qiIq}^{map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > >}^{map<unsigned int, FFStreamVideo *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, FFStreamVideo *> > >}{map<unsigned int, CMTime, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, CMTime> > >={__tree<std::__1::__value_type<unsigned int, CMTime>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, CMTime>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, CMTime> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, CMTime>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, CMTime>, std::__1::less<unsigned int>, true> >=Q}}}{map<unsigned int, CMTime, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, CMTime> > >={__tree<std::__1::__value_type<unsigned int, CMTime>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, CMTime>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, CMTime> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, CMTime>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, CMTime>, std::__1::less<unsigned int>, true> >=Q}}}{map<unsigned int, PCRect<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCRect<double> > > >={__tree<std::__1::__value_type<unsigned int, PCRect<double> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCRect<double> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PCRect<double> > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PCRect<double> >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCRect<double> >, std::__1::less<unsigned int>, true> >=Q}}}{map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >={__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true> >=Q}}}{map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >={__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true> >=Q}}}d@{?=qiIq}{?=qiIq}{?=qiIq}{?=qiIq}{?=qiIq}BBBB{shared_ptr<PCImage>=^{PCImage}^{__shared_weak_count}}BB{PCPtr<OZRenderParams::SharedInfo>=^{SharedInfo}{PCSharedCount=^{PC_Sp_counted_base}}}ddB{PCPtr<LiCamera>=^{LiCamera}{PCSharedCount=^{PC_Sp_counted_base}}}{PCPtr<LiCamera>=^{LiCamera}{PCSharedCount=^{PC_Sp_counted_base}}}BB{LiRenderingTechnology=IiiiBBBBBiiBBBiiB}{LiLightSet={PCArray<LiLight, PCArray_Traits<LiLight> >=^^?ii^{LiLight}}B}B{HGRef<HGCVBitmap>=^{HGCVBitmap}}BBB}{?=qiIq}{PCHash128=[4I]}@@{OZProcessControl=^^?{atomic<bool>=AB}^{PCSemaphore}^{PCMutex}q^?^{HGRenderer}}^vBBQdd{shared_ptr<PCImage>=^{PCImage}^{__shared_weak_count}}{shared_ptr<const HGComputeDevice>=^{HGComputeDevice}^{__shared_weak_count}}}16r^{shared_ptr<OZRenderResult>=^{OZRenderResult}^{__shared_weak_count}}24, name: renderNodeFinished:result:
- (void)moveableImageRenderReady:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)display:(struct OZRenderNode *)arg1 forTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)setController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

