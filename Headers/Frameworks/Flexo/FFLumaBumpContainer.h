//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCopying.h"

@class NSArray, NSMutableArray;

@interface FFLumaBumpContainer : FFBaseDSObject <NSCopying>
{
    NSMutableArray *_lumaBumpChannels;
    NSMutableArray *_lumaBumps;
}

+ (id)copyClassDescription;
@property(readonly, nonatomic) NSArray *lumaBumps; // @synthesize lumaBumps=_lumaBumps;
@property(readonly, nonatomic) NSArray *lumaBumpChannels; // @synthesize lumaBumpChannels=_lumaBumpChannels;
- (BOOL)projectUpdaterConformLumaBumpsToDataWithEffect:(id)arg1 error:(id *)arg2;
- (CDStruct_bdcb2b0d)md5;
- (BOOL)isAtDefaultSettings;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
