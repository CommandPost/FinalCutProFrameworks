//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFSourceVideo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFPlayerDropTrackerConsolidateInfo : NSObject
{
    FFSourceVideo *_src;
    unsigned int _field;
    CDStruct_1b6d18a9 _sampDur;
    NSMutableArray *_ranges;
}

@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(readonly) CDStruct_1b6d18a9 sampDur; // @synthesize sampDur=_sampDur;
@property(readonly) unsigned int field; // @synthesize field=_field;
@property(readonly) FFSourceVideo *src; // @synthesize src=_src;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithSource:(id)arg1 field:(unsigned int)arg2 sampDur:(CDStruct_1b6d18a9)arg3;

@end

