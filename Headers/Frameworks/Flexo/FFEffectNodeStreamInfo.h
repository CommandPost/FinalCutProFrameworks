//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFStreamVideo, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectNodeStreamInfo : NSObject
{
    FFStreamVideo *_stream;
    CDStruct_1b6d18a9 _offset;
    NSString *_identifier;
}

- (id)initWithStream:(id)arg1 offset:(CDStruct_1b6d18a9)arg2 identifier:(id)arg3;
- (void)dealloc;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CDStruct_1b6d18a9 offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) FFStreamVideo *stream; // @synthesize stream=_stream;

@end

