//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFKeyframe : NSObject <NSCoding>
{
    struct _OZKeyframeInfo *_info;
    NSString *ref;
}

@property(retain, nonatomic) NSString *ref; // @synthesize ref;
- (struct _OZKeyframeInfo *)getInfo;
- (void)setInfo:(struct _OZKeyframeInfo *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
