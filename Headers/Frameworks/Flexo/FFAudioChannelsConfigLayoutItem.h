//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioChannelsConfigLayoutItem : NSObject <NSCoding>
{
    NSString *m_itemName;
    NSArray *m_channelMap;
    NSArray *m_audioChannelRoutingMap;
}

+ (id)itemWithName:(id)arg1 channelMap:(id)arg2;
+ (id)itemWithName:(id)arg1 channelMap:(id)arg2 audioChannelRoutingMap:(id)arg3;
- (id)initWithName:(id)arg1 channelMap:(id)arg2 audioChannelRoutingMap:(id)arg3;
- (id)initWithName:(id)arg1 channelMap:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (int)numChannels;
- (id)description;
- (BOOL)isEquivalentLayoutItemTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *audioChannelRoutingMap; // @synthesize audioChannelRoutingMap=m_audioChannelRoutingMap;
@property(readonly, nonatomic) NSArray *channelMap; // @synthesize channelMap=m_channelMap;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=m_itemName;

@end
