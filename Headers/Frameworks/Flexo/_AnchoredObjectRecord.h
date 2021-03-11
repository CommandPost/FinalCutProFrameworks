//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHChannelFolder, FFAnchoredObject, FFEffect, FFEffectStack, NSData;

__attribute__((visibility("hidden")))
@interface _AnchoredObjectRecord : NSObject
{
    FFAnchoredObject *_anchoredObject;
    FFEffect *_intermediateEffect;
    unsigned int _intermediateChannelFolderID;
    FFEffectStack *_trackedEffectStack;
    id _trackedEffectContainer;
    FFEffect *_trackedEffect;
    NSData *_datedCopyChannelFolder;
    NSData *_datedCopyExtendedData;
    CHChannelFolder *_parentFolder;
    NSData *_keptStateChannelFolder;
    NSData *_keptStateExtendedData;
}

@property(copy, nonatomic) NSData *keptStateExtendedData; // @synthesize keptStateExtendedData=_keptStateExtendedData;
@property(nonatomic) CHChannelFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(copy, nonatomic) NSData *datedCopyExtendedData; // @synthesize datedCopyExtendedData=_datedCopyExtendedData;
@property(nonatomic) FFEffect *trackedEffect; // @synthesize trackedEffect=_trackedEffect;
@property(nonatomic) FFEffectStack *trackedEffectStack; // @synthesize trackedEffectStack=_trackedEffectStack;
@property unsigned int intermediateChannelFolderID; // @synthesize intermediateChannelFolderID=_intermediateChannelFolderID;
@property(retain, nonatomic) FFEffect *intermediateEffect; // @synthesize intermediateEffect=_intermediateEffect;
@property(nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObject;
@property(readonly) BOOL hadPriorAdjustment; // @dynamic hadPriorAdjustment;
@property(readonly) BOOL hadPriorEffect; // @dynamic hadPriorEffect;
- (id)keptStateChannelFolder;
- (void)setKeptIntermediateStateChannelFolder:(id)arg1;
- (id)datedCopyChannelFolder;
- (void)setDatedCopyChannelFolder:(id)arg1;
@property(nonatomic) FFEffect *trackedEffectContainer; // @dynamic trackedEffectContainer;
- (void)dealloc;

@end

