//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFStreamVideo, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectNodeStreamInfo : NSObject
{
    FFStreamVideo *_stream;
    CDStruct_1b6d18a9 _offset;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CDStruct_1b6d18a9 offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) FFStreamVideo *stream; // @synthesize stream=_stream;
- (void)dealloc;
- (id)initWithStream:(id)arg1 offset:(CDStruct_1b6d18a9)arg2 identifier:(id)arg3;

@end

