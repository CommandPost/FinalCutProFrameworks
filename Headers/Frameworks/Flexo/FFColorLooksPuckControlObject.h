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
- (id)initWithPuckControlGroups:(id)arg1 name:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyColorBoardPresetData:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)displayName;
@property(retain, nonatomic) NSArray *puckControlGroups; // @synthesize puckControlGroups=_puckControlGroups;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

