//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FFColorLooksListItem : NSObject
{
    NSString *_displayName;
    NSString *_path;
    BOOL _isValidArchive;
}

- (id)initWithPath:(id)arg1 doLoadProperties:(BOOL)arg2;
- (void)dealloc;
- (BOOL)loadProperties;
- (id)loadColorLooks;
- (id)description;
@property(readonly) BOOL isValidArchive; // @synthesize isValidArchive=_isValidArchive;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

@end

