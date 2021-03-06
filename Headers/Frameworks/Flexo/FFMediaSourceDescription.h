//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class FFMedia, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface FFMediaSourceDescription : NSObject <NSSecureCoding, NSCopying>
{
    FFMedia *m_media;
    NSString *m_sourceKey;
    NSArray *m_channelMap;
    NSArray *m_audioChannelRoutingMap;
    NSString *m_sourceType;
    NSNumber *m_numSourceChannels;
    NSString *m_defaultMediaSourceName;
}

+ (BOOL)description:(id)arg1 withNumSourceChannels:(unsigned int)arg2 matchesSourceKey:(id)arg3 andChannelMap:(id)arg4;
+ (id)defaultAudioChannelRoutingMapForNumChannels:(int)arg1;
+ (BOOL)isEqualAudioChannelRoutingMaps:(id)arg1 compare:(id)arg2;
+ (BOOL)isEqualChannelMaps:(id)arg1 compare:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)descriptionWithMedia:(id)arg1 sourceKey:(id)arg2 channelIndex:(int)arg3;
+ (id)descriptionWithMedia:(id)arg1 sourceKey:(id)arg2 channelMap:(id)arg3;
+ (id)descriptionWithMedia:(id)arg1 sourceKey:(id)arg2;
@property(retain, nonatomic) NSNumber *numSourceChannels; // @synthesize numSourceChannels=m_numSourceChannels;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=m_sourceType;
@property(retain, nonatomic) NSArray *audioChannelRoutingMap; // @synthesize audioChannelRoutingMap=m_audioChannelRoutingMap;
@property(retain, nonatomic) NSArray *channelMap; // @synthesize channelMap=m_channelMap;
@property(retain, nonatomic) NSString *sourceKey; // @synthesize sourceKey=m_sourceKey;
@property(retain, nonatomic) FFMedia *media; // @synthesize media=m_media;
- (void)setDefaultMediaSourceName:(id)arg1;
- (id)defaultMediaSourceName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMedia:(id)arg1 sourceKey:(id)arg2 channelMap:(id)arg3;
- (void)dealloc;

@end

