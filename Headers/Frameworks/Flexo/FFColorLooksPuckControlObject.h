//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorLooksObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFColorLooksPuckControlObject : FFColorLooksObject
{
    NSString *_name;
    NSArray *_puckControlGroups;
}

+ (id)copyClassDescription;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_puckControlGroups;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)removeObjectFromGroupsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inGroupsAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *puckControlGroups; // @dynamic puckControlGroups;
- (void)dealloc;
- (id)initWithLegacyColorBoardPresetData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPuckControlGroups:(id)arg1 name:(id)arg2;

@end

