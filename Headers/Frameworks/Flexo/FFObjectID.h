//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FFObjectID : NSObject <NSCopying>
{
}

+ (id)identifierForObject:(id)arg1;
+ (id)resolveObjectIdentifier:(id)arg1 error:(id *)arg2;
+ (id)URLFromID:(id)arg1;
+ (id)IDFromURL:(id)arg1;
+ (id)copyFromURL:(id)arg1;
+ (id)fromObject:(id)arg1;
+ (id)copyFromObject:(id)arg1;
+ (id)uuid:(id)arg1;
+ (id)resolveObject:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
