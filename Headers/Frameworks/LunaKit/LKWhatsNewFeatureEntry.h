//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface LKWhatsNewFeatureEntry : NSObject
{
    NSString *_name;
    NSString *_details;
    NSImage *_image;
}

+ (id)entryForNumber:(unsigned long long)arg1 withPrefix:(id)arg2 fromTables:(id)arg3 ofBundle:(id)arg4;
+ (id)entryForSubKey:(id)arg1 withPrefix:(id)arg2 fromTables:(id)arg3 ofBundle:(id)arg4;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(readonly) NSString *details; // @synthesize details=_details;
@property(readonly) NSString *name; // @synthesize name=_name;
- (BOOL)nameOnly;
- (void)dealloc;
- (id)initWithName:(id)arg1 details:(id)arg2 image:(id)arg3;

@end

