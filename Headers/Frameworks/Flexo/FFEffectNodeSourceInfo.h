//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFSource, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectNodeSourceInfo : NSObject
{
    FFSource *_source;
    CDStruct_1b6d18a9 _offset;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CDStruct_1b6d18a9 offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) FFSource *source; // @synthesize source=_source;
- (id).cxx_construct;
- (CDStruct_e83c9415)srcTimeRange;
- (void)dealloc;
- (id)initWithSource:(id)arg1 offset:(CDStruct_1b6d18a9)arg2 identifier:(id)arg3;

@end

