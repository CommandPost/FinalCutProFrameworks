//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoObjectTabController.h>

@class NSMutableArray, OZProjCtlrDelegate;

@interface OZProjectPublishingCtlr : OZAutoObjectTabController
{
    // Error parsing type: ^{OZScene=^^?^^?{PCHash128=[4I]}i{PCSharedMutex={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<std::__1::__thread_id>=A{__thread_id}}I{vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}^{ReaderInfo}{__compressed_pair<PCSharedMutex::ReaderInfo *, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}}}}{PCSharedMutex={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<std::__1::__thread_id>=A{__thread_id}}I{vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}^{ReaderInfo}{__compressed_pair<PCSharedMutex::ReaderInfo *, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}}}}{OZSceneSettings=^^?iiIBIdBdiiii{PCColor={ColorComponents=i[5d]}{PCColorSpaceHandle=^{CGColorSpace}}}iBIIdBBdi{PCString=^{__CFString}}IIdIIIBfiBiBdiiBi}{OZExportSettings=^^?IIIIIIBiiBBBIIIIIIII}{OZPublishSettings=^^?{vector<OZPublishSettings::Entry *, std::__1::allocator<OZPublishSettings::Entry *> >=^^{Entry}^^{Entry}{__compressed_pair<OZPublishSettings::Entry **, std::__1::allocator<OZPublishSettings::Entry *> >=^^{Entry}}}{OZChannelVaryingFolder=^^?^{OZFactory}^^?I{PCString=^{__CFString}}^{PCString}^{OZChannelFolder}QQ^v^{__CFString}^{__CFString}^{__CFString}^{OZChannelTimeConverter}^{vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> >}II}^{OZScene}BB{map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >={__tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> >=Q}}}}{OZChannelObjectRoot=^^?^{OZFactory}^^?I{PCString=^{__CFString}}^{PCString}^{OZChannelFolder}QQ^v^{__CFString}^{__CFString}^{__CFString}^{OZChannelTimeConverter}^{vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> >}II{?=qiIq}{PCTimeRange={?=qiIq}{?=qiIq}}BB^{OZObjectManipulator}^{OZTimeMarkerSet}{list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *> >={__list_node_base<OZSimulationBehavior *, void *>=^{__list_node_base<OZSimulationBehavior *, void *>}^{__list_node_base<OZSimulationBehavior *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSimulationBehavior *, void *> > >=Q}}{PCString=^{__CFString}}}{?=qiIq}{list<OZSceneNode *, std::__1::allocator<OZSceneNode *> >={__list_node_base<OZSceneNode *, void *>=^{__list_node_base<OZSceneNode *, void *>}^{__list_node_base<OZSceneNode *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSceneNode *, void *> > >=Q}}^{OZSceneNode}^{OZGroup}{set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >={__tree<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZElement *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<OZElement *> >=Q}}}{map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > >={__tree<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true> >=Q}}}{OZNodeMap={PCSpinLock={os_unfair_lock_s=I}}{unordered_map<unsigned int, OZObjectManipulator *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZObjectManipulator *> > >={__hash_table<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::hash<unsigned int>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::equal_to<unsigned int>, true> >=f}}}I^{OZObjectManipulator}}{PCTimeRange={?=qiIq}{?=qiIq}}{PCTimeRange={?=qiIq}{?=qiIq}}{PCTimeRange={?=qiIq}{?=qiIq}}{OZCurveSetListSerializer=^^?{vector<OZCurveSetSerializer *, std::__1::allocator<OZCurveSetSerializer *> >=^^{OZCurveSetSerializer}^^{OZCurveSetSerializer}{__compressed_pair<OZCurveSetSerializer **, std::__1::allocator<OZCurveSetSerializer *> >=^^{OZCurveSetSerializer}}}I}^{OZRenderManager}{OZGuideSet=^^?{__tree<OZGuide, std::__1::less<OZGuide>, std::__1::allocator<OZGuide> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZGuide, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<OZGuide> >=Q}}}II{vector<OZObjectManipulator *, std::__1::allocator<OZObjectManipulator *> >=^^{OZObjectManipulator}^^{OZObjectManipulator}{__compressed_pair<OZObjectManipulator **, std::__1::allocator<OZObjectManipulator *> >=^^{OZObjectManipulator}}}BBBB^{OZDocument}I{PCHash128=[4I]}{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}{map<PCHash128, PCMutexRef, std::__1::less<PCHash128>, std::__1::allocator<std::__1::pair<const PCHash128, PCMutexRef> > >={__tree<std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true>, std::__1::allocator<std::__1::__value_type<PCHash128, PCMutexRef> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PCHash128, PCMutexRef>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true> >=Q}}}{PCSpinLock={os_unfair_lock_s=I}}{list<OZCPPObserver *, std::__1::allocator<OZCPPObserver *> >={__list_node_base<OZCPPObserver *, void *>=^{__list_node_base<OZCPPObserver *, void *>}^{__list_node_base<OZCPPObserver *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZCPPObserver *, void *> > >=Q}}{set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >={__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned int> >=Q}}}Bi{atomic<bool>=AB}i{vector<OZLockingGroup *, std::__1::allocator<OZLockingGroup *> >=^^{OZLockingGroup}^^{OZLockingGroup}{__compressed_pair<OZLockingGroup **, std::__1::allocator<OZLockingGroup *> >=^^{OZLockingGroup}}}{atomic<bool>=AB}B{PCRenderModel=i{PCColorSpaceHandle=^{CGColorSpace}}f{PCColorSpaceHandle=^{CGColorSpace}}}BB}, name: _pScene
    BOOL _isInMotion;
    BOOL _isIncludingHeader;
    OZProjCtlrDelegate *_pProjDelegate;
    struct OZProjectNode *_pProjectNode;
    NSMutableArray *_pSelfReassociatingControllers;
    NSMutableArray *_pMaterialControllers;
    struct vector<std::__1::shared_ptr<OZStyle>, std::__1::allocator<std::__1::shared_ptr<OZStyle>>> _styles;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setPublishedNamesInCtlr:(id)arg1 settings:(struct OZPublishSettings *)arg2;
- (void)textSelectionChanged:(id)arg1;
- (void)materialsChanged:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)updateEnableState;
- (id)delegate;
- (void)reassociateMaterialChannels;
- (void)reassociateChannels;
- (void)retainStylesUsedByAssociatedChans:(const vector_b71873ec *)arg1;
- (void)didBuildUI;
- (void)buildUI:(id)arg1 forFolder:(struct OZChannelFolder *)arg2 context:(id)arg3;
- (void)buildUI:(id)arg1 forChannelBase:(struct OZChannelBase *)arg2 context:(id)arg3;
- (void)buildUI:(id)arg1 forChannel:(struct OZChannel *)arg2 context:(id)arg3;
- (BOOL)buildUIWithSceneNodes:(list_e89ce44a *)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithSceneNodes:(list_e89ce44a *)arg1 viewCtlrDelegate:(id)arg2 includeHeader:(BOOL)arg3 context:(id)arg4;

@end

