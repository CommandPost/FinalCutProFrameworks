//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarDelegate.h"
#import "OZObjCObserver.h"

@class NSArray, NSString, NSTouchBar, NSTouchBarItem, OZDFRItemFactory;

@interface OZDFRDocumentFunctionBarManager : NSObject <OZObjCObserver, NSTouchBarDelegate>
{
    id <OZDocumentOwner> _documentOwner;
    OZDFRItemFactory *_itemFactory;
    NSTouchBar *_touchBar;
    NSArray *_itemIdentifiers;
    NSTouchBarItem *_escapeKeyReplacementItem;
}

+ (id)identifiersForCurrentStateWithDocument:(struct OZDocument *)arg1 outEscapeKeyReplacementItem:(id *)arg2;
+ (id)documentFunctionBarManagerWithDocumentOwner:(id)arg1;
+ (BOOL)isItalicWithDocument:(struct OZDocument *)arg1;
+ (BOOL)canToggleItalicWithDocument:(struct OZDocument *)arg1;
+ (BOOL)isBoldWithDocument:(struct OZDocument *)arg1;
+ (BOOL)canToggleBoldWithDocument:(struct OZDocument *)arg1;
+ (BOOL)canApplyColorWithDocument:(struct OZDocument *)arg1;
+ (void)textAppearanceIsActiveFace:(_Bool *)arg1 outline:(_Bool *)arg2 glow:(_Bool *)arg3 dropShadow:(_Bool *)arg4 withDocument:(struct OZDocument *)arg5;
+ (BOOL)is3DTextWithDocument:(struct OZDocument *)arg1;
+ (double)kerningWithDocument:(struct OZDocument *)arg1;
+ (BOOL)canApplyKerningWithDocument:(struct OZDocument *)arg1;
+ (void)textAlignmentIsLeft:(_Bool *)arg1 isCenter:(_Bool *)arg2 isRight:(_Bool *)arg3 withDocument:(struct OZDocument *)arg4;
+ (BOOL)hasSelectionWithDocument:(struct OZDocument *)arg1;
+ (unsigned long long)selectedTextObjectCountWithSelectedItem:(id)arg1 withDocument:(struct OZDocument *)arg2;
+ (BOOL)isFCPBasedOnDocumentOwner:(id)arg1;
+     // Error parsing type: ^{OZTextInfoDelegate=^^?^{OZSceneNode}}24@0:8^{OZScene=^^?^^?{PCHash128=[4I]}i{PCSharedMutex={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<std::__1::__thread_id>=A{__thread_id}}I{vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}^{ReaderInfo}{__compressed_pair<PCSharedMutex::ReaderInfo *, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}}}}{PCSharedMutex={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<std::__1::__thread_id>=A{__thread_id}}I{vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}^{ReaderInfo}{__compressed_pair<PCSharedMutex::ReaderInfo *, std::__1::allocator<PCSharedMutex::ReaderInfo> >=^{ReaderInfo}}}}{OZSceneSettings=^^?iiIBIdBdiiii{PCColor={ColorComponents=i[5d]}{PCColorSpaceHandle=^{CGColorSpace}}}iBIIdBBdi{PCString=^{__CFString}}IIdIIIBfiBiBdiiBi}{OZExportSettings=^^?IIIIIIBiiBBBIIIIIIII}{OZPublishSettings=^^?{vector<OZPublishSettings::Entry *, std::__1::allocator<OZPublishSettings::Entry *> >=^^{Entry}^^{Entry}{__compressed_pair<OZPublishSettings::Entry **, std::__1::allocator<OZPublishSettings::Entry *> >=^^{Entry}}}{OZChannelVaryingFolder=^^?^{OZFactory}^^?I{PCString=^{__CFString}}^{PCString}^{OZChannelFolder}QQ^v^{__CFString}^{__CFString}^{__CFString}^{OZChannelTimeConverter}^{vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> >}II}^{OZScene}BB{map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >={__tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> >=Q}}}}{OZChannelObjectRoot=^^?^{OZFactory}^^?I{PCString=^{__CFString}}^{PCString}^{OZChannelFolder}QQ^v^{__CFString}^{__CFString}^{__CFString}^{OZChannelTimeConverter}^{vector<OZChannelBase *, std::__1::allocator<OZChannelBase *> >}II{?=qiIq}{PCTimeRange={?=qiIq}{?=qiIq}}BB^{OZObjectManipulator}^{OZTimeMarkerSet}{list<OZSimulationBehavior *, std::__1::allocator<OZSimulationBehavior *> >={__list_node_base<OZSimulationBehavior *, void *>=^{__list_node_base<OZSimulationBehavior *, void *>}^{__list_node_base<OZSimulationBehavior *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSimulationBehavior *, void *> > >=Q}}{PCString=^{__CFString}}}{?=qiIq}{list<OZSceneNode *, std::__1::allocator<OZSceneNode *> >={__list_node_base<OZSceneNode *, void *>=^{__list_node_base<OZSceneNode *, void *>}^{__list_node_base<OZSceneNode *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZSceneNode *, void *> > >=Q}}^{OZSceneNode}^{OZGroup}{set<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >={__tree<OZElement *, std::__1::less<OZElement *>, std::__1::allocator<OZElement *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZElement *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<OZElement *> >=Q}}}{map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > >={__tree<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *>, std::__1::less<unsigned int>, true> >=Q}}}{OZNodeMap={PCSpinLock={os_unfair_lock_s=I}}{unordered_map<unsigned int, OZObjectManipulator *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OZObjectManipulator *> > >={__hash_table<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::hash<unsigned int>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, OZObjectManipulator *>, std::__1::equal_to<unsigned int>, true> >=f}}}I^{OZObjectManipulator}}{PCTimeRange={?=qiIq}{?=qiIq}}{PCTimeRange={?=qiIq}{?=qiIq}}{PCTimeRange={?=qiIq}{?=qiIq}}{OZCurveSetListSerializer=^^?{vector<OZCurveSetSerializer *, std::__1::allocator<OZCurveSetSerializer *> >=^^{OZCurveSetSerializer}^^{OZCurveSetSerializer}{__compressed_pair<OZCurveSetSerializer **, std::__1::allocator<OZCurveSetSerializer *> >=^^{OZCurveSetSerializer}}}I}^{OZRenderManager}{OZGuideSet=^^?{__tree<OZGuide, std::__1::less<OZGuide>, std::__1::allocator<OZGuide> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<OZGuide, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<OZGuide> >=Q}}}II{vector<OZObjectManipulator *, std::__1::allocator<OZObjectManipulator *> >=^^{OZObjectManipulator}^^{OZObjectManipulator}{__compressed_pair<OZObjectManipulator **, std::__1::allocator<OZObjectManipulator *> >=^^{OZObjectManipulator}}}BBBB^{OZDocument}I{PCHash128=[4I]}{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}{map<PCHash128, PCMutexRef, std::__1::less<PCHash128>, std::__1::allocator<std::__1::pair<const PCHash128, PCMutexRef> > >={__tree<std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true>, std::__1::allocator<std::__1::__value_type<PCHash128, PCMutexRef> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PCHash128, PCMutexRef>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<PCHash128, std::__1::__value_type<PCHash128, PCMutexRef>, std::__1::less<PCHash128>, true> >=Q}}}{PCSpinLock={os_unfair_lock_s=I}}{list<OZCPPObserver *, std::__1::allocator<OZCPPObserver *> >={__list_node_base<OZCPPObserver *, void *>=^{__list_node_base<OZCPPObserver *, void *>}^{__list_node_base<OZCPPObserver *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZCPPObserver *, void *> > >=Q}}{set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >={__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned int, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned int> >=Q}}}Bi{atomic<bool>=AB}i{vector<OZLockingGroup *, std::__1::allocator<OZLockingGroup *> >=^^{OZLockingGroup}^^{OZLockingGroup}{__compressed_pair<OZLockingGroup **, std::__1::allocator<OZLockingGroup *> >=^^{OZLockingGroup}}}{atomic<bool>=AB}B{PCRenderModel=i{PCColorSpaceHandle=^{CGColorSpace}}f{PCColorSpaceHandle=^{CGColorSpace}}}BB}16, name: getTextInfoDelegateForCurrentlySelectedObjectInScene:
+ (struct OZTextInfoDelegate *)getTextInfoDelegateForCurrentlySelectedObjectInDocument:(struct OZDocument *)arg1;
+ (struct OZTextInfoDelegate *)getTextInfoDelegateForCurrentlySelectedObjectInDocumentOwner:(id)arg1;
+ (id)canvasModuleForDocumentOwner:(id)arg1;
+ (id)canvasModuleForDocument:(struct OZDocument *)arg1;
@property(retain, nonatomic) NSTouchBarItem *escapeKeyReplacementItem; // @synthesize escapeKeyReplacementItem=_escapeKeyReplacementItem;
@property(retain, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
- (void)onTextToolsDone;
- (void)updateToCurrentState;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)removeDocumentObserver;
- (void)addDocumentObserver;
- (void)notify:(unsigned int)arg1;
- (id)init;
- (id)initWithDocumentOwner:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

