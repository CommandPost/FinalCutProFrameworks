//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorLooksObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFColorLooksPuckControlGroup : FFColorLooksObject
{
    NSString *_name;
    NSArray *_puckControlValues;
}

+ (id)copyClassDescription;
- (id)initWithLegacyColorBoardPresetData:(id)arg1;
- (id)initWithColorLooksPuckControlValues:(id)arg1 boardType:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property int boardType; // @dynamic boardType;
- (void)encodeWithCoder:(id)arg1;
- (id)displayName;
@property(retain, nonatomic) NSArray *puckControlValues; // @synthesize puckControlValues=_puckControlValues;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

