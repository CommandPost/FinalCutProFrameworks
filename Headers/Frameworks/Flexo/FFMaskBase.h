//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import <Flexo/FFCHChannelDelegate-Protocol.h>
#import <Flexo/NSCopying-Protocol.h>

@class FFCHObservableFolder, FFEffect;

__attribute__((visibility("hidden")))
@interface FFMaskBase : FFBaseDSObject <NSCopying, FFCHChannelDelegate>
{
    FFEffect *_parentEffect;
    FFCHObservableFolder *_channelFolder;
    unsigned long long _blendMode;
    id _cachedChannelData;
}

+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
- (int)overrideWorkingSpace:(int)arg1;
- (id)processingFormat:(int)arg1;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)_channelParameterChanged:(id)arg1;
- (void)channelParameterChanged:(id)arg1;
- (void)OSCWasResigned:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1 channel:(id)arg2 effect:(id)arg3;
- (BOOL)shouldSelectChannel:(id)arg1 selectedState:(BOOL)arg2 effect:(id)arg3;
- (id)subEffectForChannel:(id)arg1;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3 forChannel:(id)arg4;
- (id)augmentChannelChangeDescriptionForNotification:(id)arg1;
- (id)observedObjectForChannel:(id)arg1;
@property unsigned long long blendMode; // @dynamic blendMode;
- (void)setInverted:(BOOL)arg1;
- (BOOL)inverted;
- (id)invertChannel;
- (BOOL)isNoOp;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)channelData;
- (void)setChannelData:(id)arg1;
@property(nonatomic) FFEffect *parentEffect;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)keyframeableChannels;
- (CDStruct_bdcb2b0d)md5;
- (id)channelFolder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParentEffect:(id)arg1 defaultBlendMode:(unsigned long long)arg2;
- (id)initWithParentEffect:(id)arg1;
- (void)dealloc;
- (void)addXMLNode:(id)arg1 toElement:(id)arg2 version:(unsigned int)arg3;
- (void)addXMLAttributes:(id)arg1 toElement:(id)arg2 version:(unsigned int)arg3;
- (void)populateAttributes:(id)arg1 fromElement:(id)arg2;
- (void)populateContent:(id)arg1 fromElement:(id)arg2 toEffect:(id)arg3 toObject:(id)arg4;
- (struct HGNode *)newNodeAtTime:(CDStruct_1b6d18a9)arg1 pixelTransform:(id)arg2 pixelSpaceBounds:(struct CGRect)arg3 workingSpace:(int)arg4;
- (struct HGNode *)newNodeWithInputNode:(struct HGNode *)arg1 preMaskNode:(struct HGNode *)arg2 atTime:(CDStruct_1b6d18a9)arg3 workingSpace:(int)arg4;
- (struct HGNode *)newNodeAtTime:(CDStruct_1b6d18a9)arg1 pixelTransform:(id)arg2 workingSpace:(int)arg3;
- (BOOL)needsPreMaskInput;
- (id)onscreenControlsForEffectStack:(id)arg1;
- (id)parameterControllerClassName;
- (void)createChannelsInFolder:(id)arg1;

@end

