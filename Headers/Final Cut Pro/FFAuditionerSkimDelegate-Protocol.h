//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFContext, NSObject;
@protocol FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol;

@protocol FFAuditionerSkimDelegate
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (void)displayMedia:(NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3 unloadingBlock:(void (^)(void))arg4;
- (void)displayMedia:(NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3;
- (BOOL)startSkimmingWithSkimmable:(NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3 owner:(id)arg4;
- (BOOL)isSkimmingSkimmable:(NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFAssetContainerProtocol> *)arg1 context:(FFContext *)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
@end

