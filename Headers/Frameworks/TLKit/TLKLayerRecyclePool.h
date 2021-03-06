//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TLKLayerRecyclePool : NSObject
{
    BOOL _recyclesLayers;
    NSMapTable *_savedLayersByClass;
}

@property(retain, nonatomic) NSMapTable *savedLayersByClass; // @synthesize savedLayersByClass=_savedLayersByClass;
@property(nonatomic) BOOL recyclesLayers; // @synthesize recyclesLayers=_recyclesLayers;
- (BOOL)isEmpty;
- (void)drain;
- (id)popLayerForClass:(Class)arg1;
- (id)_storageArrayForClass:(Class)arg1;
- (void)pushLayer:(id)arg1;
- (id)_layerCountDescriptionForClass:(Class)arg1;
- (id)_layerCountDescriptionsByClass;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

