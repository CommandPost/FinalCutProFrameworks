//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TLKPartPath : NSObject
{
    NSArray *_partArray;
}

+ (id)partPathWithParts:(id)arg1;
- (id)initWithParts:(id)arg1;
- (void)dealloc;
- (id)allParts;
- (id)firstPart;
- (id)lastPart;
- (id)partWithIdentifier:(id)arg1;
- (id)path;
- (id)description;

@end
