//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFProjectInfo : NSObject
{
    NSURL *_url;
    NSString *_type;
    BOOL _shouldLoad;
}

@property(nonatomic) BOOL shouldLoad; // @synthesize shouldLoad=_shouldLoad;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSURL *URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1 type:(id)arg2;

@end

