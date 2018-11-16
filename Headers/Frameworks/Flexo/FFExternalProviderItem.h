//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFProServiceBase, NSImage, NSString;

@interface FFExternalProviderItem : NSObject
{
    FFProServiceBase *_plugIn;
    NSString *_identifier;
    NSString *_name;
    NSImage *_icon;
    NSString *_version;
    NSString *_key;
}

@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) FFProServiceBase *plugIn; // @synthesize plugIn=_plugIn;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)dealloc;
- (id)initWithPlugIn:(id)arg1;

@end
