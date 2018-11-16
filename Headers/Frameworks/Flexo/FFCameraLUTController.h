//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAELUTRepositoryControllerHandler.h"
#import "PAELUTRepositoryControllerObserver.h"

@class FFMetadataDefinition, NSArray, NSMenu, NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface FFCameraLUTController : NSObject <PAELUTRepositoryControllerObserver, PAELUTRepositoryControllerHandler>
{
    id <FFCameraLUTControllerDelegate> _delegate;
    NSMenu *_menu;
    FFMetadataDefinition *_definition;
    NSArray *_currentItems;
    NSArray *_observedItems;
    NSMutableIndexSet *_supportedModes;
}

+ (id)customCameraLUTItemsPassingTest:(CDUnknownBlockType)arg1;
+ (void)enumerateCustomCameraLUTItemsUsingBlock:(CDUnknownBlockType)arg1;
+ (void)repositoryController:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSMutableIndexSet *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(readonly, nonatomic) NSArray *currentItems; // @synthesize currentItems=_currentItems;
@property(readonly, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(readonly, nonatomic) id <FFCameraLUTControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)controller:(id)arg1 ownsMenu:(id)arg2 selectedItem:(id *)arg3;
- (void)controller:(id)arg1 menu:(id)arg2 sender:(id)arg3 didSelectItem:(id)arg4;
- (void)controllerContentsDidChange:(id)arg1;
- (void)reloadDataOnMainTHread;
- (void)_reloadData;
- (id)selectedRepositoryItem;
- (id)_assetFromItem:(id)arg1;
- (id)_lutRepoItemForCustomCameraLUTProps:(id)arg1 ignoreOffline:(BOOL)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 menu:(id)arg2 definition:(id)arg3 currentItems:(id)arg4 supportedModes:(id)arg5;
- (void)_unregisterCurrentItemObservers;
- (void)_registerCurrentItemObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

