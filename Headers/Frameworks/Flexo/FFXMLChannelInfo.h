//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHChannelBase, FFXMLEnumClass;

__attribute__((visibility("hidden")))
@interface FFXMLChannelInfo : NSObject
{
    CHChannelBase *_channel;
    FFXMLEnumClass *_enumClass;
}

- (id)initWithChannel:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) FFXMLEnumClass *enumClass; // @synthesize enumClass=_enumClass;
@property(readonly, nonatomic) CHChannelBase *channel; // @synthesize channel=_channel;

@end
