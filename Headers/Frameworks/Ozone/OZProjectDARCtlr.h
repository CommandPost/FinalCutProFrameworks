//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoObjectTabController.h>

@class OZProjCtlrDelegate;

@interface OZProjectDARCtlr : OZAutoObjectTabController
{
    // Error parsing type: ^{OZScene=^^?^^?{PCHash128=[4I]}i{OZSceneSettings=^^?iiIBIdBdii{PCColor={ColorComponents=i[5d]}{PCColorSpaceHandle=^{CGColorSpace}}}iBIIdBBdi{PCString=^{__CFString}}IIdIIIBfiBiBiiBi}{OZExportSettings=^^?IIIIIIBiiBBBIIIIIIII}{OZPublishSettings=^^?{vector<OZPublishSettings::Entry *, std::__1::allocator<OZPublishSettings::Entry *> >=^^{Entry}^^{Entry}{__compressed_pair<OZPublishSettings::Entry **, std::__1::allocator<OZPublishSettings::Entry *> >=^^{Entry}}}{OZChannelVaryingFolder=^^?^{OZFactory}^^?I{PCString=^{__CFString}}^{PCString}^{OZChannelFolder}QQ^v^{__CFString}^{__CFString}^{__CFString}^{OZChannelTimeConverter}^{vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> >}II}^{OZScene}BB{map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >={__tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> >=Q}}}}{OZChannelObjectRoot=^^?^{OZFactory}^^?I{PCString=^{__CFString}}^{PCString}^{OZChannelFolder}QQ^v^{__CFString}^{__CFString}^{__CFString}^{OZChannelTimeConverter}^{vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> >}II{?=qiIq}{PCTimeRange={?=qiIq}{?=qiIq}}BB^{OZObjectManipulator}^{OZTimeMarkerSet}{list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *> >={__list_node_base<OZSimulationBehavior *, void *>=^{__list_node_base<OZSimulationBehavior *, void *>}^{__list_node_base<OZSimulationBehavior *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSimulationBehavior *, void *> > >=Q}}{PCString=^{__CFString}}}{?=qiIq}{list<OZSceneNode *, std::__1::allocator<OZSceneNode *> >={__list_node_base<OZSceneNode *, void *>=^{__list_node_base<OZSceneNode *, void *>}^{__list_node_base<OZSceneNode *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSceneNode *, void *> > >=Q}}^{OZSceneNode}^{OZGroup}{set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >={__tree<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZElement *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<OZElement *> >=Q}}}{map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > >={__tree<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true> >=Q}}}{OZNodeMap=^I^^{OZObjectManipulator}iiI^{OZObjectManipulator}{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}}{PCTimeRange={?=qiIq}{?=qiIq}}{PCTimeRange={?=qiIq}{?=qiIq}}{PCTimeRange={?=qiIq}{?=qiIq}}{OZCurveSetListSerializer=^^?{vector<OZCurveSetSerializer *, std::__1::allocator<OZCurveSetSerializer *> >=^^{OZCurveSetSerializer}^^{OZCurveSetSerializer}{__compressed_pair<OZCurveSetSerializer **, std::__1::allocator<OZCurveSetSerializer *> >=^^{OZCurveSetSerializer}}}I}^{OZRenderManager}{OZGuideSet=^^?{__tree<OZGuide, std::__1::less<OZGuide>, std::__1::allocator<OZGuide> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZGuide, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<OZGuide> >=Q}}}II{vector<OZObjectManipulator *, std::__1::allocator<OZObjectManipulator *> >=^^{OZObjectManipulator}^^{OZObjectManipulator}{__compressed_pair<OZObjectManipulator **, std::__1::allocator<OZObjectManipulator *> >=^^{OZObjectManipulator}}}BBBB^{OZDocument}I{PCHash128=[4I]}{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}{map<PCHash128, PCMutexRef, std::__1::less<PCHash128>, std::__1::allocator<std::__1::pair<const PCHash128, PCMutexRef> > >={__tree<std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true>, std::__1::allocator<std::__1::__value_type<PCHash128, PCMutexRef> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PCHash128, PCMutexRef>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true> >=Q}}}{PCSpinLock={os_unfair_lock_s=I}}{list<OZCPPObserver *, std::__1::allocator<OZCPPObserver *> >={__list_node_base<OZCPPObserver *, void *>=^{__list_node_base<OZCPPObserver *, void *>}^{__list_node_base<OZCPPObserver *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZCPPObserver *, void *> > >=Q}}{set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >={__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned int> >=Q}}}BiB{atomic<bool>=AB}i{vector<OZLockingGroup *, std::__1::allocator<OZLockingGroup *> >=^^{OZLockingGroup}^^{OZLockingGroup}{__compressed_pair<OZLockingGroup **, std::__1::allocator<OZLockingGroup *> >=^^{OZLockingGroup}}}{PCRenderModel=i{PCColorSpaceHandle=^{CGColorSpace}}f{PCColorSpaceHandle=^{CGColorSpace}}}{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}BB}, name: _pScene
    BOOL _isInMotion;
    OZProjCtlrDelegate *_pProjDelegate;
    struct OZProjectNode *_pProjectNode;
}

- (BOOL)buildUIWithSceneNodes:(list_e89ce44a *)arg1 context:(id)arg2;

@end

