//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import <Flexo/NSCopying-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class FFObjectDict, NSMapTable, NSMutableArray, NSObject;
@protocol FFAudioComponentsLayoutMapDelegate;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsLayoutMap : FFBaseDSObject <NSSecureCoding, NSCopying>
{
    NSObject<FFAudioComponentsLayoutMapDelegate> *_delegate;
    FFObjectDict *_layoutMap;
    NSMutableArray *_changeInfoStack;
    NSMapTable *_layoutItemCache;
}

+ (BOOL)supportsSecureCoding;
+ (Class)layoutClass;
+ (id)copyClassDescription;
@property(retain, nonatomic) FFObjectDict *layoutMap; // @synthesize layoutMap=_layoutMap;
@property(nonatomic) NSObject<FFAudioComponentsLayoutMapDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)didChangeAudioComponentsLayout:(void *)arg1;
- (void *)_willChangeAudioComponentsLayoutMapForKeys:(id)arg1 changeInfo:(id)arg2;
- (void *)willChangeAudioComponentsLayoutForKey:(id)arg1 changeInfo:(id)arg2;
- (void *)willChangeAudioComponentsLayoutForKeys:(id)arg1 changeInfo:(id)arg2;
- (void *)willChangeAudioComponentsLayout:(id)arg1;
- (void)_didChangeAudioComponentsLayoutMap:(id)arg1;
- (void)_willChangeAudioComponentsLayoutMap:(id)arg1;
- (void)notifyDidChangeLayoutMap:(id)arg1;
- (void)notifyWillChangeLayoutMap:(id)arg1;
- (void)referenceLayoutMapChanged:(id)arg1;
- (void)setLocalLayout:(id)arg1 forKey:(id)arg2;
- (void)storeLocalLayout:(id)arg1 forKey:(id)arg2;
- (void)removeLocalLayoutForKey:(id)arg1;
- (id)localLayoutItemForKey:(id)arg1 layoutItemKey:(id)arg2;
- (id)localLayoutForKey:(id)arg1;
- (id)allActiveLocalKeys;
- (id)allLocalKeys;
- (void)clearLayoutItemCache;
- (void)resetLayouts;
- (void)resetLayoutMap;
- (BOOL)canResetLayoutMap;
- (BOOL)isIntrinsicLayoutMap;
- (BOOL)isIntrinsicLayoutForKey:(id)arg1;
- (void)enumerateLayoutItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateLayoutItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)demandMutableLayoutItemForKey:(id)arg1 layoutItemKey:(id)arg2;
- (id)layoutItemForKey:(id)arg1 layoutItemKey:(id)arg2;
- (id)layoutItemForKey:(id)arg1 layoutItemKey:(id)arg2 localOnly:(BOOL)arg3;
- (void)removeAudioComponentsLayoutForKey:(id)arg1;
- (void)setAudioComponentsLayout:(id)arg1 forKey:(id)arg2;
- (BOOL)isReferenceLayoutMap;
- (BOOL)hasReferenceLayoutMap;
- (id)referenceLayoutMap;
- (id)audioComponentsLayoutForKey:(id)arg1;
- (id)_audioComponentsLayoutForKeyNoCopy:(id)arg1;
- (id)referenceAudioComponentsLayoutForKey:(id)arg1;
- (unsigned int)numOutputChannelsForKeys:(id)arg1 withFlags:(unsigned int)arg2;
- (unsigned int)numOutputChannelsForKeys:(id)arg1;
- (unsigned int)numChannelsForKey:(id)arg1;
- (BOOL)isEqualToLayoutMap:(id)arg1;
- (id)sortLayoutItems:(id)arg1 forLayoutKey:(id)arg2;
- (id)sortKeys:(id)arg1;
- (id)allKeys;
- (id)allReferenceKeys;
- (BOOL)hasLocalLayouts;
- (void)_setupAudioComponentsLayoutMap;
- (id)copyWithDelegate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isValidLayoutItem:(id)arg1;
- (BOOL)isValidLayout:(id)arg1;
- (void)validateLayoutMap;

@end

