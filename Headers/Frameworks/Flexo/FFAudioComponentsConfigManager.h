//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAudioComponentsConfigWaveformManager, NSArray;

@interface FFAudioComponentsConfigManager : NSObject
{
    NSArray *m_objectList;
    FFAudioComponentsConfigWaveformManager *m_summaryWaveformManager;
    NSArray *m_componentWaveformManagers;
}

+ (id)defaultLayoutOptions;
+ (id)layoutOptionsFromXMLDocument:(id)arg1;
+ (id)XMLDocumentFromLayoutOptions:(id)arg1;
+ (id)layoutOptions;
+ (id)customLabelFromLayout:(id)arg1;
+ (id)layoutOptionsForNumAudioChannels:(int)arg1;
@property(readonly, nonatomic) NSArray *audioComponentsConfigObjects; // @synthesize audioComponentsConfigObjects=m_objectList;
- (BOOL)_actionAudioComponentSourcesToEnable:(id)arg1 toDisable:(id)arg2 actionName:(id)arg3 error:(id *)arg4;
- (BOOL)actionSetSpecialAudioPlayEnable:(BOOL)arg1 forAudioComponentSources:(id)arg2 error:(id *)arg3;
- (BOOL)actionSetAudioPlayEnableForAllAudioComponentSources:(BOOL)arg1 error:(id *)arg2;
- (BOOL)actionSetAudioPlayEnable:(BOOL)arg1 forAudioComponentSources:(id)arg2 error:(id *)arg3;
- (BOOL)actionSelectRoleComponentsMode:(int)arg1 error:(id *)arg2;
- (BOOL)actionUpdateToSelectedLayout:(id)arg1 error:(id *)arg2;
- (BOOL)actionHandlePopUpButtonSelection:(id)arg1 error:(id *)arg2;
- (void)clearMixdownRoleGroup:(id)arg1;
- (BOOL)supportsMixdownToRoleGroup;
- (BOOL)isMixdownToRoleGroup;
- (void)populateRoleComponentsModeMenu:(id)arg1;
- (void)populateLayoutMenu:(id)arg1;
- (void)populatePopUpButtonMenu:(id)arg1;
- (BOOL)supportsPopUpButton;
- (void)updateExpandState:(int)arg1;
- (int)expandState;
- (int)componentSourceType;
- (id)displayName;
- (id)componentWaveformManagers;
- (id)_newRoleBasedComponentWaveformManagers;
- (id)_newChannelBasedComponentWaveformManagers;
- (id)summaryWaveformManager;
- (void)refreshManager;
- (id)backingAnchoredObjects;
- (id)_library;
- (id)modelLockingObject;
- (void)dealloc;
- (id)initWithConfigLayoutKeys:(id)arg1;
- (id)initWithLayoutKey:(id)arg1 forAnchoredObjects:(id)arg2;

@end
